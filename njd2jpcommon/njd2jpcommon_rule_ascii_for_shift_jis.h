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

#ifndef NJD2JPCOMMON_RULE_H
#define NJD2JPCOMMON_RULE_H

#ifdef __cplusplus
#define NJD2JPCOMMON_RULE_H_START extern "C" {
#define NJD2JPCOMMON_RULE_H_END   }
#else
#define NJD2JPCOMMON_RULE_H_START
#define NJD2JPCOMMON_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD2JPCOMMON_RULE_H_START;

static const char *njd2jpcommon_pos_list[] = {
   "\x82\xbb\x82\xcc\x91\xbc", "\x8a\xd4\x93\x8a", "*", "*", "\x82\xbb\x82\xcc\x91\xbc",
   "\x83\x74\x83\x42\x83\x89\x81\x5b", "*", "*", "*", "\x8a\xb4\x93\xae\x8e\x8c",
   "\x8a\xb4\x93\xae\x8e\x8c", "*", "*", "*", "\x8a\xb4\x93\xae\x8e\x8c",
   "\x8b\x4c\x8d\x86", "\x83\x41\x83\x8b\x83\x74\x83\x40\x83\x78\x83\x62\x83\x67", "*", "*", "\x8b\x4c\x8d\x86",
   "\x8b\x4c\x8d\x86", "\x88\xea\x94\xca", "*", "*", "\x8b\x4c\x8d\x86",
   "\x8b\x4c\x8d\x86", "\x8a\x87\x8c\xca\x8a\x4a", "*", "*", "\x8b\x4c\x8d\x86",
   "\x8b\x4c\x8d\x86", "\x8a\x87\x8c\xca\x95\xc2", "*", "*", "\x8b\x4c\x8d\x86",
   "\x8b\x4c\x8d\x86", "\x8b\xe5\x93\x5f", "*", "*", "\x8b\x4c\x8d\x86",
   "\x8b\x4c\x8d\x86", "\x8b\xf3\x94\x92", "*", "*", "\x8b\x4c\x8d\x86",
   "\x8b\x4c\x8d\x86", "\x93\xc7\x93\x5f", "*", "*", "\x8b\x4c\x8d\x86",
   "\x8c\x60\x97\x65\x8e\x8c", "\x8e\xa9\x97\xa7", "*", "*", "\x8c\x60\x97\x65\x8e\x8c",
   "\x8c\x60\x97\x65\x8e\x8c", "\x90\xda\x94\xf6", "*", "*", "\x90\xda\x94\xf6\x8e\xab-\x8c\x60\x97\x65\x8e\x8c\x93\x49",
   "\x8c\x60\x97\x65\x8e\x8c", "\x94\xf1\x8e\xa9\x97\xa7", "*", "*", "\x8c\x60\x97\x65\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x8a\x69\x8f\x95\x8e\x8c", "\x88\xea\x94\xca", "*", "\x8f\x95\x8e\x8c-\x8a\x69\x8f\x95\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x8a\x69\x8f\x95\x8e\x8c", "\x88\xf8\x97\x70", "*", "\x8f\x95\x8e\x8c-\x8a\x69\x8f\x95\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x8a\x69\x8f\x95\x8e\x8c", "\x98\x41\x8c\xea", "*", "\x8f\x95\x8e\x8c-\x8a\x69\x8f\x95\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x8c\x57\x8f\x95\x8e\x8c", "*", "*", "\x8f\x95\x8e\x8c-\x8c\x57\x8f\x95\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x8f\x49\x8f\x95\x8e\x8c", "*", "*", "\x8f\x95\x8e\x8c-\x8f\x49\x8f\x95\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x90\xda\x91\xb1\x8f\x95\x8e\x8c", "*", "*", "\x8f\x95\x8e\x8c-\x90\xda\x91\xb1\x8f\x95\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x93\xc1\x8e\xea", "*", "*", "\x8f\x95\x8e\x8c-\x82\xbb\x82\xcc\x91\xbc",
   "\x8f\x95\x8e\x8c", "\x95\x9b\x8e\x8c\x89\xbb", "*", "*", "\x8f\x95\x8e\x8c-\x82\xbb\x82\xcc\x91\xbc",
   "\x8f\x95\x8e\x8c", "\x95\x9b\x8f\x95\x8e\x8c", "*", "*", "\x8f\x95\x8e\x8c-\x95\x9b\x8f\x95\x8e\x8c",
   "\x8f\x95\x8e\x8c", "\x95\x9b\x8f\x95\x8e\x8c\x81\x5e\x95\xc0\x97\xa7\x8f\x95\x8e\x8c\x81\x5e\x8f\x49\x8f\x95\x8e\x8c", "*", "*", "\x8f\x95\x8e\x8c-\x82\xbb\x82\xcc\x91\xbc",
   "\x8f\x95\x8e\x8c", "\x95\xc0\x97\xa7\x8f\x95\x8e\x8c", "*", "*", "\x8f\x95\x8e\x8c-\x82\xbb\x82\xcc\x91\xbc",
   "\x8f\x95\x8e\x8c", "\x98\x41\x91\xcc\x89\xbb", "*", "*", "\x8f\x95\x8e\x8c-\x82\xbb\x82\xcc\x91\xbc",
   "\x8f\x95\x93\xae\x8e\x8c", "*", "*", "*", "\x8f\x95\x93\xae\x8e\x8c",
   "\x90\xda\x91\xb1\x8e\x8c", "*", "*", "*", "\x90\xda\x91\xb1\x8e\x8c",
   "\x90\xda\x93\xaa\x8e\x8c", "\x8c\x60\x97\x65\x8e\x8c\x90\xda\x91\xb1", "*", "*", "\x90\xda\x93\xaa\x8e\xab",
   "\x90\xda\x93\xaa\x8e\x8c", "\x90\x94\x90\xda\x91\xb1", "*", "*", "\x90\xda\x93\xaa\x8e\xab",
   "\x90\xda\x93\xaa\x8e\x8c", "\x93\xae\x8e\x8c\x90\xda\x91\xb1", "*", "*", "\x90\xda\x93\xaa\x8e\xab",
   "\x90\xda\x93\xaa\x8e\x8c", "\x96\xbc\x8e\x8c\x90\xda\x91\xb1", "*", "*", "\x90\xda\x93\xaa\x8e\xab",
   "\x93\xae\x8e\x8c", "\x8e\xa9\x97\xa7", "*", "*", "\x93\xae\x8e\x8c",
   "\x93\xae\x8e\x8c", "\x90\xda\x94\xf6", "*", "*", "\x90\xda\x94\xf6\x8e\xab-\x93\xae\x8e\x8c\x93\x49",
   "\x93\xae\x8e\x8c", "\x94\xf1\x8e\xa9\x97\xa7", "*", "*", "\x93\xae\x8e\x8c-\x94\xf1\x8e\xa9\x97\xa7",
   "\x95\x9b\x8e\x8c", "*", "*", "*", "\x95\x9b\x8e\x8c",
   "\x95\x9b\x8e\x8c", "\x88\xea\x94\xca", "*", "*", "\x95\x9b\x8e\x8c",
   "\x95\x9b\x8e\x8c", "\x8f\x95\x8e\x8c\x97\xde\x90\xda\x91\xb1", "*", "*", "\x95\x9b\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x83\x54\x95\xcf\x90\xda\x91\xb1", "*", "*", "\x96\xbc\x8e\x8c-\x83\x54\x95\xcf\x90\xda\x91\xb1",
   "\x96\xbc\x8e\x8c", "\x83\x69\x83\x43\x8c\x60\x97\x65\x8e\x8c\x8c\xea\x8a\xb2", "*", "*", "\x96\xbc\x8e\x8c-\x95\x81\x92\xca\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x88\xea\x94\xca", "*", "*", "\x96\xbc\x8e\x8c-\x95\x81\x92\xca\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x88\xf8\x97\x70\x95\xb6\x8e\x9a\x97\xf1", "*", "*", "\x96\xbc\x8e\x8c-\x95\x81\x92\xca\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\x60\x97\x65\x93\xae\x8e\x8c\x8c\xea\x8a\xb2", "*", "*", "\x8c\x60\x8f\xf3\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c", "\x88\xea\x94\xca", "*", "\x96\xbc\x8e\x8c-\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c", "\x90\x6c\x96\xbc", "\x88\xea\x94\xca", "\x96\xbc\x8e\x8c-\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c", "\x90\x6c\x96\xbc", "\x90\xa9", "\x96\xbc\x8e\x8c-\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c", "\x90\x6c\x96\xbc", "\x96\xbc", "\x96\xbc\x8e\x8c-\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c", "\x91\x67\x90\x44", "*", "\x96\xbc\x8e\x8c-\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c", "\x92\x6e\x88\xe6", "\x88\xea\x94\xca", "\x96\xbc\x8e\x8c-\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c", "\x92\x6e\x88\xe6", "\x8d\x91", "\x96\xbc\x8e\x8c-\x8c\xc5\x97\x4c\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x90\x94", "*", "*", "\x96\xbc\x8e\x8c-\x90\x94\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x90\xda\x91\xb1\x8e\x8c\x93\x49", "*", "*", "\x96\xbc\x8e\x8c-\x95\x81\x92\xca\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x83\x54\x95\xcf\x90\xda\x91\xb1", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x88\xea\x94\xca", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x8c\x60\x97\x65\x93\xae\x8e\x8c\x8c\xea\x8a\xb2", "*", "\x90\xda\x94\xf6\x8e\xab-\x8c\x60\x8f\xf3\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x8f\x95\x90\x94\x8e\x8c", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x8f\x95\x93\xae\x8e\x8c\x8c\xea\x8a\xb2", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x90\x6c\x96\xbc", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x92\x6e\x88\xe6", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x93\xc1\x8e\xea", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x90\xda\x94\xf6", "\x95\x9b\x8e\x8c\x89\xc2\x94\x5c", "*", "\x90\xda\x94\xf6\x8e\xab-\x96\xbc\x8e\x8c\x93\x49",
   "\x96\xbc\x8e\x8c", "\x91\xe3\x96\xbc\x8e\x8c", "\x88\xea\x94\xca", "*", "\x91\xe3\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x91\xe3\x96\xbc\x8e\x8c", "\x8f\x6b\x96\xf1", "*", "\x91\xe3\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x93\xae\x8e\x8c\x94\xf1\x8e\xa9\x97\xa7\x93\x49", "*", "*", "\x96\xbc\x8e\x8c-\x95\x81\x92\xca\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x93\xc1\x8e\xea", "\x8f\x95\x93\xae\x8e\x8c\x8c\xea\x8a\xb2", "*", "\x96\xbc\x8e\x8c-\x95\x81\x92\xca\x96\xbc\x8e\x8c",
   "\x96\xbc\x8e\x8c", "\x94\xf1\x8e\xa9\x97\xa7", "\x88\xea\x94\xca", "*", "\x96\xbc\x8e\x8c-\x94\xf1\x8e\xa9\x97\xa7",
   "\x96\xbc\x8e\x8c", "\x94\xf1\x8e\xa9\x97\xa7", "\x8c\x60\x97\x65\x93\xae\x8e\x8c\x8c\xea\x8a\xb2", "*", "\x96\xbc\x8e\x8c-\x94\xf1\x8e\xa9\x97\xa7",
   "\x96\xbc\x8e\x8c", "\x94\xf1\x8e\xa9\x97\xa7", "\x8f\x95\x93\xae\x8e\x8c\x8c\xea\x8a\xb2", "*", "\x96\xbc\x8e\x8c-\x94\xf1\x8e\xa9\x97\xa7",
   "\x96\xbc\x8e\x8c", "\x94\xf1\x8e\xa9\x97\xa7", "\x95\x9b\x8e\x8c\x89\xc2\x94\x5c", "*", "\x96\xbc\x8e\x8c-\x94\xf1\x8e\xa9\x97\xa7",
   "\x96\xbc\x8e\x8c", "\x94\xf1\x8e\xa9\x97\xa7", "*", "*", "\x96\xbc\x8e\x8c-\x94\xf1\x8e\xa9\x97\xa7",
   "\x96\xbc\x8e\x8c", "\x95\x9b\x8e\x8c\x89\xc2\x94\x5c", "*", "*", "\x96\xbc\x8e\x8c-\x95\x81\x92\xca\x96\xbc\x8e\x8c",
   "\x98\x41\x91\xcc\x8e\x8c", "*", "*", "*", "\x98\x41\x91\xcc\x8e\x8c",
   NULL, NULL, NULL, NULL, NULL
};

static const char *njd2jpcommon_cform_list[] = {
   "*", "*",
   "\x83\x4b\x83\x8b\x90\xda\x91\xb1", "\x82\xbb\x82\xcc\x91\xbc",
   "\x89\xb9\x95\xd6\x8a\xee\x96\x7b\x8c\x60", "\x8a\xee\x96\x7b\x8c\x60",
   "\x89\xbc\x92\xe8\x8c\x60", "\x89\xbc\x92\xe8\x8c\x60",
   "\x89\xbc\x92\xe8\x8f\x6b\x96\xf1\x82\x50", "\x89\xbc\x92\xe8\x8c\x60",
   "\x89\xbc\x92\xe8\x8f\x6b\x96\xf1\x82\x51", "\x89\xbc\x92\xe8\x8c\x60",
   "\x8a\xee\x96\x7b\x8c\x60", "\x8a\xee\x96\x7b\x8c\x60",
   "\x8a\xee\x96\x7b\x8c\x60-\x91\xa3\x89\xb9\x95\xd6", "\x8a\xee\x96\x7b\x8c\x60",
   "\x8c\xbb\x91\xe3\x8a\xee\x96\x7b\x8c\x60", "\x8a\xee\x96\x7b\x8c\x60",
   "\x91\xcc\x8c\xbe\x90\xda\x91\xb1", "\x98\x41\x91\xcc\x8c\x60",
   "\x91\xcc\x8c\xbe\x90\xda\x91\xb1\x93\xc1\x8e\xea", "\x98\x41\x91\xcc\x8c\x60",
   "\x91\xcc\x8c\xbe\x90\xda\x91\xb1\x93\xc1\x8e\xea\x82\x51", "\x98\x41\x91\xcc\x8c\x60",
   "\x95\xb6\x8c\xea\x8a\xee\x96\x7b\x8c\x60", "\x8a\xee\x96\x7b\x8c\x60",
   "\x96\xa2\x91\x52\x83\x45\x90\xda\x91\xb1", "\x96\xa2\x91\x52\x8c\x60",
   "\x96\xa2\x91\x52\x83\x6b\x90\xda\x91\xb1", "\x96\xa2\x91\x52\x8c\x60",
   "\x96\xa2\x91\x52\x83\x8c\x83\x8b\x90\xda\x91\xb1", "\x96\xa2\x91\x52\x8c\x60",
   "\x96\xa2\x91\x52\x8c\x60", "\x96\xa2\x91\x52\x8c\x60",
   "\x96\xa2\x91\x52\x93\xc1\x8e\xea", "\x96\xa2\x91\x52\x8c\x60",
   "\x96\xbd\x97\xdf\x82\x85", "\x96\xbd\x97\xdf\x8c\x60",
   "\x96\xbd\x97\xdf\x82\x89", "\x96\xbd\x97\xdf\x8c\x60",
   "\x96\xbd\x97\xdf\x82\x92\x82\x8f", "\x96\xbd\x97\xdf\x8c\x60",
   "\x96\xbd\x97\xdf\x82\x99\x82\x8f", "\x96\xbd\x97\xdf\x8c\x60",
   "\x98\x41\x97\x70\x83\x53\x83\x55\x83\x43\x90\xda\x91\xb1", "\x98\x41\x97\x70\x8c\x60",
   "\x98\x41\x97\x70\x83\x5e\x90\xda\x91\xb1", "\x98\x41\x97\x70\x8c\x60",
   "\x98\x41\x97\x70\x83\x65\x90\xda\x91\xb1", "\x98\x41\x97\x70\x8c\x60",
   "\x98\x41\x97\x70\x83\x66\x90\xda\x91\xb1", "\x98\x41\x97\x70\x8c\x60",
   "\x98\x41\x97\x70\x83\x6a\x90\xda\x91\xb1", "\x98\x41\x97\x70\x8c\x60",
   "\x98\x41\x97\x70\x8c\x60", "\x98\x41\x97\x70\x8c\x60",
   NULL, NULL
};

static const char *njd2jpcommon_ctype_list[] = {
   "*", "*",
   "\x83\x4a\x95\xcf\x81\x45\x83\x4e\x83\x8b", "\x83\x4a\x8d\x73\x95\xcf\x8a\x69",
   "\x83\x4a\x95\xcf\x81\x45\x97\x88\x83\x8b", "\x83\x4a\x8d\x73\x95\xcf\x8a\x69",
   "\x83\x54\x95\xcf\x81\x45\x81\x7c\x83\x58\x83\x8b", "\x83\x54\x8d\x73\x95\xcf\x8a\x69",
   "\x83\x54\x95\xcf\x81\x45\x81\x7c\x83\x59\x83\x8b", "\x83\x54\x8d\x73\x95\xcf\x8a\x69",
   "\x83\x54\x95\xcf\x81\x45\x83\x58\x83\x8b", "\x83\x54\x8d\x73\x95\xcf\x8a\x69",
   "\x83\x89\x95\xcf", "\x83\x89\x8d\x73\x95\xcf\x8a\x69",
   "\x88\xea\x92\x69", "\x88\xea\x92\x69",
   "\x88\xea\x92\x69\x81\x45\x83\x4e\x83\x8c\x83\x8b", "\x88\xea\x92\x69",
   "\x88\xea\x92\x69\x81\x45\x93\xbe\x83\x8b", "\x88\xea\x92\x69",
   "\x89\xba\x93\xf1\x81\x45\x83\x4a\x8d\x73", "\x93\xf1\x92\x69",
   "\x89\xba\x93\xf1\x81\x45\x83\x4b\x8d\x73", "\x93\xf1\x92\x69",
   "\x89\xba\x93\xf1\x81\x45\x83\x5e\x8d\x73", "\x93\xf1\x92\x69",
   "\x89\xba\x93\xf1\x81\x45\x83\x5f\x8d\x73", "\x93\xf1\x92\x69",
   "\x89\xba\x93\xf1\x81\x45\x83\x6e\x8d\x73", "\x93\xf1\x92\x69",
   "\x89\xba\x93\xf1\x81\x45\x83\x7d\x8d\x73", "\x93\xf1\x92\x69",
   "\x89\xba\x93\xf1\x81\x45\x93\xbe", "\x93\xf1\x92\x69",
   "\x8c\x60\x97\x65\x8e\x8c\x81\x45\x83\x41\x83\x45\x83\x49\x92\x69", "\x8c\x60\x97\x65\x8e\x8c",
   "\x8c\x60\x97\x65\x8e\x8c\x81\x45\x83\x43\x83\x43", "\x8c\x60\x97\x65\x8e\x8c",
   "\x8c\x60\x97\x65\x8e\x8c\x81\x45\x83\x43\x92\x69", "\x8c\x60\x97\x65\x8e\x8c",
   "\x8c\xdc\x92\x69\x81\x45\x83\x4a\x8d\x73\x83\x43\x89\xb9\x95\xd6", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x4a\x8d\x73\x91\xa3\x89\xb9\x95\xd6", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x4a\x8d\x73\x91\xa3\x89\xb9\x95\xd6\x83\x86\x83\x4e", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x4b\x8d\x73", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x54\x8d\x73", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x5e\x8d\x73", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x69\x8d\x73", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x6f\x8d\x73", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x7d\x8d\x73", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x89\x8d\x73", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x89\x8d\x73\x83\x41\x83\x8b", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x89\x8d\x73\x93\xc1\x8e\xea", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x8f\x8d\x73\x83\x45\x89\xb9\x95\xd6", "\x8c\xdc\x92\x69",
   "\x8c\xdc\x92\x69\x81\x45\x83\x8f\x8d\x73\x91\xa3\x89\xb9\x95\xd6", "\x8c\xdc\x92\x69",
   "\x8e\x6c\x92\x69\x81\x45\x83\x54\x8d\x73", "\x8e\x6c\x92\x69",
   "\x8e\x6c\x92\x69\x81\x45\x83\x5e\x8d\x73", "\x8e\x6c\x92\x69",
   "\x8e\x6c\x92\x69\x81\x45\x83\x6e\x8d\x73", "\x8e\x6c\x92\x69",
   "\x8e\x6c\x92\x69\x81\x45\x83\x6f\x8d\x73", "\x8e\x6c\x92\x69",
   "\x8f\xe3\x93\xf1\x81\x45\x83\x5f\x8d\x73", "\x93\xf1\x92\x69",
   "\x8f\xe3\x93\xf1\x81\x45\x83\x6e\x8d\x73", "\x93\xf1\x92\x69",
   "\x93\xc1\x8e\xea\x81\x45\x83\x57\x83\x83", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x5e", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x5e\x83\x43", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x5f", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x66\x83\x58", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x69\x83\x43", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x6b", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x7d\x83\x58", "\x8f\x95\x93\xae\x8e\x8c",
   "\x93\xc1\x8e\xea\x81\x45\x83\x84", "\x8f\x95\x93\xae\x8e\x8c",
   "\x95\x73\x95\xcf\x89\xbb\x8c\x5e", "\x95\x73\x95\xcf\x89\xbb",
   "\x95\xb6\x8c\xea\x81\x45\x83\x4c", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   "\x95\xb6\x8c\xea\x81\x45\x83\x50\x83\x8a", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   "\x95\xb6\x8c\xea\x81\x45\x83\x53\x83\x67\x83\x56", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   "\x95\xb6\x8c\xea\x81\x45\x83\x69\x83\x8a", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   "\x95\xb6\x8c\xea\x81\x45\x83\x78\x83\x56", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   "\x95\xb6\x8c\xea\x81\x45\x83\x7d\x83\x57", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   "\x95\xb6\x8c\xea\x81\x45\x83\x8a", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   "\x95\xb6\x8c\xea\x81\x45\x83\x8b", "\x95\xb6\x8c\xea\x8f\x95\x93\xae\x8e\x8c",
   NULL, NULL
};

NJD2JPCOMMON_RULE_H_END;

#endif                          /* !NJD2JPCOMMON_RULE_H */
