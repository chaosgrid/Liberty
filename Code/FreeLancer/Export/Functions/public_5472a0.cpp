#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5472a0);

#define public_5472c2 _public_5472c2
#define public_5472c3 _public_5472c3

PROC_DECLARE(0x5472a0, internal_5472a0, public_5472a0);
extern "C" NAKED register_t __cdecl internal_5472a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        test ecx, ecx
        je public_5472c2
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_5472c3
        mov ecx, dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [ecx+0x14]
        public_5472c2 : nop
        ret 
        public_5472c3 : nop
        mov edx, dword ptr ds : [ecx]
        jmp dword ptr ds : [edx+0x88]
        UNREACHABLE_TRAP(0x5472a0)
    }
}

#undef public_5472c2
#undef public_5472c3
