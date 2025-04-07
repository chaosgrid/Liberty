#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ee90);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_6382800);
CLANG_FORWARD_PROC_SYMBOL(public_6383af0);

#define public_6383b67 _public_6383b67
#define public_6383b83 _public_6383b83
#define public_6383b9f _public_6383b9f
#define public_6383baa _public_6383baa
#define public_6383bc8 _public_6383bc8
#define public_6383bec _public_6383bec
#define public_6383c08 _public_6383c08
#define public_6383c0e _public_6383c0e
#define public_6383c32 _public_6383c32
#define public_6383c8b _public_6383c8b
#define public_6383c93 _public_6383c93
#define public_6383cab _public_6383cab
#define public_6383cb1 _public_6383cb1
#define public_6383cb9 _public_6383cb9
#define public_6383ccd _public_6383ccd
#define public_6383cf7 _public_6383cf7
#define public_6383d32 _public_6383d32
#define public_6383d4f _public_6383d4f
#define public_6383d51 _public_6383d51
#define public_6383d6a _public_6383d6a
#define public_6383da0 _public_6383da0
#define public_6383dd3 _public_6383dd3
#define public_6383de9 _public_6383de9
#define public_6383e2c _public_6383e2c
#define public_6383e49 _public_6383e49
#define public_6383e4b _public_6383e4b
#define public_6383e58 _public_6383e58
#define public_6383e72 _public_6383e72
#define public_6383eb7 _public_6383eb7
#define public_6383ecc _public_6383ecc

PROC_DECLARE(0x6383af0, internal_6383af0, public_6383af0);
extern "C" NAKED register_t __cdecl internal_6383af0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        xor edi, edi
        push ecx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], 0x7FEFFFFF
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x28], 0xFFEFFFFF
        call public_636ec10
        mov esi, eax
        add esp, 4
        cmp esi, 2
        jge public_6383cb9
        mov esi, dword ptr ss : [ebp+0xC]
        push esi
        call public_636ec10
        add esp, 4
        cmp eax, 2
        jl public_6383baa
        test esi, esi
        je public_6383c0e
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+4]
        add edx, 4
        test ecx, ecx
        je public_6383c0e
        public_6383b67 : nop
        fld qword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_6383b83
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], esi
        mov edi, ecx
        public_6383b83 : nop
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_6383b9f
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], esi
        mov ebx, ecx
        public_6383b9f : nop
        mov ecx, dword ptr ds : [edx]
        add edx, 4
        test ecx, ecx
        jne public_6383b67
        jmp public_6383c0e
        public_6383baa : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, eax
        imul edx, dword ptr ss : [ebp+0x14]
        mov esi, ecx
        lea edx, ds:[esi+edx*8]
        cmp esi, edx
        jae public_6383c0e
        lea esi, ds:[eax*8]
        public_6383bc8 : nop
        cmp ecx, dword ptr ds : [public_658b064]
        je public_6383c08
        fld qword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_6383bec
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x20], eax
        mov edi, ecx
        public_6383bec : nop
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_6383c08
        mov ebx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, ecx
        public_6383c08 : nop
        add ecx, esi
        cmp ecx, edx
        jb public_6383bc8
        public_6383c0e : nop
        mov esi, dword ptr ss : [ebp+0x18]
        push ebx
        push esi
        call public_636ee90
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_636ec10
        add esp, 0xC
        cmp eax, 2
        jge public_6383c32
        push edi
        push esi
        call public_636ee90
        add esp, 8
        public_6383c32 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_636ec10
        mov esi, eax
        add esp, 4
        cmp esi, 2
        jge public_6383cb9
/*FIXUP push offset public_63f7244 @0x6383c44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7244
        call public_637f410
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [public_658bf38]
        lea ecx, ds:[eax+1]
        add esp, 4
        cmp edx, ecx
        jle public_6383c93
        mov eax, dword ptr ds : [public_658b7fc]
        test eax, eax
        je public_6383c8b
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_636ec10
        mov edi, dword ptr ss : [ebp+0x14]
        add esp, 4
        add eax, edi
        push eax
/*FIXUP push offset public_63f71e0 @0x6383c7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f71e0
        call public_6356960
        add esp, 8
        public_6383c8b : nop
        push 0
        push 0
        push 3
        jmp public_6383cb1
        public_6383c93 : nop
        mov ecx, dword ptr ds : [public_658b7fc]
        test ecx, ecx
        je public_6383cab
        push eax
/*FIXUP push offset public_63f7184 @0x6383c9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7184
        call public_6356960
        add esp, 8
        public_6383cab : nop
        push 0
        push 0
        push 1
        public_6383cb1 : nop
        call public_6378600
        add esp, 0xC
        public_6383cb9 : nop
        mov eax, dword ptr ss : [ebp+8]
        inc eax
        cmp esi, eax
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x18], eax
        jge public_6383ecc
        public_6383ccd : nop
        mov edi, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        test edi, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], 0xFFEFFFFF
        je public_6383d6a
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test esi, esi
        je public_6383d6a
        public_6383cf7 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [ecx]
        push esi
        push edx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6383d51
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [ebp+0x18]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [edx]
        push ecx
        push eax
        push esi
        call public_6382800
        fcom qword ptr ds : [public_63a58b0]
        add esp, 0x10
        fnstsw ax
        test ah, 1
        je public_6383d32
        fchs 
        public_6383d32 : nop
        fld st(0)
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6383d4f
        mov ecx, dword ptr ss : [esp+0x10]
        fstp qword ptr ss : [esp+0x20]
        mov ebx, esi
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6383d51
        public_6383d4f : nop
        fstp st(0)
        public_6383d51 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6383cf7
        test ebx, ebx
        je public_6383d6a
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6383e58
        public_6383d6a : nop
        mov ecx, dword ptr ds : [public_658bf30]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        test ebx, ebx
        mov dword ptr ds : [public_658bf30], ecx
        jne public_6383da0
        test eax, eax
        je public_6383dd3
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_658b7fc]
        inc edx
        push edx
/*FIXUP push offset public_63f7144 @0x6383d8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7144
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        jmp public_6383dd3
        public_6383da0 : nop
        test eax, eax
        je public_6383dd3
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        push edx
        push ebx
        call public_6370570
        mov ecx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        inc eax
        push eax
/*FIXUP push offset public_63f70e8 @0x6383dc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f70e8
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_6383dd3 : nop
        mov edx, dword ptr ds : [public_658b24c]
        imul edx, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp+0x10]
        lea edi, ds:[esi+edx*8]
        mov eax, esi
        cmp eax, edi
        jae public_6383e58
        public_6383de9 : nop
        cmp esi, dword ptr ds : [public_658b064]
        je public_6383e4b
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6383e4b
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        push esi
        call public_6382800
        fcom qword ptr ds : [public_63a58b0]
        add esp, 0x10
        fnstsw ax
        test ah, 1
        je public_6383e2c
        fchs 
        public_6383e2c : nop
        fld st(0)
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6383e49
        mov eax, dword ptr ss : [esp+0x10]
        fstp qword ptr ss : [esp+0x20]
        mov ebx, esi
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6383e4b
        public_6383e49 : nop
        fstp st(0)
        public_6383e4b : nop
        mov ecx, dword ptr ds : [public_658b24c]
        lea esi, ds:[esi+ecx*8]
        cmp esi, edi
        jb public_6383de9
        public_6383e58 : nop
        test ebx, ebx
        jne public_6383e72
/*FIXUP push offset public_63f70a4 @0x6383e5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f70a4
        call public_6356960
        push ebx
        push ebx
        push 5
        call public_6378600
        add esp, 0x10
        public_6383e72 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        push ebx
        push edx
        call public_636e1b0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 8
        cmp eax, 1
        jl public_6383eb7
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        inc edx
        push edx
        push ebx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f705c @0x6383ea8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f705c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_6383eb7 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        jl public_6383ccd
        public_6383ecc : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6383af0)
    }
}

#undef public_6383b67
#undef public_6383b83
#undef public_6383b9f
#undef public_6383baa
#undef public_6383bc8
#undef public_6383bec
#undef public_6383c08
#undef public_6383c0e
#undef public_6383c32
#undef public_6383c8b
#undef public_6383c93
#undef public_6383cab
#undef public_6383cb1
#undef public_6383cb9
#undef public_6383ccd
#undef public_6383cf7
#undef public_6383d32
#undef public_6383d4f
#undef public_6383d51
#undef public_6383d6a
#undef public_6383da0
#undef public_6383dd3
#undef public_6383de9
#undef public_6383e2c
#undef public_6383e49
#undef public_6383e4b
#undef public_6383e58
#undef public_6383e72
#undef public_6383eb7
#undef public_6383ecc
