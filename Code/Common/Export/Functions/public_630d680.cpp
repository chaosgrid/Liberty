#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d5a0);

PROC_DECLARE(0x630d680, internal_630d680, public_630d680);
extern "C" NAKED register_t __cdecl internal_630d680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi], 0
        call public_630d5a0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630d680)
    }
}
