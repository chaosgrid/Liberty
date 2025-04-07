#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e60);
CLANG_FORWARD_PROC_SYMBOL(public_6c31e90);
CLANG_FORWARD_PROC_SYMBOL(public_6c31eb0);

PROC_DECLARE(0x6c31e90, internal_6c31e90, public_6c31e90);
extern "C" NAKED register_t __cdecl internal_6c31e90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6c31e60
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_6c31eb0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c31e90)
    }
}
