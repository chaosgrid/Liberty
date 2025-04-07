#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93600);

PROC_DECLARE(0x6f93600, internal_6f93600, public_6f93600);
extern "C" NAKED register_t __cdecl internal_6f93600()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6f93600)
    }
}
