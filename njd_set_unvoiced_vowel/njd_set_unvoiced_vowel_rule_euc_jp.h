/* ----------------------------------------------------------------- */
/*           The Japanese TTS System "Open JTalk"                    */
/*           developed by HTS Working Group                          */
/*           http://open-jtalk.sourceforge.net/                      */
/* ----------------------------------------------------------------- */
/*                                                                   */
/*  Copyright (c) 2008-2013  Nagoya Institute of Technology          */
/*                           Department of Computer Science          */
/*                                                                   */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms, with or        */
/* without modification, are permitted provided that the following   */
/* conditions are met:                                               */
/*                                                                   */
/* - Redistributions of source code must retain the above copyright  */
/*   notice, this list of conditions and the following disclaimer.   */
/* - Redistributions in binary form must reproduce the above         */
/*   copyright notice, this list of conditions and the following     */
/*   disclaimer in the documentation and/or other materials provided */
/*   with the distribution.                                          */
/* - Neither the name of the HTS working group nor the names of its  */
/*   contributors may be used to endorse or promote products derived */
/*   from this software without specific prior written permission.   */
/*                                                                   */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND            */
/* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,       */
/* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF          */
/* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE          */
/* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS */
/* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,          */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED   */
/* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON */
/* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,   */
/* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY    */
/* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE           */
/* POSSIBILITY OF SUCH DAMAGE.                                       */
/* ----------------------------------------------------------------- */

#ifndef NJD_SET_UNVOICED_VOWEL_RULE_H
#define NJD_SET_UNVOICED_VOWEL_RULE_H

#ifdef __cplusplus
#define NJD_SET_UNVOICED_VOWEL_RULE_H_START extern "C" {
#define NJD_SET_UNVOICED_VOWEL_RULE_H_END   }
#else
#define NJD_SET_UNVOICED_VOWEL_RULE_H_START
#define NJD_SET_UNVOICED_VOWEL_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_UNVOICED_VOWEL_RULE_H_START;

/*
  ????????: k ky s sh t ty ch ts h f hy p py
  Rule 1 ?????????????????????????????????????????? (??????????)
  Rule 2 ??????????????????
  Rule 3 ??????????????????????????
  Rule 4 ????????(k ky s sh t ty ch ts h f hy p py)????????????i??????u??????????
         ??????s->s, s->sh, f->f, f->h, f->hy, h->f, h->h, h->hy
*/

#define NJD_SET_UNVOICED_VOWEL_QUOTATION "??"
#define NJD_SET_UNVOICED_VOWEL_QUESTION "??"
#define NJD_SET_UNVOICED_VOWEL_TOUTEN "??"

#define NJD_SET_UNVOICED_VOWEL_JODOUSHI "??????"

static const char *njd_set_unvoiced_vowel_candidate_list1[] = {
   "????",                      /* s i */
   "??",                        /* s u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list1[] = {
   "??",                        /* k ky */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* t ty ch ts */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* h f hy */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* p py */
   "??",
   "??",
   "??",
   "??",
   NULL
};

static const char *njd_set_unvoiced_vowel_candidate_list2[] = {
   "????",                      /* f i */
   "??",                        /* h i */
   "??",                        /* f u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list2[] = {
   "??",                        /* k ky */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* s sh */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* t ty ch ts */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* p py */
   "??",
   "??",
   "??",
   "??",
   NULL
};

static const char *njd_set_unvoiced_vowel_candidate_list3[] = {
   "????",                      /* ky u */
   "????",                      /* sh u */
   "????",                      /* ch u */
   "????",                      /* ts i */
   "????",                      /* hy u */
   "????",                      /* py u */
   "????",                      /* ty u */
   "????",                      /* t u */
   "????",                      /* t i */
   "??",                        /* k i */
   "??",                        /* k u */
   "??",                        /* sh i */
   "??",                        /* ch i */
   "??",                        /* ts u */
   "??",                        /* p i */
   "??",                        /* p u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list3[] = {
   "??",                        /* k ky */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* s sh */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* t ty ch ts */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* h f hy */
   "??",
   "??",
   "??",
   "??",
   "??",                        /* p py */
   "??",
   "??",
   "??",
   "??",
   NULL
};

static const char *njd_set_unvoiced_vowel_mora_list[] = {
   "????",
   "????",
   "????",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "????",
   "??",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "????",
   "??",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "????",
   "????",
   "????",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "??",
   "????",
   "????",
   "????",
   "??",
   "??",
   "????",
   "??",
   "??",
   "??",
   "??",
   "??",
   NULL
};

NJD_SET_UNVOICED_VOWEL_RULE_H_END;

#endif                          /* !NJD_SET_UNVOICED_VOWEL_RULE_H */
