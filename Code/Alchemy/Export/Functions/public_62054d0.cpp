#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bc30);
CLANG_FORWARD_PROC_SYMBOL(public_620bda0);
CLANG_FORWARD_PROC_SYMBOL(public_6244b80);
CLANG_FORWARD_PROC_SYMBOL(public_6244df0);

#define public_620550f _public_620550f
#define public_6205543 _public_6205543

PROC_DECLARE(0x62054d0, internal_62054d0, public_62054d0);
extern "C" NAKED register_t __cdecl internal_62054d0()
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
        fadd dword ptr ds : [esi+0x84]
        cmp dword ptr ds : [esi+0xB0], eax
        fstp dword ptr ds : [esi+0x84]
        jne public_620550f
        cmp dword ptr ds : [esi+0xE4], eax
        jne public_620550f
        mov eax, dword ptr ds : [esi+4]
        or al, 1
        mov dword ptr ds : [esi+4], eax
        public_620550f : nop
        mov eax, dword ptr ds : [esi+0xF0]
        lea ecx, ss:[esp+8]
        lea edi, ds:[esi+0xB8]
        push ecx
        mov eax, dword ptr ds : [eax+0x64]
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], offset public_6255804
        mov dword ptr ss : [esp+0x10], eax
        call public_6244b80
        cmp dword ptr ds : [edi+4], 0xFFFFFFFF
        jne public_6205543
        mov ecx, edi
        call public_6244df0
        public_6205543 : nop
        mov eax, dword ptr ds : [esi+0x18]
        lea edx, ds:[esi+0x98]
        lea edi, ds:[esi+0xE4]
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
        UNREACHABLE_TRAP(0x62054d0)
    }
}

#undef public_620550f
#undef public_6205543
