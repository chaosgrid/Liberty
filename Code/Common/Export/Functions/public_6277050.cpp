#include "Common-PCH.h"


#define public_6277053 _public_6277053
#define public_6277061 _public_6277061
#define public_627706c _public_627706c
#define public_6277086 _public_6277086

PROC_DECLARE(0x6277050, internal_6277050, public_6277050);
extern "C" NAKED register_t __cdecl internal_6277050()
{
    __asm
    {
        push esi
        xor esi, esi
        public_6277053 : nop
        mov edx, dword ptr ds : [ecx+0x1A8]
        test edx, edx
        jne public_6277061
        xor eax, eax
        jmp public_627706c
        public_6277061 : nop
        mov eax, dword ptr ds : [ecx+0x1AC]
        sub eax, edx
        sar eax, 2
        public_627706c : nop
        cmp esi, eax
        jge public_6277086
        mov eax, dword ptr ds : [ecx+0x1A8]
        mov edx, dword ptr ds : [eax+esi*4]
        mov dword ptr ds : [edx+0xE28], 0
        inc esi
        jmp public_6277053
        public_6277086 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6277050)
    }
}

#undef public_6277053
#undef public_6277061
#undef public_627706c
#undef public_6277086
