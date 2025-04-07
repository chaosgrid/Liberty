#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5835f0);
CLANG_FORWARD_PROC_SYMBOL(public_585d20);

PROC_DECLARE(0x585d20, internal_585d20, public_585d20);
extern "C" NAKED register_t __cdecl internal_585d20()
{
    __asm
    {
        sub esp, 8
        push esi
        xor eax, eax
        mov esi, ecx
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call public_5835f0
        mov dl, byte ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x4FC], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x500], eax
        mov al, byte ptr ds : [esi+0x518]
        and dl, 1
        add esp, 0xC
        shl dl, 5
        and al, 0xCF
        xor dl, al
        mov dword ptr ds : [esi+0x504], ecx
        mov dword ptr ds : [esi+0x508], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x518], dl
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x585d20)
    }
}
