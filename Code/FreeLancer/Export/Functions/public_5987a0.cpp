#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5987a0);

#define public_5987b5 _public_5987b5
#define public_5987c9 _public_5987c9
#define public_5987d0 _public_5987d0

PROC_DECLARE(0x5987a0, internal_5987a0, public_5987a0);
extern "C" NAKED register_t __cdecl internal_5987a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5987d0
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_5987b5
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_5987b5 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_5987c9
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_5987c9 : nop
        mov dword ptr ds : [esi+4], 0
        public_5987d0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5987a0)
    }
}

#undef public_5987b5
#undef public_5987c9
#undef public_5987d0
