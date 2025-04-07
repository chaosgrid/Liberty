#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680bc20);

PROC_DECLARE(0x680bc20, internal_680bc20, public_680bc20);
extern "C" NAKED register_t __cdecl internal_680bc20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+0x28], ecx
        ret 
        UNREACHABLE_TRAP(0x680bc20)
    }
}
