#include "Shading-PCH.h"


#define public_6eb65ff _public_6eb65ff
#define public_6eb661b _public_6eb661b
#define public_6eb661d _public_6eb661d

PROC_DECLARE(0x6eb65f0, internal_6eb65f0, public_6eb65f0);
extern "C" NAKED register_t __cdecl internal_6eb65f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6eb65ff
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6eb65ff : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6eb661d
        mov dword ptr ds : [ecx+4], 1
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6eb661b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x54]
        public_6eb661b : nop
        xor eax, eax
        public_6eb661d : nop
        ret 4
        UNREACHABLE_TRAP(0x6eb65f0)
    }
}

#undef public_6eb65ff
#undef public_6eb661b
#undef public_6eb661d
