#include "Common-PCH.h"


#define public_6299495 _public_6299495
#define public_6299498 _public_6299498

PROC_DECLARE(0x6299470, internal_6299470, public_6299470);
extern "C" NAKED register_t __cdecl internal_6299470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov dl, byte ptr ds : [eax+0x15C]
        test dl, dl
        je public_6299498
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_6299495
        mov eax, 1
        ret 
        public_6299495 : nop
        xor eax, eax
        ret 
        public_6299498 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6299470)
    }
}

#undef public_6299495
#undef public_6299498
