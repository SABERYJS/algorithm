/*Copyright (c) 2019 , saberyjs@gmail.com
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the <organization>.
4. Neither the name of the <organization> nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY <COPYRIGHT HOLDER> ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#include "../src/core/net.h"
#include <sys/select.h>
#include "../src/algorithm/rb-tree.h"
#include "../src/core/string-tool.h"
#include "../src/core/config.h"
#include "../src/core/log.h"
#include "../src/core/base_64.h"
#include "../src/core/http_media_type.h"
#include "../src/core/http_url_encode.h"


int main(void) {
    char *src = "https://translate.google.cn/#view=home&op=translate&sl=en&tl=zh-CN&text=Since%20the%20restriction%20of%20the%20Unicode%20code-space%20to%2021-bit%20values%20in%202003%2C%20UTF-8%20is%20defined%20to%20encode%20code%20points%20in%20one%20to%20four%20bytes%2C%20depending%20on%20the%20number%20of%20significant%20bits%20in%20the%20numerical%20value%20of%20the%20code%20point.%20The%20following%20table%20shows%20the%20structure%20of%20the%20encoding.%20The%20x%20characters%20are%20replaced%20by%20the%20bits%20of%20the%20code%20point.%20If%20the%20number%20of%20significant%20bits%20is%20no%20more%20than%20seven%2C%20the%20first%20line%20applies%3B%20if%20no%20more%20than%2011%20bits%2C%20the%20second%20line%20applies%2C%20and%20so%20on.";
    printf("%s\n", HttpUrlDecode(src));
}