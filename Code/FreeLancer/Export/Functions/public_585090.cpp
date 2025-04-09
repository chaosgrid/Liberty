#include "Freelancer-PCH.h"


#define public_5850a0 _public_5850a0
#define public_5850c4 _public_5850c4
#define public_5850d4 _public_5850d4

PROC_DECLARE(0x585090, internal_585090, public_585090);
extern "C" NAKED register_t __cdecl internal_585090()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        lea eax, ds:[ecx+0x18]
        lea esp, ss:[esp]
        public_5850a0 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_5850d4
        test cl, cl
        je public_5850c4
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_5850d4
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_5850a0
        public_5850c4 : nop
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        pop esi
        mov al, cl
        pop ebx
        ret 4
        public_5850d4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        xor ecx, ecx
        test eax, eax
        sete cl
        pop esi
        mov al, cl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x585090)
    }
}

#undef public_5850a0
#undef public_5850c4
#undef public_5850d4
