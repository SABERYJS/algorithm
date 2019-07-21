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

#ifndef STL_CLONE_HTTP_MEDIA_TYPE_H
#define STL_CLONE_HTTP_MEDIA_TYPE_H

#include "global_header.h"
#include "log.h"
#include "http.h"

#define MEDIA_TYPE_CONFIG_FILE_PARSE_CHUNK 1024 //file parse buffer size

#define BRACKET_LEFT  ('{')
#define BRACKET_RIGHT  ('}')

#define CharIsBracketLeft(c)  (c==BRACKET_LEFT)
#define CharIsBracketRight(c)  (c==BRACKET_RIGHT)
#define CharIsPlus(c)  (c=='+')
#define CharIsBlackSlash(c)   (c==CHAR_BACKSLASH)
#define CharIsBar(c)  (c=='-')

struct MediaTypeEntry {
    char *header_value;
    char *ext_name;
};

struct MediaTypeConfig {
    struct HashTable *hash;//store ext and header value
    struct Log *log;//for debug
};


struct MediaTypeConfig *MediaTypeCreate(size_t bucket_size, struct Log *log, unsigned int (*hashMap)(char *));

int MediaTypeConfigParse(struct MediaTypeConfig *config, const char *filename);

#endif //STL_CLONE_HTTP_MEDIA_TYPE_H
