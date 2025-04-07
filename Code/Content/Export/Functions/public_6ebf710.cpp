#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf710);

PROC_DECLARE(0x6ebf710, internal_6ebf710, public_6ebf710);
extern "C" NAKED register_t __cdecl internal_6ebf710()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6fb3030]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ebf710)
    }
}
