#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636f780);
CLANG_FORWARD_PROC_SYMBOL(public_63702f0);
CLANG_FORWARD_PROC_SYMBOL(public_6373750);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_6380e30);

#define public_63737d7 _public_63737d7
#define public_63737e1 _public_63737e1
#define public_63737e7 _public_63737e7
#define public_63737ff _public_63737ff
#define public_637382a _public_637382a
#define public_63738d7 _public_63738d7
#define public_6373934 _public_6373934
#define public_6373938 _public_6373938
#define public_6373940 _public_6373940
#define public_6373971 _public_6373971
#define public_637399d _public_637399d
#define public_63739af _public_63739af
#define public_63739e8 _public_63739e8
#define public_6373a36 _public_6373a36
#define public_6373a60 _public_6373a60
#define public_6373a79 _public_6373a79
#define public_6373ab5 _public_6373ab5
#define public_6373ab7 _public_6373ab7
#define public_6373aea _public_6373aea
#define public_6373b34 _public_6373b34

PROC_DECLARE(0x6373750, internal_6373750, public_6373750);
extern "C" NAKED register_t __cdecl internal_6373750()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x4C
        mov edx, dword ptr ds : [public_658b24c]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        xor eax, eax
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [eax+ebx*4+4]
        push edi
        push ecx
        push 1
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x58], 0xFFEFFFFF
        call public_636f780
        mov edi, eax
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x14
        cmp eax, 2
        mov dword ptr ss : [esp+0x14], edi
        jl public_63737d7
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push edi
        push ebx
        push eax
/*FIXUP push offset public_63f0f00 @0x63737c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0f00
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_63737d7 : nop
        mov dword ptr ss : [esp+0xC], 0
        jmp public_63737e7
        public_63737e1 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ss : [ebp+8]
        public_63737e7 : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ss : [ebp+8]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658b8e0], ecx
        je public_63739af
        public_63737ff : nop
        inc dword ptr ds : [public_658bc68]
        mov edx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [esi+0x48], edx
        mov ecx, dword ptr ds : [public_658b8f8]
        mov dword ptr ss : [esp+0x20], edi
        mov edi, dword ptr ds : [ecx+edi*4+4]
        xor eax, eax
        test edi, edi
        mov dword ptr ss : [esp+0x24], eax
        je public_637399d
        public_637382a : nop
        test dword ptr ds : [edi+0x50], 0x100000
        je public_6373971
        mov edx, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [edi+0x48], edx
        je public_6373971
        mov edx, dword ptr ds : [public_658bc80]
        inc edx
        lea eax, ss:[esp+0x34]
        push eax
        mov dword ptr ds : [public_658bc80], edx
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [esi+0x34]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        push ebx
        push eax
        push 1
        call public_63702f0
        add esp, 0x18
        test eax, eax
        je public_6373934
        mov edx, dword ptr ds : [edi+0x50]
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ss : [esp+0x34]
        xor ecx, edx
        shr ecx, 0xB
        and ecx, 1
        xor edx, edx
        cmp eax, ecx
        mov eax, dword ptr ds : [edi+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+ecx*4+4]
        sete dl
        cmp dword ptr ds : [eax], 1
        je public_63738d7
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_6373940
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push ebx
        push eax
        push ecx
        mov ecx, dword ptr ds : [edi+0x4C]
        push ecx
/*FIXUP push offset public_63f0e98 @0x63738bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0e98
        call public_6356960
        push esi
        push edi
        push 5
        call public_637e2e0
        add esp, 0x24
        jmp public_6373971
        public_63738d7 : nop
        test edx, edx
        je public_6373b34
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        je public_6373a79
        mov edx, dword ptr ds : [esi+0x3C]
        cmp dword ptr ds : [edx+ebx*4+4], 1
        jne public_6373938
        mov dword ptr ds : [eax], esi
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax+ebx*4+4], 2
        mov eax, dword ptr ss : [ebp+0x14]
        add dword ptr ds : [eax], 0xFFFFFFFE
        cmp dword ptr ds : [public_658b078], 4
        jl public_6373934
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x4C]
        push ebx
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63f0e48 @0x6373925*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0e48
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_6373934 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6373938 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6373971
        public_6373940 : nop
        test edi, edi
        jne public_6373971
        mov edx, dword ptr ds : [0x3C]
        cmp dword ptr ds : [edx+ecx*4+4], 1
        jne public_6373971
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        push ebx
        push ecx
/*FIXUP push offset public_63f0de0 @0x637395b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0de0
        call public_6356960
        push edi
        push esi
        push 5
        call public_6378600
        add esp, 0x1C
        public_6373971 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        xor edx, edx
        cmp eax, ecx
        mov ecx, dword ptr ds : [public_658b8f8]
        setge dl
        dec edx
        and eax, edx
        mov edi, dword ptr ds : [ecx+eax*4+4]
        test edi, edi
        mov dword ptr ss : [esp+0x20], eax
        jne public_637382a
        mov eax, dword ptr ss : [esp+0x24]
        public_637399d : nop
        test eax, eax
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, eax
        jne public_63737ff
        public_63739af : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_6373a60
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        jne public_63739e8
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x4C]
        push edi
        push edx
        push ecx
/*FIXUP push offset public_63f0d7c @0x63739cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0d7c
        call public_6356960
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push edx
        push 5
        call public_6378600
        add esp, 0x1C
        public_63739e8 : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+ecx*4+4], esi
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax+edx*4+4], ebx
        mov eax, dword ptr ss : [ebp+0x14]
        add dword ptr ds : [eax], 0xFFFFFFFE
        inc dword ptr ds : [public_658bd88]
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_6373a36
        mov eax, dword ptr ds : [ebx+0x4C]
        push edx
        mov edx, dword ptr ds : [esi+0x4C]
        push edx
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f0d2c @0x6373a27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0d2c
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
/*FIXUP public_6373a36 : nop
        push offset public_63f0d0c @0x6373a36*/
  FIXUP public_6373a36 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0d0c
        call public_637f410
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 4
        jl public_6373a60
        push 0
        push 0
        push esi
        push ebx
/*FIXUP push offset public_63f0cf8 @0x6373a53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0cf8
        call public_6378820
        add esp, 0x14
        public_6373a60 : nop
        mov eax, dword ptr ss : [esp+0xC]
        inc eax
        cmp eax, 2
        mov dword ptr ss : [esp+0xC], eax
        jl public_63737e1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6373a79 : nop
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        push esi
        push edi
        call public_6380e30
        fstp qword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        push edi
        push esi
        call public_6380e30
        fld qword ptr ss : [esp+0x58]
        fcomp 
        add esp, 0x20
        fnstsw ax
        test ah, 0x41
        jne public_6373ab5
        fstp qword ptr ss : [esp+0x38]
        jmp public_6373ab7
        public_6373ab5 : nop
        fstp st(0)
        public_6373ab7 : nop
        fld qword ptr ss : [esp+0x38]
        fcomp qword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [esp+0x10]
        jne public_6373aea
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x30], ebx
        public_6373aea : nop
        cmp dword ptr ds : [public_658b078], 3
        jl public_6373971
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ds : [edi+0x4C]
        push ebx
        push ecx
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63f0c98 @0x6373b20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0c98
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x28
        jmp public_6373971
        public_6373b34 : nop
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], ecx
        jmp public_6373938
        UNREACHABLE_TRAP(0x6373750)
    }
}

#undef public_63737d7
#undef public_63737e1
#undef public_63737e7
#undef public_63737ff
#undef public_637382a
#undef public_63738d7
#undef public_6373934
#undef public_6373938
#undef public_6373940
#undef public_6373971
#undef public_637399d
#undef public_63739af
#undef public_63739e8
#undef public_6373a36
#undef public_6373a60
#undef public_6373a79
#undef public_6373ab5
#undef public_6373ab7
#undef public_6373aea
#undef public_6373b34
