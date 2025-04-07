#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ef40);
CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_6374610);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_638d3e0);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);
CLANG_FORWARD_PROC_SYMBOL(public_638fae0);
CLANG_FORWARD_PROC_SYMBOL(public_638ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6390100);
CLANG_FORWARD_PROC_SYMBOL(public_6390200);
CLANG_FORWARD_PROC_SYMBOL(public_63902d0);
CLANG_FORWARD_PROC_SYMBOL(public_6390770);
CLANG_FORWARD_PROC_SYMBOL(public_6390870);
CLANG_FORWARD_PROC_SYMBOL(public_6390b10);
CLANG_FORWARD_PROC_SYMBOL(public_6391870);
CLANG_FORWARD_PROC_SYMBOL(public_63919b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391a40);
CLANG_FORWARD_PROC_SYMBOL(public_6391cb0);

#define public_638fb27 _public_638fb27
#define public_638fb6d _public_638fb6d
#define public_638fba5 _public_638fba5
#define public_638fba9 _public_638fba9
#define public_638fbd7 _public_638fbd7
#define public_638fbe4 _public_638fbe4
#define public_638fc20 _public_638fc20
#define public_638fc23 _public_638fc23
#define public_638fc6a _public_638fc6a
#define public_638fc99 _public_638fc99
#define public_638fcae _public_638fcae
#define public_638fccc _public_638fccc
#define public_638fd12 _public_638fd12
#define public_638fd20 _public_638fd20
#define public_638fd2e _public_638fd2e
#define public_638fd5a _public_638fd5a
#define public_638fd84 _public_638fd84
#define public_638fda3 _public_638fda3
#define public_638fdba _public_638fdba
#define public_638fdd9 _public_638fdd9
#define public_638fe04 _public_638fe04
#define public_638fe13 _public_638fe13
#define public_638fe3d _public_638fe3d
#define public_638fe4c _public_638fe4c
#define public_638fe96 _public_638fe96
#define public_638feb8 _public_638feb8
#define public_638feca _public_638feca
#define public_638fedf _public_638fedf
#define public_638fef1 _public_638fef1
#define public_638ff15 _public_638ff15
#define public_638ff26 _public_638ff26
#define public_638ff45 _public_638ff45
#define public_638ff4d _public_638ff4d
#define public_638ff53 _public_638ff53
#define public_638ffa0 _public_638ffa0

PROC_DECLARE(0x638fae0, internal_638fae0, public_638fae0);
extern "C" NAKED register_t __cdecl internal_638fae0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        mov eax, dword ptr ds : [public_658b1d0]
        push ebx
        push esi
        mov esi, dword ptr ds : [public_658bf58]
        xor ecx, ecx
        inc esi
        cmp eax, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [public_658bf58], esi
        je public_638fb27
        cmp dword ptr ds : [public_658b8c0], ecx
        je public_638fb27
        mov ecx, dword ptr ds : [public_658b944]
        add ecx, eax
        mov eax, esi
        cmp eax, ecx
        jle public_638fb27
        call public_63919b0
        public_638fb27 : nop
        mov edx, dword ptr ds : [public_658b868]
        cmp edx, dword ptr ds : [public_658b1d4]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0x10]
        jl public_638fc23
        test ecx, ecx
        je public_638fbd7
        fld qword ptr ds : [ecx]
        fchs 
        fcomp qword ptr ds : [public_658b210]
        fnstsw ax
        test ah, 0x41
        je public_638fb6d
        fld qword ptr ds : [ebx]
        fcomp qword ptr ds : [public_658b210]
        fnstsw ax
        test ah, 0x41
        jne public_638fbd7
        public_638fb6d : nop
        mov eax, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], eax
        fld qword ptr ds : [ecx]
        fchs 
        mov dword ptr ss : [esp+0x14], 0
        fcom qword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x10], 1
        fnstsw ax
        test ah, 1
        je public_638fba5
        mov ecx, dword ptr ds : [ebx]
        fstp st(0)
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        jmp public_638fba9
        public_638fba5 : nop
        fstp qword ptr ss : [esp+0x20]
        public_638fba9 : nop
        mov eax, dword ptr ds : [public_658b870]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [edi+0x4C]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ds : [public_658bf58]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_63fb1f8 @0x638fbc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb1f8
        call public_6356960
        add esp, 0x1C
        jmp public_638fc20
        public_638fbd7 : nop
        mov eax, dword ptr ds : [public_658b82c]
        cmp edi, eax
        je public_638fbe4
        cmp esi, eax
        jne public_638fc23
        public_638fbe4 : nop
        mov eax, dword ptr ds : [public_658b078]
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ds : [public_658b828]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_658bf58]
        push edx
        push eax
/*FIXUP push offset public_63fb1ac @0x638fc01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb1ac
        mov dword ptr ds : [public_658b078], 4
        mov dword ptr ss : [esp+0x20], 1
        call public_6356960
        add esp, 0x10
        public_638fc20 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        public_638fc23 : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638fc99
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0xC0000000
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0xC0000000
        je public_638fc6a
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        public_638fc6a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ds : [edi+0x4C]
        push eax
        mov eax, dword ptr ds : [public_658bf58]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63fb164 @0x638fc8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb164
        call public_6356960
        add esp, 0x20
        public_638fc99 : nop
        cmp edi, esi
        je public_638fcae
        mov ecx, dword ptr ds : [edi+0x50]
        mov eax, 0x400
        test eax, ecx
        jne public_638fcae
        test dword ptr ds : [esi+0x50], eax
        je public_638fccc
        public_638fcae : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [edi+0x4C]
        push ecx
        push edx
/*FIXUP push offset public_63fb100 @0x638fcb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb100
        call public_6356960
        push esi
        push edi
        push 5
        call public_637e2e0
        add esp, 0x18
        public_638fccc : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [public_658b844]
        mov edx, dword ptr ds : [public_658b824]
        inc eax
        sub ecx, edx
        cmp ecx, eax
        jg public_638fd20
        push eax
/*FIXUP push offset public_63faff4 @0x638fce5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63faff4
        call public_6356960
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 8
        cmp eax, 5
        jl public_638fd12
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_638fd12
/*FIXUP push offset public_63fafcc @0x638fd05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fafcc
        call public_6356960
        add esp, 4
        public_638fd12 : nop
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0xC
        public_638fd20 : nop
        mov eax, dword ptr ds : [public_658b670]
        test eax, eax
        jne public_638fd2e
        call public_6374610
        public_638fd2e : nop
        push edi
        call public_638e540
        push esi
        call public_638e540
        mov eax, dword ptr ds : [public_658b078]
        add esp, 8
        cmp eax, 4
        jl public_638fd5a
        push 0
        push 0
        push esi
        push edi
/*FIXUP push offset public_63fafc4 @0x638fd4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fafc4
        call public_6378820
        add esp, 0x14
        public_638fd5a : nop
        mov edx, dword ptr ss : [ebp+0x10]
        test edx, edx
        je public_638fe13
        fld qword ptr ds : [public_658b888]
        fcomp qword ptr ds : [ebx]
        fnstsw ax
        test ah, 1
        je public_638fd84
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [public_658b888], eax
        mov dword ptr ds : [public_658b88c], ecx
        public_638fd84 : nop
        fld qword ptr ds : [public_658b890]
        fcomp qword ptr ds : [ebx]
        fnstsw ax
        test ah, 1
        je public_638fda3
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [public_658b890], eax
        mov dword ptr ds : [public_658b894], ecx
        public_638fda3 : nop
        fld qword ptr ds : [esi+8]
        fcomp qword ptr ds : [ebx]
        fnstsw ax
        test ah, 1
        je public_638fdba
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+0xC], ecx
        public_638fdba : nop
        fld qword ptr ds : [public_658b898]
        fcomp qword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_638fdd9
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [public_658b898], eax
        mov dword ptr ds : [public_658b89c], ecx
        public_638fdd9 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        test ecx, 0x8000000
        jne public_638fe13
        fld qword ptr ds : [ebx]
        fcomp qword ptr ds : [public_658b710]
        fnstsw ax
        test ah, 0x41
        je public_638fe04
        fld qword ptr ds : [public_658b710]
        fchs 
        fcomp qword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_638fe13
        public_638fe04 : nop
        or ecx, 0x8000000
        mov dword ptr ds : [esi+0x50], ecx
        inc dword ptr ds : [public_658bfd8]
        public_638fe13 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [edi+0x50]
        mov ecx, eax
        and edx, 0x1FF
        and ecx, 0x1FF
        lea ecx, ds:[edx+ecx+1]
        cmp ecx, 0x1FF
        jl public_638fe3d
        or eax, 0x1FF
        mov dword ptr ds : [esi+0x50], eax
        jmp public_638fe4c
        public_638fe3d : nop
        mov edx, eax
        xor edx, ecx
        and edx, 0x1FF
        xor edx, eax
        mov dword ptr ds : [esi+0x50], edx
        public_638fe4c : nop
        mov eax, dword ptr ds : [esi+0x50]
        and eax, 0xFFEFFFFF
        or eax, 0x10000000
        push esi
        push edi
        mov dword ptr ds : [esi+0x50], eax
        call public_6391a40
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 8
        cmp eax, 2
        jle public_638fe96
        mov ecx, dword ptr ds : [edi+0x34]
        push ecx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 4
        cmp eax, ecx
        jne public_638fe96
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        push esi
        push edi
        call public_63902d0
        add esp, 0xC
        jmp public_638ff15
        public_638fe96 : nop
        mov edx, dword ptr ds : [public_658b8e4]
        inc edx
        lea ebx, ds:[esi+0x34]
        mov dword ptr ds : [public_658b8e4], edx
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_638feca
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638feca
        public_638feb8 : nop
        mov edx, dword ptr ds : [public_658b8e4]
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638feb8
        public_638feca : nop
        cmp dword ptr ds : [public_658b24c], 2
        push esi
        push edi
        jne public_638fedf
        call public_638ffb0
        add esp, 8
        jmp public_638fef1
        public_638fedf : nop
        call public_6390100
        mov eax, dword ptr ds : [edi+0x34]
        push ebx
        push eax
        call public_6390870
        add esp, 0x10
        public_638fef1 : nop
        push esi
        push edi
        call public_6390200
        push esi
        push edi
        call public_6390770
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 0x10
        test ah, 2
        jne public_638ff15
        mov ecx, dword ptr ds : [ebx]
        push ecx
        call public_6390b10
        add esp, 4
        public_638ff15 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        jne public_638ff26
        push edi
        push esi
        call public_638d3e0
        add esp, 8
        public_638ff26 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, 0x800000
        jne public_638ff4d
        test ah, 2
        je public_638ff4d
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 2
        jne public_638ff45
        inc dword ptr ds : [public_658bd18]
        jmp public_638ff53
        public_638ff45 : nop
        inc dword ptr ds : [public_658bd40]
        jmp public_638ff53
        public_638ff4d : nop
        inc dword ptr ds : [public_658bd38]
        public_638ff53 : nop
        push esi
        push edi
        call public_6391cb0
        push esi
        call public_63705e0
        push esi
        call public_636ef40
        mov edx, dword ptr ds : [esi+0x50]
        and edx, 0xFBFFFFFF
        or edx, 0x200
        push esi
        push edi
        mov dword ptr ds : [esi+0x50], edx
        call public_6391870
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x18
        test eax, eax
        je public_638ffa0
/*FIXUP push offset public_63fafa0 @0x638ff8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fafa0
        call public_6356960
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [public_658b078], eax
        public_638ffa0 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638fae0)
    }
}

#undef public_638fb27
#undef public_638fb6d
#undef public_638fba5
#undef public_638fba9
#undef public_638fbd7
#undef public_638fbe4
#undef public_638fc20
#undef public_638fc23
#undef public_638fc6a
#undef public_638fc99
#undef public_638fcae
#undef public_638fccc
#undef public_638fd12
#undef public_638fd20
#undef public_638fd2e
#undef public_638fd5a
#undef public_638fd84
#undef public_638fda3
#undef public_638fdba
#undef public_638fdd9
#undef public_638fe04
#undef public_638fe13
#undef public_638fe3d
#undef public_638fe4c
#undef public_638fe96
#undef public_638feb8
#undef public_638feca
#undef public_638fedf
#undef public_638fef1
#undef public_638ff15
#undef public_638ff26
#undef public_638ff45
#undef public_638ff4d
#undef public_638ff53
#undef public_638ffa0
