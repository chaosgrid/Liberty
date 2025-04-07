#include "Movie-PCH.h"


#define public_6ac1481 _public_6ac1481

PROC_DECLARE(0x6ac1460, internal_6ac1460, public_6ac1460);
extern "C" NAKED register_t __cdecl internal_6ac1460()
{
    __asm
    {
        push esi
        mov esi, ecx
        push 0
        push 0
        mov eax, dword ptr ds : [esi+8]
        push 0x806
        push eax
        call dword ptr ds : [public_6ada188]
        test eax, eax
        jne public_6ac1481
        mov byte ptr ds : [esi+0xC], al
        pop esi
        ret 4
        public_6ac1481 : nop
        mov byte ptr ds : [esi+0xC], 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac1460)
    }
}

#undef public_6ac1481
