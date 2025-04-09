#include "FreeLancer-PCH.h"


#define public_517307 _public_517307

PROC_DECLARE(0x5172f0, internal_5172f0, public_5172f0);
extern "C" NAKED register_t __cdecl internal_5172f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC0]
        test eax, eax
        je public_517307
        add eax, 0xFFFFFFF8
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        public_517307 : nop
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x5172f0)
    }
}

#undef public_517307
