#include "Common-PCH.h"


#define public_62e1601 _public_62e1601

PROC_DECLARE(0x62e15f0, internal_62e15f0, public_62e15f0);
extern "C" NAKED register_t __cdecl internal_62e15f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_62e1601
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_62e1601
        xor eax, eax
        ret 
        public_62e1601 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x62e15f0)
    }
}

#undef public_62e1601
