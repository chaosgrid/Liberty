#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d464ec);

PROC_DECLARE(0x6d464ec, internal_6d464ec, public_6d464ec);
extern "C" NAKED register_t __cdecl internal_6d464ec()
{
    __asm
    {
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x35
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x18], edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d464ec)
    }
}
