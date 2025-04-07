#include "Common-PCH.h"


#define public_630b4b8 _public_630b4b8
#define public_630b4c3 _public_630b4c3
#define public_630b4c5 _public_630b4c5
#define public_630b4d3 _public_630b4d3
#define public_630b4db _public_630b4db

PROC_DECLARE(0x630b4b0, internal_630b4b0, public_630b4b0);
extern "C" NAKED register_t __cdecl internal_630b4b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor edx, edx
        xor eax, eax
        public_630b4b8 : nop
        cmp eax, edx
        jne public_630b4c3
        mov eax, dword ptr ds : [public_63fcf28]
        jmp public_630b4c5
        public_630b4c3 : nop
        mov eax, dword ptr ds : [eax]
        public_630b4c5 : nop
        cmp eax, edx
        je public_630b4db
        cmp ecx, 0xFFFFFFFF
        je public_630b4d3
        cmp dword ptr ds : [eax+8], ecx
        jne public_630b4b8
        public_630b4d3 : nop
        mov byte ptr ds : [eax+4], dl
        mov byte ptr ds : [eax+0x10], dl
        jmp public_630b4b8
        public_630b4db : nop
        ret 
        UNREACHABLE_TRAP(0x630b4b0)
    }
}

#undef public_630b4b8
#undef public_630b4c3
#undef public_630b4c5
#undef public_630b4d3
#undef public_630b4db
