#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428790);
CLANG_FORWARD_PROC_SYMBOL(public_429040);

PROC_DECLARE(0x428790, internal_428790, public_428790);
extern "C" NAKED register_t __cdecl internal_428790()
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
        mov dword ptr ds : [esi], offset public_5c9efc
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x428790)
    }
}
