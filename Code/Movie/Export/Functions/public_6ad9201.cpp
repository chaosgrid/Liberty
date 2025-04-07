#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad9201);

#define public_6ad9218 _public_6ad9218
#define public_6ad922d _public_6ad922d
#define public_6ad923c _public_6ad923c
#define public_6ad924a _public_6ad924a
#define public_6ad9255 _public_6ad9255

PROC_DECLARE(0x6ad9201, internal_6ad9201, public_6ad9201);
extern "C" NAKED register_t __cdecl internal_6ad9201()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov cl, byte ptr ss : [ebp+8]
        test cl, 1
        je public_6ad9218
        fld tbyte ptr ds : [public_6ae03ec]
        fistp dword ptr ss : [ebp+8]
        wait 
        public_6ad9218 : nop
        test cl, 8
        je public_6ad922d
        wait 
        fnstsw ax
        fld tbyte ptr ds : [public_6ae03ec]
        fstp qword ptr ss : [ebp-8]
        wait 
        wait 
        fnstsw ax
        public_6ad922d : nop
        test cl, 0x10
        je public_6ad923c
        fld tbyte ptr ds : [public_6ae03f8]
        fstp qword ptr ss : [ebp-8]
        wait 
        public_6ad923c : nop
        test cl, 4
        je public_6ad924a
        fldz 
        fld1 
        fdivrp 
        fstp st(0)
        wait 
        public_6ad924a : nop
        test cl, 0x20
        je public_6ad9255
        fldpi 
        fstp qword ptr ss : [ebp-8]
        wait 
        public_6ad9255 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad9201)
    }
}

#undef public_6ad9218
#undef public_6ad922d
#undef public_6ad923c
#undef public_6ad924a
#undef public_6ad9255
