#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d5a0);

PROC_DECLARE(0x630d660, internal_630d660, public_630d660);
extern "C" NAKED register_t __cdecl internal_630d660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi], 0
        call public_630d5a0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630d660)
    }
}
