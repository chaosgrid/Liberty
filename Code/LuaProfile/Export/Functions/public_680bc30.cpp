#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680bc30);

PROC_DECLARE(0x680bc30, internal_680bc30, public_680bc30);
extern "C" NAKED register_t __cdecl internal_680bc30()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx+0x20]
        add eax, dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x680bc30)
    }
}
