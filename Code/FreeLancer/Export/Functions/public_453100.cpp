#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557130);

PROC_DECLARE(0x453100, internal_453100, public_453100);
extern "C" NAKED register_t __cdecl internal_453100()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x70]
        xor eax, eax
        mov dword ptr ds : [edx*4+public_66d130], eax
        mov edx, dword ptr ds : [ecx+0x70]
        mov byte ptr ds : [edx+public_66d230], al
        mov dword ptr ds : [ecx+0x70], 0xFFFFFFFF
        add ecx, 0x6C
        push ecx
        call public_557130
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x453100)
    }
}
