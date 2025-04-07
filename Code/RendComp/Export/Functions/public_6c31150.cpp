#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31150);

PROC_DECLARE(0x6c31150, internal_6c31150, public_6c31150);
extern "C" NAKED register_t __cdecl internal_6c31150()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        movzx eax, word ptr ds : [eax+0xA]
        ret 
        UNREACHABLE_TRAP(0x6c31150)
    }
}
