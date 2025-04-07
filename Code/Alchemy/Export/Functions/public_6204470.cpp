#include "Alchemy-PCH.h"


#define public_620447f _public_620447f
#define public_620449b _public_620449b
#define public_620449d _public_620449d

PROC_DECLARE(0x6204470, internal_6204470, public_6204470);
extern "C" NAKED register_t __cdecl internal_6204470()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_620447f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_620447f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_620449d
        mov dword ptr ds : [ecx+4], 1
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_620449b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x2C]
        public_620449b : nop
        xor eax, eax
        public_620449d : nop
        ret 4
        UNREACHABLE_TRAP(0x6204470)
    }
}

#undef public_620447f
#undef public_620449b
#undef public_620449d
