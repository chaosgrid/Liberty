#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bc30);
CLANG_FORWARD_PROC_SYMBOL(public_620bda0);
CLANG_FORWARD_PROC_SYMBOL(public_620de30);
CLANG_FORWARD_PROC_SYMBOL(public_6244b80);
CLANG_FORWARD_PROC_SYMBOL(public_6244df0);

#define public_620de6f _public_620de6f
#define public_620dea3 _public_620dea3

PROC_DECLARE(0x620de30, internal_620de30, public_620de30);
extern "C" NAKED register_t __cdecl internal_620de30()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        xor eax, eax
        mov word ptr ds : [public_6257936], ax
        mov word ptr ds : [public_6257938], ax
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        fadd dword ptr ds : [esi+0x90]
        cmp dword ptr ds : [esi+0xBC], eax
        fstp dword ptr ds : [esi+0x90]
        jne public_620de6f
        cmp dword ptr ds : [esi+0xF0], eax
        jne public_620de6f
        mov eax, dword ptr ds : [esi+0x10]
        or al, 1
        mov dword ptr ds : [esi+0x10], eax
        public_620de6f : nop
        mov eax, dword ptr ds : [esi+0xFC]
        lea ecx, ss:[esp+8]
        lea edi, ds:[esi+0xC4]
        push ecx
        mov eax, dword ptr ds : [eax+0x64]
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], offset public_6255804
        mov dword ptr ss : [esp+0x10], eax
        call public_6244b80
        cmp dword ptr ds : [edi+4], 0xFFFFFFFF
        jne public_620dea3
        mov ecx, edi
        call public_6244df0
        public_620dea3 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ds:[esi+0xA4]
        lea edi, ds:[esi+0xF0]
        push edx
        push edi
        push eax
        call public_620bc30
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push edi
        call public_620bda0
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x620de30)
    }
}

#undef public_620de6f
#undef public_620dea3
