#include "Common-PCH.h"


#define public_630b466 _public_630b466
#define public_630b471 _public_630b471
#define public_630b473 _public_630b473
#define public_630b481 _public_630b481
#define public_630b49d _public_630b49d
#define public_630b4a7 _public_630b4a7
#define public_630b4ae _public_630b4ae

PROC_DECLARE(0x630b460, internal_630b460, public_630b460);
extern "C" NAKED register_t __cdecl internal_630b460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        public_630b466 : nop
        test eax, eax
        jne public_630b471
        mov eax, dword ptr ds : [public_63fcf28]
        jmp public_630b473
        public_630b471 : nop
        mov eax, dword ptr ds : [eax]
        public_630b473 : nop
        test eax, eax
        je public_630b4ae
        cmp edx, 0xFFFFFFFF
        je public_630b481
        cmp dword ptr ds : [eax+8], edx
        jne public_630b466
        public_630b481 : nop
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        mov byte ptr ds : [eax+4], 1
        jne public_630b49d
        mov cl, byte ptr ds : [eax+0x12]
        test cl, cl
        jne public_630b49d
        mov ecx, dword ptr ds : [eax+0x94]
        test ecx, ecx
        je public_630b4a7
        public_630b49d : nop
        mov ecx, 1
        mov byte ptr ds : [eax+0x10], cl
        jmp public_630b466
        public_630b4a7 : nop
        xor ecx, ecx
        mov byte ptr ds : [eax+0x10], cl
        jmp public_630b466
        public_630b4ae : nop
        ret 
        UNREACHABLE_TRAP(0x630b460)
    }
}

#undef public_630b466
#undef public_630b471
#undef public_630b473
#undef public_630b481
#undef public_630b49d
#undef public_630b4a7
#undef public_630b4ae
