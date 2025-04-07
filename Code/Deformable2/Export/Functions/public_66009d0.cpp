#include "Deformable2-PCH.h"


#define public_66009df _public_66009df
#define public_66009fb _public_66009fb
#define public_66009fd _public_66009fd

PROC_DECLARE(0x66009d0, internal_66009d0, public_66009d0);
extern "C" NAKED register_t __cdecl internal_66009d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_66009df
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_66009df : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_66009fd
        mov dword ptr ds : [ecx+4], 1
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_66009fb
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x54]
        public_66009fb : nop
        xor eax, eax
        public_66009fd : nop
        ret 4
        UNREACHABLE_TRAP(0x66009d0)
    }
}

#undef public_66009df
#undef public_66009fb
#undef public_66009fd
