#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429040);
CLANG_FORWARD_PROC_SYMBOL(public_50c4b0);

PROC_DECLARE(0x50c4b0, internal_50c4b0, public_50c4b0);
/* CHUNK of public_50c420 */
extern "C" NAKED register_t __cdecl internal_50c4b0()
{
    __asm
    {
        push esi
        push 1
        mov esi, ecx
        call public_429040
        xor eax, eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], 0x3F800000
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x58], 0x43B40000
        mov dword ptr ds : [esi+0x60], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5db484
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50c4b0)
    }
}
