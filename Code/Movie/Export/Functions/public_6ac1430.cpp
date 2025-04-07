#include "Movie-PCH.h"


#define public_6ac1453 _public_6ac1453

PROC_DECLARE(0x6ac1430, internal_6ac1430, public_6ac1430);
extern "C" NAKED register_t __cdecl internal_6ac1430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        push 0
        push 0x499
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call dword ptr ds : [public_6ada188]
        test eax, eax
        jne public_6ac1453
        mov al, 1
        pop esi
        ret 4
        public_6ac1453 : nop
        mov byte ptr ds : [esi+0xD], 1
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac1430)
    }
}

#undef public_6ac1453
