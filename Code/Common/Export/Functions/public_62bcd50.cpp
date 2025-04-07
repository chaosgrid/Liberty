#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

PROC_DECLARE(0x62bcd50, internal_62bcd50, public_62bcd50);
extern "C" NAKED register_t __cdecl internal_62bcd50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bcd50)
    }
}
