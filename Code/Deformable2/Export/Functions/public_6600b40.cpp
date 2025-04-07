#include "Deformable2-PCH.h"


#define public_6600b6d _public_6600b6d

PROC_DECLARE(0x6600b40, internal_6600b40, public_6600b40);
extern "C" NAKED register_t __cdecl internal_6600b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6600b6d
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6600b6d
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6600b6d
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6600b6d : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6600b40)
    }
}

#undef public_6600b6d
