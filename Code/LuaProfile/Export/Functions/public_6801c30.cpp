#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c30);

PROC_DECLARE(0x6801c30, internal_6801c30, public_6801c30);
extern "C" NAKED register_t __cdecl internal_6801c30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+0x14]
        ret 
        UNREACHABLE_TRAP(0x6801c30)
    }
}
