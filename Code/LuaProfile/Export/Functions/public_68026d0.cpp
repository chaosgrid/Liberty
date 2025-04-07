#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68026d0);

PROC_DECLARE(0x68026d0, internal_68026d0, public_68026d0);
extern "C" NAKED register_t __cdecl internal_68026d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [public_680e604], ecx
        ret 
        UNREACHABLE_TRAP(0x68026d0)
    }
}
