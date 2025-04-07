#include "Common-PCH.h"


#define public_6310525 _public_6310525
#define public_6310540 _public_6310540
#define public_6310550 _public_6310550

PROC_DECLARE(0x6310510, internal_6310510, public_6310510);
extern "C" NAKED register_t __cdecl internal_6310510()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_6310525
        mov eax, dword ptr ds : [ecx+0x145C]
        movzx eax, byte ptr ds : [eax+2]
        ret 
        public_6310525 : nop
        lea eax, ds:[ecx+0x828]
        mov cl, byte ptr ds : [eax]
        push esi
        xor esi, esi
        test cl, cl
        push edi
        je public_6310550
        mov edi, dword ptr ds : [public_6399300]
        nop 
        lea esp, ss:[esp]
        public_6310540 : nop
        push 0x2C
        push eax
        inc esi
        call edi
        add esp, 8
        test eax, eax
        je public_6310550
        inc eax
        jne public_6310540
        public_6310550 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6310510)
    }
}

#undef public_6310525
#undef public_6310540
#undef public_6310550
