#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634db70);
CLANG_FORWARD_PROC_SYMBOL(public_634dd10);

PROC_DECLARE(0x634dd10, internal_634dd10, public_634dd10);
extern "C" NAKED register_t __cdecl internal_634dd10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        push eax
        call public_634db70
        xor eax, eax
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_63a55e0
        inc dword ptr ds : [eax+0x6C]
        inc dword ptr ds : [eax+0x70]
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x634dd10)
    }
}
