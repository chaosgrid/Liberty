#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e430);

#define public_58e445 _public_58e445
#define public_58e459 _public_58e459
#define public_58e460 _public_58e460

PROC_DECLARE(0x58e430, internal_58e430, public_58e430);
extern "C" NAKED register_t __cdecl internal_58e430()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_58e460
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_58e445
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_58e445 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_58e459
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_58e459 : nop
        mov dword ptr ds : [esi+8], 0
        public_58e460 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x58e430)
    }
}

#undef public_58e445
#undef public_58e459
#undef public_58e460
