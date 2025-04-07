#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712480);

PROC_DECLARE(0x6712410, internal_6712410, public_6712410);
extern "C" NAKED register_t __cdecl internal_6712410()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6712480
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x58]
        push edx
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ds : [esi+0x54]
        push edx
        mov edx, dword ptr ds : [esi+0x50]
        push edx
        call dword ptr ds : [eax+0x30]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6712410)
    }
}
