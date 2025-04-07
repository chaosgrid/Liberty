#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93560);

PROC_DECLARE(0x6f93560, internal_6f93560, public_6f93560);
extern "C" NAKED register_t __cdecl internal_6f93560()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6f93560)
    }
}
