#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6385ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6386800);
CLANG_FORWARD_PROC_SYMBOL(public_63869e0);
CLANG_FORWARD_PROC_SYMBOL(public_6387f00);
CLANG_FORWARD_PROC_SYMBOL(public_638bf80);

#define public_638bffa _public_638bffa
#define public_638c01e _public_638c01e
#define public_638c02c _public_638c02c
#define public_638c033 _public_638c033
#define public_638c04f _public_638c04f
#define public_638c065 _public_638c065
#define public_638c08e _public_638c08e
#define public_638c094 _public_638c094
#define public_638c0cb _public_638c0cb
#define public_638c0e3 _public_638c0e3
#define public_638c0e8 _public_638c0e8
#define public_638c0f6 _public_638c0f6
#define public_638c12e _public_638c12e
#define public_638c13f _public_638c13f
#define public_638c146 _public_638c146
#define public_638c15b _public_638c15b
#define public_638c18c _public_638c18c
#define public_638c19d _public_638c19d
#define public_638c1a6 _public_638c1a6
#define public_638c1da _public_638c1da
#define public_638c1fd _public_638c1fd
#define public_638c210 _public_638c210
#define public_638c222 _public_638c222
#define public_638c22c _public_638c22c
#define public_638c255 _public_638c255
#define public_638c268 _public_638c268
#define public_638c279 _public_638c279
#define public_638c280 _public_638c280
#define public_638c289 _public_638c289
#define public_638c2b5 _public_638c2b5
#define public_638c2ce _public_638c2ce
#define public_638c2d7 _public_638c2d7
#define public_638c2f6 _public_638c2f6
#define public_638c30c _public_638c30c
#define public_638c315 _public_638c315
#define public_638c33c _public_638c33c
#define public_638c357 _public_638c357
#define public_638c35e _public_638c35e
#define public_638c369 _public_638c369
#define public_638c372 _public_638c372
#define public_638c37d _public_638c37d
#define public_638c381 _public_638c381
#define public_638c3a7 _public_638c3a7
#define public_638c3bb _public_638c3bb
#define public_638c3cb _public_638c3cb

PROC_DECLARE(0x638bf80, internal_638bf80, public_638bf80);
extern "C" NAKED register_t __cdecl internal_638bf80()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 1
        je public_638c3cb
        mov eax, dword ptr ds : [public_658b844]
        push ebx
        push ebp
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        push ecx
        push edx
        call public_6386800
        add esp, 0x14
        test eax, eax
        mov dword ptr ss : [esp+0x3C], eax
        je public_638c065
        mov edi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_638c08e
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov ebp, 4
        public_638bffa : nop
        test edi, edi
        je public_638c04f
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+0xC]
        inc esi
        mov dword ptr ss : [esp+0x14], esi
        xor ebx, ebx
        xor esi, esi
        test ecx, ecx
        je public_638c04f
        lea edx, ds:[ecx+4]
        mov ecx, dword ptr ds : [edx]
        add edx, 4
        test ecx, ecx
        je public_638c04f
        public_638c01e : nop
        mov ecx, dword ptr ds : [ecx+0x48]
        test ecx, ecx
        jne public_638c02c
        mov ebx, 1
        jmp public_638c033
        public_638c02c : nop
        cmp ecx, dword ptr ss : [esp+0x10]
        jae public_638c033
        inc esi
        public_638c033 : nop
        mov ecx, dword ptr ds : [edx]
        add edx, 4
        test ecx, ecx
        jne public_638c01e
        test ebx, ebx
        je public_638c04f
        test esi, esi
        jne public_638c04f
        mov dword ptr ds : [eax+ebp], esi
        dec dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x3C]
        public_638c04f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax+ebp+4]
        add ebp, 4
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_638bffa
        mov esi, dword ptr ss : [esp+0x2C]
        public_638c065 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        cmp ebp, 7
        jne public_638c094
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [public_63991e8]
        push eax
        push ecx
/*FIXUP push offset public_63f9e38 @0x638c07e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e38
        push esi
        call ebx
        add esp, 0x10
        jmp public_638c1fd
        public_638c08e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        jmp public_638c065
        public_638c094 : nop
        push eax
        call public_636ec10
        mov edx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b24c]
        push edx
        dec eax
        push eax
/*FIXUP push offset public_63f9e2c @0x638c0b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e2c
        push esi
        call ebx
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x14
        dec eax
        mov ecx, eax
        dec eax
        test ecx, ecx
        je public_638c0e3
        lea edi, ds:[eax+1]
        public_638c0cb : nop
        push 0xC02433B6
        push 0x45A1CAC1
/*FIXUP push offset public_63f637c @0x638c0d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push esi
        call ebx
        add esp, 0x10
        dec edi
        jne public_638c0cb
/*FIXUP public_638c0e3 : nop
        push offset public_63edccc @0x638c0e3*/
  FIXUP public_638c0e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        public_638c0e8 : nop
        push esi
        call ebx
        mov esi, dword ptr ss : [esp+0x3C]
        add esp, 8
        test esi, esi
        je public_638c146
        public_638c0f6 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_638c146
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_638c13f
        cmp eax, dword ptr ss : [esp+0x10]
        jae public_638c13f
        cmp ebp, 7
        jne public_638c12e
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, ecx
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        inc ecx
/*FIXUP push offset public_63f9e20 @0x638c11f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e20
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call ebx
        add esp, 0x10
        public_638c12e : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push esi
        push 0
        push ebp
        push ecx
        call public_6387f00
        add esp, 0x10
        public_638c13f : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_638c0f6
        public_638c146 : nop
        mov edi, dword ptr ss : [esp+0x38]
        test edi, edi
        je public_638c1a6
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test esi, esi
        je public_638c1a6
        public_638c15b : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_638c19d
        cmp eax, dword ptr ss : [esp+0x10]
        jae public_638c19d
        cmp ebp, 7
        jne public_638c18c
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, ecx
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        inc ecx
/*FIXUP push offset public_63f9e20 @0x638c17d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e20
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call ebx
        add esp, 0x10
        public_638c18c : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push esi
        push 0
        push ebp
        push ecx
        call public_6387f00
        add esp, 0x10
        public_638c19d : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638c15b
        public_638c1a6 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        test eax, eax
        je public_638c3a7
        mov edi, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ss : [esp+0x3C], 0
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jle public_638c3a7
        mov dword ptr ss : [esp+0x1C], 4
        public_638c1da : nop
        xor esi, esi
        test edi, edi
        mov dword ptr ss : [esp+0x34], esi
        je public_638c289
        mov eax, dword ptr ds : [public_658b24c]
        cmp eax, 3
        jne public_638c22c
        push edi
        call public_63869e0
        add esp, 4
        jmp public_638c255
        public_638c1fd : nop
        mov ecx, dword ptr ds : [public_658b24c]
        lea eax, ds:[ecx-1]
        mov edx, eax
        dec eax
        test edx, edx
        je public_638c222
        lea edi, ds:[eax+1]
        public_638c210 : nop
        push 0
        push 0
/*FIXUP push offset public_63f637c @0x638c214*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push esi
        call ebx
        add esp, 0x10
        dec edi
        jne public_638c210
/*FIXUP public_638c222 : nop
        push offset public_63f9e08 @0x638c222*/
  FIXUP public_638c222 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e08
        jmp public_638c0e8
        public_638c22c : nop
        cmp eax, 4
        jl public_638c255
        mov edx, dword ptr ds : [edi+0xC]
/*FIXUP push offset _public_6385ea0 @0x638c234*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6385ea0
        push 4
        push edx
        call public_636ec10
        add esp, 4
        push eax
        mov eax, dword ptr ds : [edi+0xC]
        add eax, 4
        push eax
        call dword ptr ds : [public_63992a8]
        add esp, 0x10
        public_638c255 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_638c289
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638c289
        public_638c268 : nop
        mov eax, dword ptr ds : [eax+0x48]
        test eax, eax
        jne public_638c279
        mov dword ptr ss : [esp+0x34], 1
        jmp public_638c280
        public_638c279 : nop
        cmp eax, dword ptr ss : [esp+0x10]
        jae public_638c280
        inc esi
        public_638c280 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638c268
        public_638c289 : nop
        cmp ebp, 7
        jne public_638c30c
        test edi, edi
        je public_638c2f6
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
/*FIXUP push offset public_63a362c @0x638c297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 0xC
        test eax, eax
        je public_638c2d7
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638c2d7
        public_638c2b5 : nop
        mov eax, dword ptr ds : [eax+0x48]
        test eax, eax
        je public_638c2ce
        cmp eax, dword ptr ss : [esp+0x10]
        jae public_638c2ce
        push eax
/*FIXUP push offset public_63f10fc @0x638c2c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push ebp
        call ebx
        add esp, 0xC
        public_638c2ce : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_638c2b5
        public_638c2d7 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [esp+0x38]
        and ecx, 0xFFFFFF
        push ecx
        push edx
/*FIXUP push offset public_63f9df8 @0x638c2e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9df8
        push ebp
        call ebx
        add esp, 0x10
        jmp public_638c37d
        public_638c2f6 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
/*FIXUP push offset public_63f9dd8 @0x638c2ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9dd8
        push ecx
        call ebx
        add esp, 0xC
        jmp public_638c381
        public_638c30c : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        je public_638c315
        inc esi
        public_638c315 : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
/*FIXUP push offset public_63a362c @0x638c31a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
        push ebp
        call ebx
        add esp, 0xC
        test edi, edi
        je public_638c372
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_638c372
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638c372
        public_638c33c : nop
        mov eax, dword ptr ds : [eax+0x48]
        test eax, eax
        jne public_638c357
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        je public_638c369
        mov dword ptr ss : [esp+0x34], 0
        push 0
        jmp public_638c35e
        public_638c357 : nop
        cmp eax, dword ptr ss : [esp+0x10]
        jae public_638c369
        push eax
/*FIXUP public_638c35e : nop
        push offset public_63f10fc @0x638c35e*/
  FIXUP public_638c35e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push ebp
        call ebx
        add esp, 0xC
        public_638c369 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_638c33c
/*FIXUP public_638c372 : nop
        push offset public_63edccc @0x638c372*/
  FIXUP public_638c372 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebp
        call ebx
        add esp, 8
        public_638c37d : nop
        mov ebp, dword ptr ss : [esp+0x30]
        public_638c381 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ds : [eax+edx+4]
        add eax, 4
        inc ecx
        mov dword ptr ss : [esp+0x1C], eax
        cmp ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x38], ecx
        jl public_638c1da
        public_638c3a7 : nop
        cmp ebp, 7
        jne public_638c3bb
        mov eax, dword ptr ss : [esp+0x2C]
/*FIXUP push offset public_63f8128 @0x638c3b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8128
        push eax
        call ebx
        add esp, 8
        public_638c3bb : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_636ecc0
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        public_638c3cb : nop
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x638bf80)
    }
}

#undef public_638bffa
#undef public_638c01e
#undef public_638c02c
#undef public_638c033
#undef public_638c04f
#undef public_638c065
#undef public_638c08e
#undef public_638c094
#undef public_638c0cb
#undef public_638c0e3
#undef public_638c0e8
#undef public_638c0f6
#undef public_638c12e
#undef public_638c13f
#undef public_638c146
#undef public_638c15b
#undef public_638c18c
#undef public_638c19d
#undef public_638c1a6
#undef public_638c1da
#undef public_638c1fd
#undef public_638c210
#undef public_638c222
#undef public_638c22c
#undef public_638c255
#undef public_638c268
#undef public_638c279
#undef public_638c280
#undef public_638c289
#undef public_638c2b5
#undef public_638c2ce
#undef public_638c2d7
#undef public_638c2f6
#undef public_638c30c
#undef public_638c315
#undef public_638c33c
#undef public_638c357
#undef public_638c35e
#undef public_638c369
#undef public_638c372
#undef public_638c37d
#undef public_638c381
#undef public_638c3a7
#undef public_638c3bb
#undef public_638c3cb
