#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807710);
CLANG_FORWARD_PROC_SYMBOL(public_6807750);

PROC_DECLARE(0x6807750, internal_6807750, public_6807750);
extern "C" NAKED register_t __cdecl internal_6807750()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6807710
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+8]
        add esp, 4
        shl eax, 4
        mov eax, dword ptr ds : [eax+ecx+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807750)
    }
}
