#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ed40);

PROC_DECLARE(0x661ed40, internal_661ed40, public_661ed40);
extern "C" NAKED register_t __cdecl internal_661ed40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x661ed40)
    }
}
