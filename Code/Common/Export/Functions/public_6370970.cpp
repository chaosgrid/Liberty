#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6370970);
CLANG_FORWARD_PROC_SYMBOL(public_6373b50);
CLANG_FORWARD_PROC_SYMBOL(public_6373f50);
CLANG_FORWARD_PROC_SYMBOL(public_6374010);
CLANG_FORWARD_PROC_SYMBOL(public_6374110);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_637ff10);
CLANG_FORWARD_PROC_SYMBOL(public_6382ff0);

#define public_63709a7 _public_63709a7
#define public_6370a13 _public_6370a13
#define public_6370a30 _public_6370a30
#define public_6370a47 _public_6370a47
#define public_6370a6c _public_6370a6c
#define public_6370aaa _public_6370aaa
#define public_6370ade _public_6370ade
#define public_6370b0f _public_6370b0f
#define public_6370b1c _public_6370b1c
#define public_6370b26 _public_6370b26
#define public_6370b58 _public_6370b58
#define public_6370b79 _public_6370b79
#define public_6370ba9 _public_6370ba9
#define public_6370c52 _public_6370c52
#define public_6370c58 _public_6370c58
#define public_6370c68 _public_6370c68
#define public_6370c85 _public_6370c85
#define public_6370caa _public_6370caa
#define public_6370cc7 _public_6370cc7
#define public_6370d0d _public_6370d0d
#define public_6370d63 _public_6370d63

PROC_DECLARE(0x6370970, internal_6370970, public_6370970);
extern "C" NAKED register_t __cdecl internal_6370970()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x30
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        push ebp
        mov ebp, 1
        cmp eax, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 0
        jl public_63709a7
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63ef67c @0x6370998*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef67c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_63709a7 : nop
        mov eax, dword ptr ds : [public_658b670]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        je public_6370b79
        mov eax, dword ptr ds : [public_658b194]
        test eax, eax
        jne public_6370a13
        mov eax, dword ptr ds : [public_658b084]
        test eax, eax
        jne public_6370a13
        mov eax, dword ptr ds : [public_658b080]
        test eax, eax
        jne public_6370a13
        mov eax, dword ptr ds : [public_658b200]
        test eax, eax
        jne public_6370a13
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        jne public_6370a13
        mov eax, dword ptr ds : [public_658b118]
        cmp eax, 0x17
        je public_6370a13
        test eax, eax
        jne public_6370b79
        public_6370a13 : nop
        cmp dword ptr ds : [public_658b078], ebp
        jl public_6370a30
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63ef640 @0x6370a21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef640
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6370a30 : nop
        call public_6374110
        mov edi, dword ptr ds : [public_658b838]
        test edi, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_6370b26
        public_6370a47 : nop
        cmp dword ptr ds : [edi], 0
        je public_6370b26
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6370b1c
        mov esi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test esi, esi
        je public_6370b1c
        public_6370a6c : nop
        mov ecx, dword ptr ds : [public_658bb88]
        lea edx, ss:[esp+0x30]
        inc ecx
        push edx
        mov dword ptr ds : [public_658bb88], ecx
        mov eax, dword ptr ds : [edi+8]
        push esi
        push eax
        call public_637fd60
        fld qword ptr ss : [esp+0x2C]
        fcomp qword ptr ss : [esp+0x3C]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_6370aaa
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        public_6370aaa : nop
        fld qword ptr ss : [esp+0x30]
        fchs 
        fcomp qword ptr ds : [public_658b210]
        fnstsw ax
        test ah, 0x41
        je public_6370ade
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_658b210]
        fnstsw ax
        test ah, 0x41
        je public_6370ade
        cmp esi, dword ptr ds : [public_658b82c]
        je public_6370ade
        cmp edi, dword ptr ds : [public_658b834]
        jne public_6370b0f
        public_6370ade : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ds : [edi+0x14]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        push edx
        and eax, 0xFFFFFF
        push eax
        push ecx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63ef610 @0x6370b02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef610
        call public_6356960
        add esp, 0x18
        public_6370b0f : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_6370a6c
        public_6370b1c : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        jne public_6370a47
        public_6370b26 : nop
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        je public_6370b58
        fld qword ptr ds : [public_658bd78]
        fcomp qword ptr ds : [public_658b898]
        fnstsw ax
        test ah, 0x41
        jne public_6370b58
        mov edx, dword ptr ds : [public_658b898]
        mov eax, dword ptr ds : [public_658b89c]
        mov dword ptr ds : [public_658bd78], edx
        mov dword ptr ds : [public_658bd7c], eax
        public_6370b58 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ds : [public_658b898], ecx
        mov dword ptr ds : [public_658b89c], edx
        call public_636ecc0
        add esp, 4
        public_6370b79 : nop
        call public_6374010
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6370cc7
        mov esi, dword ptr ds : [eax+4]
        push eax
        xor ebx, ebx
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jle public_6370cc7
        mov ebp, 4
        public_6370ba9 : nop
        test esi, esi
        je public_6370caa
        push ebx
        call public_6373f50
        mov edi, eax
        mov eax, dword ptr ds : [public_658b064]
        add esp, 4
        cmp edi, eax
        je public_6370caa
        mov eax, dword ptr ds : [public_658bf48]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0
        lea edx, ss:[esp+0x38]
        push edx
        push 0
        push 0
        push 1
        inc eax
        push esi
        push edi
        mov dword ptr ds : [public_658bf48], eax
        call public_637ff10
        mov edx, dword ptr ds : [public_658ba68]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x3C]
        add edx, eax
        add esp, 0x20
        test ecx, ecx
        mov dword ptr ds : [public_658ba68], edx
        je public_6370c68
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 0x41
        jne public_6370c68
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        je public_6370c58
        test dword ptr ds : [ecx+0x50], 0x40000
        jne public_6370c58
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        push edi
        call public_6382ff0
        mov ecx, eax
        add esp, 0x10
        test ecx, ecx
        je public_6370c52
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 0x41
        je public_6370c58
        public_6370c52 : nop
        inc dword ptr ss : [esp+0x10]
        jmp public_6370c68
        public_6370c58 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], eax
        public_6370c68 : nop
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_658b210]
        fnstsw ax
        test ah, 0x41
        je public_6370c85
        test ecx, ecx
        je public_6370caa
        cmp ecx, dword ptr ds : [public_658b82c]
        jne public_6370caa
        public_6370c85 : nop
        mov ecx, dword ptr ds : [ecx+0x4C]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push eax
        push edi
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63ef5e8 @0x6370c9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef5e8
        call public_6356960
        add esp, 0x14
        public_6370caa : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+ebp+4]
        inc ebx
        add ebp, 4
        cmp ebx, eax
        jl public_6370ba9
        mov ebp, 1
        public_6370cc7 : nop
        lea edx, ss:[esp+0x14]
        push edx
        call public_636ecc0
        fld qword ptr ss : [esp+0x3C]
        fsub qword ptr ds : [public_658b888]
        add esp, 4
        fstp qword ptr ds : [public_658bcc0]
        fld qword ptr ds : [public_658bcc8]
        fcomp qword ptr ds : [public_658b888]
        fnstsw ax
        test ah, 1
        je public_6370d0d
        mov eax, dword ptr ds : [public_658b888]
        mov ecx, dword ptr ds : [public_658b88c]
        mov dword ptr ds : [public_658bcc8], eax
        mov dword ptr ds : [public_658bccc], ecx
        public_6370d0d : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [public_658b888], edx
        mov dword ptr ds : [public_658b88c], eax
        call public_6373b50
        cmp dword ptr ds : [public_658b078], ebp
        mov dword ptr ds : [public_658b880], ebp
        jl public_6370d63
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_658b89c]
        mov eax, dword ptr ds : [public_658b898]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63ef598 @0x6370d54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef598
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_6370d63 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6370970)
    }
}

#undef public_63709a7
#undef public_6370a13
#undef public_6370a30
#undef public_6370a47
#undef public_6370a6c
#undef public_6370aaa
#undef public_6370ade
#undef public_6370b0f
#undef public_6370b1c
#undef public_6370b26
#undef public_6370b58
#undef public_6370b79
#undef public_6370ba9
#undef public_6370c52
#undef public_6370c58
#undef public_6370c68
#undef public_6370c85
#undef public_6370caa
#undef public_6370cc7
#undef public_6370d0d
#undef public_6370d63
