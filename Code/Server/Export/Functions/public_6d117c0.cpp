#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d117c0);

PROC_DECLARE(0x6d117c0, internal_6d117c0, public_6d117c0);
extern "C" NAKED register_t __cdecl internal_6d117c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        sete al
        ret 
        UNREACHABLE_TRAP(0x6d117c0)
    }
}
