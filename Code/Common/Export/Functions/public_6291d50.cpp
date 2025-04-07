#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6291d50);

PROC_DECLARE(0x6291d50, internal_6291d50, public_6291d50);
extern "C" NAKED register_t __cdecl internal_6291d50()
{
    __asm
    {
        mov eax, offset public_639b98c
        mov dword ptr ds : [ecx], offset public_639b994
        mov dword ptr ds : [ecx+0x1A8], eax
        mov dword ptr ds : [ecx+0xD8], eax
        mov dword ptr ds : [ecx+8], eax
        ret 
        UNREACHABLE_TRAP(0x6291d50)
    }
}
