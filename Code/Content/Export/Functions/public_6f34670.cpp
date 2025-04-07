#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34670);

PROC_DECLARE(0x6f34670, internal_6f34670, public_6f34670);
extern "C" NAKED register_t __cdecl internal_6f34670()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push 0
        push eax
        call dword ptr ds : [public_6fb33c8]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f34670)
    }
}
