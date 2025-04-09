#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45e332 _public_45e332
#define public_45e33c _public_45e33c
#define public_45e35a _public_45e35a

PROC_DECLARE(0x45e300, internal_45e300, public_45e300);
extern "C" NAKED register_t __cdecl internal_45e300()
{
    __asm
    {
        mov cl, byte ptr ds : [public_66d8e0]
        mov al, 1
        test al, cl
        jne public_45e35a
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_66d8e8]
        test eax, eax
        mov byte ptr ds : [public_66d8e0], dl
        je public_45e33c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_45e332
        cmp cl, 0xFF
        je public_45e332
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_45e33c
        public_45e332 : nop
        dec eax
        push eax
        call public_5b7e1d
        add esp, 4
        public_45e33c : nop
        mov dword ptr ds : [public_66d8e8], 0
        mov dword ptr ds : [public_66d8ec], 0
        mov dword ptr ds : [public_66d8f0], 0
        public_45e35a : nop
        ret 
        UNREACHABLE_TRAP(0x45e300)
    }
}

#undef public_45e332
#undef public_45e33c
#undef public_45e35a
