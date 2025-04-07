#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6c580);
CLANG_FORWARD_PROC_SYMBOL(public_6f6c920);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cf20);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d040);

#define public_6f6c94c _public_6f6c94c
#define public_6f6c96f _public_6f6c96f
#define public_6f6c9be _public_6f6c9be
#define public_6f6c9f8 _public_6f6c9f8
#define public_6f6c9fa _public_6f6c9fa
#define public_6f6ca02 _public_6f6ca02
#define public_6f6caa9 _public_6f6caa9
#define public_6f6cab6 _public_6f6cab6
#define public_6f6cac3 _public_6f6cac3
#define public_6f6cae8 _public_6f6cae8
#define public_6f6caf8 _public_6f6caf8
#define public_6f6cb01 _public_6f6cb01

PROC_DECLARE(0x6f6c920, internal_6f6c920, public_6f6c920);
extern "C" NAKED register_t __cdecl internal_6f6c920()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        push esi
        push edi
        push ebp
        call public_6f49bc0
        mov edi, dword ptr ss : [esp+0x68]
        mov esi, eax
        add esp, 4
        test esi, esi
        mov bl, 1
        je public_6f6c94c
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_6f47d10
        mov bl, al
        public_6f6c94c : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push edx
        call public_6f6cf20
        add esp, 8
        test al, al
        jne public_6f6cac3
        test esi, esi
        je public_6f6c96f
        test bl, bl
        je public_6f6cac3
        public_6f6c96f : nop
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        test eax, 0xC40
        jne public_6f6ca02
        mov ebx, dword ptr ss : [esp+0x58]
        cmp dword ptr ds : [ebx], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x64], 0x3F800000
        je public_6f6c9be
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        call dword ptr ds : [public_6fb364c]
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x64]
        push ebx
        push edx
        call dword ptr ds : [public_6fb365c]
        add esp, 0x14
        public_6f6c9be : nop
        fld dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [public_6fd1c84]
        fnstsw ax
        test ah, 0x41
        je public_6f6ca02
        mov eax, dword ptr ss : [esp+0x68]
        xor edi, edi
        test esi, esi
        mov dword ptr ds : [eax], 0xFFFFFFFF
        je public_6f6c9f8
/*FIXUP push offset public_6fbbd4c @0x6f6c9df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbd4c
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3400]
        add esp, 0xC
        public_6f6c9f8 : nop
        mov eax, edi
        public_6f6c9fa : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        public_6f6ca02 : nop
        mov edx, dword ptr ss : [esp+0x5C]
        push edi
        push edx
        call public_6f6d040
        mov esi, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x5C]
        push esi
        push eax
        push edi
        push ecx
        call public_6f6c580
        add esp, 0x18
        cmp eax, 4
        jne public_6f6c9fa
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        push edi
        call dword ptr ds : [public_6fb3564]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [public_6fb3660]
        add esp, 0x18
        test eax, eax
        jne public_6f6cab6
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_6fb7a88]
        fnstsw ax
        test ah, 0x41
        je public_6f6caa9
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_6fb7a88]
        fnstsw ax
        test ah, 0x41
        jne public_6f6cab6
        public_6f6caa9 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x40
        ret 
        public_6f6cab6 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x40
        ret 
        public_6f6cac3 : nop
        test esi, esi
        je public_6f6cb01
        mov ecx, esi
        call public_6f487c0
        test eax, eax
        je public_6f6cae8
        test bl, bl
        jne public_6f6cae8
/*FIXUP push offset public_6fbbd3c @0x6f6cad6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbd3c
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        jmp public_6f6caf8
/*FIXUP public_6f6cae8 : nop
        push offset public_6fbbd28 @0x6f6cae8*/
  FIXUP public_6f6cae8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbd28
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        push edx
        public_6f6caf8 : nop
        call dword ptr ds : [public_6fb3400]
        add esp, 0xC
        public_6f6cb01 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6f6c920)
    }
}

#undef public_6f6c94c
#undef public_6f6c96f
#undef public_6f6c9be
#undef public_6f6c9f8
#undef public_6f6c9fa
#undef public_6f6ca02
#undef public_6f6caa9
#undef public_6f6cab6
#undef public_6f6cac3
#undef public_6f6cae8
#undef public_6f6caf8
#undef public_6f6cb01
