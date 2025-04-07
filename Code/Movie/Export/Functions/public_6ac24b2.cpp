#include "Movie-PCH.h"


#define public_6ac24c1 _public_6ac24c1
#define public_6ac24d5 _public_6ac24d5
#define public_6ac24de _public_6ac24de

PROC_DECLARE(0x6ac24b2, internal_6ac24b2, public_6ac24b2);
extern "C" NAKED register_t __cdecl internal_6ac24b2()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jne public_6ac24c1
        mov eax, 0x80004003
        jmp public_6ac24de
        public_6ac24c1 : nop
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_6ac24d5
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        jmp public_6ac24de
        public_6ac24d5 : nop
        mov eax, dword ptr ds : [public_6add1d0]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        public_6ac24de : nop
        ret 8
        UNREACHABLE_TRAP(0x6ac24b2)
    }
}

#undef public_6ac24c1
#undef public_6ac24d5
#undef public_6ac24de
