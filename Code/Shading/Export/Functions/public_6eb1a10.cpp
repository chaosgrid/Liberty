#include "Shading-PCH.h"


#define public_6eb1a3d _public_6eb1a3d

PROC_DECLARE(0x6eb1a10, internal_6eb1a10, public_6eb1a10);
extern "C" NAKED register_t __cdecl internal_6eb1a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6eb1a3d
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6eb1a3d
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6eb1a3d
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6eb1a3d : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6eb1a10)
    }
}

#undef public_6eb1a3d
