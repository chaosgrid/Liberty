#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f57720);
CLANG_FORWARD_PROC_SYMBOL(public_6f611a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73210);

#define public_6f73240 _public_6f73240
#define public_6f732b4 _public_6f732b4
#define public_6f732c7 _public_6f732c7
#define public_6f732d0 _public_6f732d0

PROC_DECLARE(0x6f73210, internal_6f73210, public_6f73210);
extern "C" NAKED register_t __cdecl internal_6f73210()
{
    __asm
    {
        sub esp, 0x50
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+0xC0]
        fld st(0)
        push esi
        fmul st, st(1)
        push edi
        mov edi, dword ptr ss : [ebp+0xBC]
        xor al, al
        cmp edi, ecx
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        je public_6f732c7
        mov edi, edi
        public_6f73240 : nop
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [edx+0x10]
        test esi, esi
        je public_6f732b4
        mov ecx, esi
        call public_6f57710
        test al, al
        je public_6f732b4
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, esi
        call public_6f57720
        mov ecx, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ds : [public_6fb3664]
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        call esi
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        call esi
        lea edx, ss:[esp+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x7C]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        push edx
        call public_6f611a0
        fcomp dword ptr ss : [esp+0x38]
        add esp, 0x28
        fnstsw ax
        test ah, 0x41
        jnp public_6f732d0
        public_6f732b4 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        add edi, 4
        cmp edi, eax
        jne public_6f73240
        xor al, al
        public_6f732c7 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 8
        public_6f732d0 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6f73210)
    }
}

#undef public_6f73240
#undef public_6f732b4
#undef public_6f732c7
#undef public_6f732d0
