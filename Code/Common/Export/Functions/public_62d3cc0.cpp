#include "Common-PCH.h"


#define public_62d3cec _public_62d3cec

PROC_DECLARE(0x62d3cc0, internal_62d3cc0, public_62d3cc0);
extern "C" NAKED register_t __cdecl internal_62d3cc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_62d3cec
        mov eax, dword ptr ds : [ecx+eax*4+0x174]
        test eax, eax
        je public_62d3cec
        mov byte ptr ds : [ecx+0xD8], 1
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, eax
        jmp dword ptr ds : [edx+0x48]
        public_62d3cec : nop
        ret 4
        UNREACHABLE_TRAP(0x62d3cc0)
    }
}

#undef public_62d3cec
