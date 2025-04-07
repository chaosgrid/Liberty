#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6363280);
CLANG_FORWARD_PROC_SYMBOL(public_6369b30);

PROC_DECLARE(0x6369b30, internal_6369b30, public_6369b30);
extern "C" NAKED register_t __cdecl internal_6369b30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], offset public_63a58b8
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        add ecx, 0x64
        call public_6363280
        ret 
        UNREACHABLE_TRAP(0x6369b30)
    }
}
