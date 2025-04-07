#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f14c0);

PROC_DECLARE(0x66f14c0, internal_66f14c0, public_66f14c0);
extern "C" NAKED register_t __cdecl internal_66f14c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push 0x2000
        push esi
        call dword ptr ds : [public_6701030]
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66f14c0)
    }
}
