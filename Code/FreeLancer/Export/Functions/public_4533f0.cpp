#include "Freelancer-PCH.h"


#define public_45340f _public_45340f

PROC_DECLARE(0x4533f0, internal_4533f0, public_4533f0);
extern "C" NAKED register_t __cdecl internal_4533f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [eax+0x5C]
        cmp eax, 0xFFFFFFFF
        je public_45340f
        movzx edx, byte ptr ds : [eax+public_66d230]
        mov dword ptr ds : [ecx], edx
        public_45340f : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4533f0)
    }
}

#undef public_45340f
