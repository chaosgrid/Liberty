#include "Common-PCH.h"


#define public_62d3cb4 _public_62d3cb4

PROC_DECLARE(0x62d3c90, internal_62d3c90, public_62d3c90);
extern "C" NAKED register_t __cdecl internal_62d3c90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_62d3cb4
        mov eax, dword ptr ds : [ecx+eax*4+0x174]
        test eax, eax
        je public_62d3cb4
        mov byte ptr ds : [ecx+0xD8], 1
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+0x44]
        public_62d3cb4 : nop
        ret 4
        UNREACHABLE_TRAP(0x62d3c90)
    }
}

#undef public_62d3cb4
