#include "Common-PCH.h"


#define public_6295961 _public_6295961

PROC_DECLARE(0x6295950, internal_6295950, public_6295950);
extern "C" NAKED register_t __cdecl internal_6295950()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x4C]
        test eax, eax
        je public_6295961
        mov ecx, dword ptr ds : [eax+0x28]
        test ecx, ecx
        jbe public_6295961
        mov al, 1
        ret 
        public_6295961 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6295950)
    }
}

#undef public_6295961
