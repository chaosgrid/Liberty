#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807810);
CLANG_FORWARD_PROC_SYMBOL(public_6807840);

PROC_DECLARE(0x6807810, internal_6807810, public_6807810);
extern "C" NAKED register_t __cdecl internal_6807810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0
        push eax
        push esi
        call public_6807840
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x14]
        add esp, 0xC
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807810)
    }
}
