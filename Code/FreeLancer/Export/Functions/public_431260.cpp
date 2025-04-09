#include "Freelancer-PCH.h"


#define public_431273 _public_431273
#define public_43129a _public_43129a

PROC_DECLARE(0x431260, internal_431260, public_431260);
extern "C" NAKED register_t __cdecl internal_431260()
{
    __asm
    {
        push esi
        mov esi, ecx
        xor eax, eax
        mov ax, word ptr ds : [esi+0x12]
        test ax, ax
        je public_431273
        dec eax
        mov word ptr ds : [esi+0x12], ax
        public_431273 : nop
        cmp word ptr ds : [esi+0x12], 0
        jg public_43129a
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, 0xFFFFFFFF
        je public_43129a
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        public_43129a : nop
        movsx eax, word ptr ds : [esi+0x12]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x431260)
    }
}

#undef public_431273
#undef public_43129a
