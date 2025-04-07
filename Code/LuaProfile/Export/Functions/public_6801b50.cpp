#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801b50);

PROC_DECLARE(0x6801b50, internal_6801b50, public_6801b50);
extern "C" NAKED register_t __cdecl internal_6801b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6801b50)
    }
}
