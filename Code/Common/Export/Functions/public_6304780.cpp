#include "Common-PCH.h"


#define public_630479e _public_630479e
#define public_63047a5 _public_63047a5

PROC_DECLARE(0x6304780, internal_6304780, public_6304780);
extern "C" NAKED register_t __cdecl internal_6304780()
{
    __asm
    {
        mov al, byte ptr ds : [public_63ed17c]
        test al, al
        push esi
        mov esi, ecx
        jne public_63047a5
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        jne public_630479e
        push esi
        call dword ptr ds : [public_6399128]
        mov byte ptr ds : [esi+0x18], 1
        public_630479e : nop
        push esi
        call dword ptr ds : [public_6399120]
        public_63047a5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6304780)
    }
}

#undef public_630479e
#undef public_63047a5
