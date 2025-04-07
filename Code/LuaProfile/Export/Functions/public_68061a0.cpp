#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68061a0);

PROC_DECLARE(0x68061a0, internal_68061a0, public_68061a0);
extern "C" NAKED register_t __cdecl internal_68061a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x68061a0)
    }
}
