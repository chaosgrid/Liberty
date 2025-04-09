#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428000);
CLANG_FORWARD_PROC_SYMBOL(public_564760);

#define public_564766 _public_564766
#define public_564779 _public_564779
#define public_564788 _public_564788

PROC_DECLARE(0x564760, internal_564760, public_564760);
extern "C" NAKED register_t __cdecl internal_564760()
{
    __asm
    {
        push esi
        mov esi, offset public_67a4a8
        public_564766 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_564779
        push eax
        call public_428000
        add esp, 4
        test eax, eax
        jne public_564788
        public_564779 : nop
        add esi, 4
        cmp esi, offset public_67a55c
        jl public_564766
        xor al, al
        pop esi
        ret 
        public_564788 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x564760)
    }
}

#undef public_564766
#undef public_564779
#undef public_564788
