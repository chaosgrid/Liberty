#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68074b0);
CLANG_FORWARD_PROC_SYMBOL(public_6807560);
CLANG_FORWARD_PROC_SYMBOL(public_6807ff0);

PROC_DECLARE(0x6807ff0, internal_6807ff0, public_6807ff0);
extern "C" NAKED register_t __cdecl internal_6807ff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_6807560
        push eax
        push esi
        call public_68074b0
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807ff0)
    }
}
