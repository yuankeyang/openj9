/*******************************************************************************
 * Copyright (c) 2002, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/
#define true 1
#define false 0
#include "floatsanityg.h"


   void group_java_lang_Math_log() {
      int i=0, groupNum=37,numTests=164;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0x00000000,0x3ff00000, 
         0x8b145769,0x4005bf0a, 
         0x00000000,0x40000000, 
         0xb8d4ddae,0x401d8e64, 
         0x00000000,0x40080000, 
         0xbf6fb106,0x403415e5, 
         0x00000000,0x40100000, 
         0x2e273a58,0x404b4c90, 
         0x00000000,0x40140000, 
         0x9970338f,0x40628d38, 
         0x00000000,0x40180000, 
         0x5690c08f,0x407936dc, 
         0x00000000,0x401c0000, 
         0x5aaeddaa,0x40912288, 
         0x00000000,0x40200000, 
         0x7d470c6e,0x40a749ea, 
         0x00000000,0x40220000, 
         0x7c470f82,0x40bfa715, 
         0x00000000,0x40240000, 
         0xcf950560,0x40d5829d, 
         0x00000000,0x40260000, 
         0x88ee4f7f,0x40ed3c44, 
         0x00000000,0x40280000, 
         0x54d37c9a,0x4103de16, 
         0x00000000,0x402a0000, 
         0x916ac955,0x411b00b5, 
         0x00000000,0x402c0000, 
         0x48bf05d7,0x413259ac, 
         0x00000000,0x402e0000, 
         0xafad2a87,0x4148f0cc, 
         0x00000000,0x40300000, 
         0xd0a80020,0x4160f2eb, 
         0x00000000,0x7ff00000, 
         0x0,0x0, 
         0x00000000,0x80000000, 
         0x00000000,0xfff00000, 
         0x00000000,0x7ff80000, 
         0xf95ac4e8,0x3fd58139, 
         0xca24770c,0x3fd4d753, 
         0xe2ee80f8,0x3fe1f1b5, 
         0xb7f0c2cd,0x3fe49c30, 
         0xb0e4050c,0x3fe7d46b, 
         0x09547674,0x3fc0e1f1, 
         0xa53076c8,0x3fd1a461, 
         0x187c4bbf,0x3fe6d154, 
         0xf9d650c2,0x3fe7ba16, 
         0x11a7fd62,0x3fe8ff6c, 
         0x212ad2cc,0x3fda4581, 
         0xe8c22c3c,0x3fd48eb0, 
         0x7edbf5f0,0x3fde27bd, 
         0xdca6b9ac,0x3fc04b98, 
         0x547f8161,0x3fe1d234, 
         0x8232e8e3,0x3fe3af12, 
         0xf31f38d8,0x3fe8cf7c, 
         0x3cd8f2bf,0x3fe87105, 
         0x96cf3360,0x3f932ffb, 
         0x50af46e8,0x3fb378cd, 
         0xd7e968a9,0x3ff921f0, 
         0x54442d18,0xc01921fb, 
         0x54442d1b,0x3ff921fb, 
         0xffffffff,0xffefffff, 
         0xcccccccc,0xffeccccc, 
         0x99999999,0xffe99999, 
         0x66666666,0xffe66666, 
         0x33333333,0xffe33333, 
         0x00000000,0xffe00000, 
         0x9999999a,0xffd99999, 
         0x33333334,0xffd33333, 
         0x9999999c,0xffc99999, 
         0x9999999f,0xffb99999, 
         0x00000000,0xfc980000, 
         0x99999993,0x7fb99999, 
         0x99999996,0x7fc99999, 
         0x33333331,0x7fd33333, 
         0x99999997,0x7fd99999, 
         0xfffffffd,0x7fdfffff, 
         0x33333332,0x7fe33333, 
         0x66666665,0x7fe66666, 
         0x99999998,0x7fe99999, 
         0xcccccccb,0x7feccccc, 
         0xfffffffe,0x7fefffff, 
         0x00000000,0xc32fc000, 
         0xffffffff,0x7fefffff, 
         0x2,0x0, 
         0x9,0x0, 
         0x00000000,0x40000, 
         0x00000000,0x80000, 
         0xfffffffe,0xfffff, 
         0xffffffff,0xfffff, 
         0x00000002,0x80000000, 
         0x00000009,0x80000000, 
         0x00000000,0x80040000, 
         0x00000000,0x80080000, 
         0xfffffffe,0x800fffff, 
         0xffffffff,0x800fffff, 
         0x47ae149b,0x408fb4e1, 
         0xb851eb95,0x4090961e, 
         0x00000000,0xc0863000, 
         0x851eb852,0xc08627eb, 
         0x28f5c132,0x4051ef5c, 
         0x3def12b7,0x3ff0a2b2, 
         0x3e33cae7,0x3ff0a2b2, 
         0x3f8b63d7,0x3ff0a2b2, 
         0xffffffff,0xbfefffff, 
         0xfffffff0,0x3fefffff, 
         0xffffffff,0x3fefffff, 
         0xfffffe14,0x3fefffff, 
         0xc4e8043a,0xc0152c38, 
         0xb06d22f4,0xc014e48a, 
         0x3fc94bea,0xc014da4d, 
         0xcf2574f8,0xc010d00f, 
         0x192c3200,0xc0014e34, 
         0x82c60fb8,0x40124ea8, 
         0xf369e6c2,0x401258e5, 
         0x1c5fa942,0x4014e842, 
         0x0962a17e,0xbff80d0c, 
         0xcbf1fda5,0xbff03601, 
         0x4888e3a9,0x3ff111ac, 
         0x4888e3ab,0x3ff911ac, 
         0x1687291c,0x3fefced9, 
         0x8b439398,0x3fefe76c, 
         0x45a1c8d6,0x3feff3b6, 
         0xd9168540,0x3feff7ce, 
         0x2110f9fe,0xc014eec8, 
         0xb3a09a7b,0x400d7e98, 
         0x2da71340,0xc00295e2, 
         0xf69d5e8e,0x3ffff2f3, 
         0xf369e6ce,0x401058e5, 
         0x4c5f64e4,0xc00e8167, 
         0x4fdf3b6a,0x3fc6978d, 
         0x78d4fdf8,0x3fd126e9, 
         0x4fdf3b69,0x3fd2978d, 
         0x9db22d14,0x3fd6a7ef, 
         0xef9db233,0x3fd7c6a7, 
         0x645a1cb2,0x3fd7df3b, 
         0x9ba5e35a,0x3fd820c4, 
         0x24dd2f21,0x3fd98106, 
         0x645a1cb3,0x3fdbdf3b, 
         0x9ba5e35b,0x3fdc20c4, 
         0xc28f5c30,0x3fdc28f5, 
         0x7ef9db2a,0x3fdcbc6a, 
         0x1cac0839,0x3fdf645a, 
         0x26e978d8,0x3fe00831, 
         0x083126ea,0x3fe01cac, 
         0x5810623c,0x3fe0b439, 
         0x7ef9db10,0x3fe0bc6a, 
         0x353f7cbc,0x3fe1ba5e, 
         0xef9db1fa,0x3fe1c6a7, 
         0xa9fbe738,0x3fe1d2f1, 
         0x3d70a3a2,0x3fe1d70a, 
         0x083126ac,0x3fe21cac, 
         0xe353f782,0x3fe29ba5, 
         0xed916812,0x3fe33f7c, 
         0xdf3b63f0,0x3fe38d4f, 
         0x72b0205a,0x3fe39168, 
         0x9999992e,0x3fe39999, 
         0xba5e34c6,0x3fe40c49, 
         0xae147a4e,0x3fe4e147, 
         0xb22d0da2,0x3fe5ef9d, 
         0x851eb792,0x3fe651eb, 
         0xb439574c,0x3fe676c8, 
         0x4dd2f0b4,0x3fe81062, 
         0x374bc5ac,0x3fe84189, 
         0x126e9644,0x3feac083, 
         0x0, 0x0};
      unsigned int result [] = {
         0x0,0x0, 
         0x00000000,0x3ff00000, 
         0xfefa39ef,0x3fe62e42, 
         0x00000000,0x40000000, 
         0x7aad030b,0x3ff193ea, 
         0x00000000,0x40080000, 
         0xfefa39ef,0x3ff62e42, 
         0x00000000,0x40100000, 
         0xf7ed8d33,0x3ff9c041, 
         0x00000000,0x40140000, 
         0xfa2a2002,0x3ffcab0b, 
         0x00000000,0x40180000, 
         0xae325a57,0x3fff2272, 
         0x00000000,0x401c0000, 
         0x3f3bab73,0x4000a2b2, 
         0x00000000,0x40200000, 
         0x7aad030b,0x400193ea, 
         0x00000000,0x40220000, 
         0xbbb55516,0x40026bb1, 
         0x00000000,0x40240000, 
         0xb77f374c,0x40032ee3, 
         0x00000000,0x40260000, 
         0xbcd39e7d,0x4003e116, 
         0x00000000,0x40280000, 
         0x2b318c51,0x40048504, 
         0x00000000,0x402a0000, 
         0x16d7bba7,0x40051cca, 
         0x00000000,0x402c0000, 
         0x394d481f,0x4005aa16, 
         0x00000000,0x402e0000, 
         0xfefa39ef,0x40062e42, 
         0x00000000,0x40300000, 
         0x00000000,0x7ff00000, 
         0x00000000,0xfff00000, 
         0x00000000,0xfff00000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0xaf371d10,0xbff17320, 
         0x1a479ce6,0xbff1f387, 
         0x7c0aae48,0xbfe282d3, 
         0xd4d98c74,0xbfdc2833, 
         0x3c2740cd,0xbfd2de02, 
         0x35339376,0xc00034bb, 
         0xe4e43098,0xbff49e14, 
         0xd5e5fe4d,0xbfd5a510, 
         0x111ac992,0xbfd324e1, 
         0xdd9dba58,0xbfcf9c11, 
         0x9e708036,0xbfec7e24, 
         0xb320e642,0xbff22bac, 
         0x55f71f0a,0xbfe814ae, 
         0x072b7cfd,0xc0007d3e, 
         0x67d6e42d,0xbfe2bb34, 
         0x9afc9947,0xbfdf1993, 
         0x167d77fd,0xbfd04938, 
         0xd3fe14a3,0xbfd13ebb, 
         0xc5f1010b,0xc00fd156, 
         0xd9fb7b5f,0xc0049c11, 
         0x71fd6622,0x3fdce6a0, 
         0x00000000,0x7ff80000, 
         0x25aa131d,0x3fdce6bb, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x4d3e849a,0x40861bd7, 
         0xddfe4329,0x40862162, 
         0x427bdb1c,0x408624a1, 
         0x6ebe01b7,0x408626ee, 
         0x6e3a7b61,0x408628b7, 
         0xd33b99aa,0x40862a2c, 
         0x86959dc7,0x40862b68, 
         0xff7dc046,0x40862c79, 
         0x37b9319d,0x40862d6b, 
         0xfefa39ef,0x40862e42, 
         0x00000000,0x7ff80000, 
         0xfefa39ef,0x40862e42, 
         0xb3adb335,0xc0873df9, 
         0x59f2c4c0,0xc08731f1, 
         0xfefa39ef,0xc0862e42, 
         0x6e3a7b61,0xc08628b7, 
         0xdd7abcd2,0xc086232b, 
         0xdd7abcd2,0xc086232b, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0xd0ce72b3,0x401bb064, 
         0x8ca268b6,0x401bdeaf, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x04c7a392,0x4011179a, 
         0x5f14e7cb,0x3fa3f18a, 
         0x6757eb3e,0x3fa3f18a, 
         0x90a6fc7e,0x3fa3f18a, 
         0x00000000,0x7ff80000, 
         0x00000004,0xbce00000, 
         0x00000000,0xbca00000, 
         0x000000ec,0xbd2ec000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0x87802903,0x3ff85607, 
         0x1736d8da,0x3ff85ef8, 
         0x22ab607b,0x3ffa75f9, 
         0x00000000,0x7ff80000, 
         0x00000000,0x7ff80000, 
         0xcc49256f,0x3fb08eb0, 
         0xfba031e5,0x3fdcbd25, 
         0xfd2d02c9,0xbf78a667, 
         0x7f745bbb,0xbf689ce9, 
         0xe7a989d5,0xbf58982d, 
         0x0d9b726f,0xbf506467, 
         0x00000000,0x7ff80000, 
         0x04dc69c5,0x3ff4e04f, 
         0x00000000,0x7ff80000, 
         0x4bf83881,0x3fe62134, 
         0x7f5a898a,0x3ff68635, 
         0x00000000,0x7ff80000, 
         0x49c43144,0xbffbc03e, 
         0xa2a57fd8,0xbff5117b, 
         0x01ff2f17,0xbff3c747, 
         0x84f93898,0xbff09d86, 
         0x5cfeb74a,0xbfefafc5, 
         0xc5ddc336,0xbfef8ec2, 
         0xf081d33b,0xbfef3760, 
         0x0b22c5cb,0xbfed7108, 
         0x95737c3a,0xbfea99af, 
         0x7d3490b0,0xbfea4ec9, 
         0x01b95797,0xbfea4579, 
         0x89272434,0xbfe99f99, 
         0x48bb828d,0xbfe6cb68, 
         0xe1773bf2,0xbfe61de4, 
         0x12de7794,0xbfe5f51e, 
         0xb399be90,0xbfe4cd84, 
         0x03262d21,0xbfe4bdd7, 
         0x3ddf2b15,0xbfe2e61e, 
         0xb49f8898,0xbfe2cff7, 
         0x75f5f072,0xbfe2b9e0, 
         0xc3564b3a,0xbfe2b286, 
         0x8cefed90,0xbfe23691, 
         0x048c1a6e,0xbfe1593f, 
         0xa427a49e,0xbfe0443a, 
         0xc2ec1325,0xbfdf87b6, 
         0xd673e6f0,0xbfdf7a4f, 
         0x65f532ec,0xbfdf5f8a, 
         0xd5368088,0xbfdded43, 
         0x8366318e,0xbfdb530d, 
         0xa0b0b5cd,0xbfd82ab5, 
         0x9d4cc817,0xbfd70e61, 
         0x8163014e,0xbfd6a504, 
         0x24a6a766,0xbfd23dc0, 
         0xc022418e,0xbfd1bb8b, 
         0x61ef8334,0xbfc6ed9f, 
         0x0, 0x0};
      double *p0=(double *) op_0;
      double *erp=(double*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = java_lang_Math_log(*(p0));
         if ( IS_DNAN(erp) ){
            if ( !(IS_DNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *((int *)p0+1), *(int *)p0, *((int *) erp + 1), *(int *)erp, *((int *) &r + 1), *(int *)&r);
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if (HIWORD(&r) != HIWORD(erp) || abs(LOWORD(&r) - LOWORD(erp)) > 1) {
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *((int *)p0+1), *(int *)p0, *((int *) erp + 1), *(int *)erp, *((int *) &r + 1), *(int *)&r);
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"java_lang_Math_log", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }
