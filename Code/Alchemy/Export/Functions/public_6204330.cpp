#include "Alchemy-PCH.h"


#define public_620433f _public_620433f
#define public_620435e _public_620435e
#define public_6204360 _public_6204360

PROC_DECLARE(0x6204330, internal_6204330, public_6204330);
extern "C" NAKED register_t __cdecl internal_6204330()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_620433f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_620433f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6204360
        mov dword ptr ds : [ecx+4], 1
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_620435e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xA4]
        public_620435e : nop
        xor eax, eax
        public_6204360 : nop
        ret 4
        UNREACHABLE_TRAP(0x6204330)
    }
}

#undef public_620433f
#undef public_620435e
#undef public_6204360
