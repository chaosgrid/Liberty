#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_634d5c0);

PROC_DECLARE(0x634d5c0, internal_634d5c0, public_634d5c0);
extern "C" NAKED register_t __cdecl internal_634d5c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        push 0x70
        mov dword ptr ds : [esi], eax
        call public_6343f80
        mov dword ptr ds : [esi+8], eax
        add esp, 8
        mov dword ptr ds : [esi+4], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634d5c0)
    }
}
