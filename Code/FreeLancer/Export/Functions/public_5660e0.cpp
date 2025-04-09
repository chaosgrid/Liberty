#include "FreeLancer-PCH.h"


#define public_5660fb _public_5660fb
#define public_5660ff _public_5660ff
#define public_566109 _public_566109

PROC_DECLARE(0x5660e0, internal_5660e0, public_5660e0);
extern "C" NAKED register_t __cdecl internal_5660e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx+0x3E]
        test al, al
        mov ecx, dword ptr ss : [esp+8]
        je public_5660ff
        push ebx
        mov bl, byte ptr ds : [ecx+0x3E]
        test bl, bl
        pop ebx
        jne public_5660fb
        xor al, al
        ret 
        public_5660fb : nop
        test al, al
        jne public_566109
        public_5660ff : nop
        mov al, byte ptr ds : [ecx+0x3E]
        test al, al
        je public_566109
        mov al, 1
        ret 
        public_566109 : nop
        cmp ecx, edx
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x5660e0)
    }
}

#undef public_5660fb
#undef public_5660ff
#undef public_566109
