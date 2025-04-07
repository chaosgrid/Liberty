#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801d70);
CLANG_FORWARD_PROC_SYMBOL(public_6801da0);

PROC_DECLARE(0x6801d70, internal_6801d70, public_6801d70);
extern "C" NAKED register_t __cdecl internal_6801d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [eax+0xC]
        push eax
        mov dword ptr ds : [esi+0xC], edx
        call public_6801da0
        add esp, 4
        mov dword ptr ds : [esi], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6801d70)
    }
}
