#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63262e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6326312 _public_6326312
#define public_632631c _public_632631c
#define public_632633a _public_632633a

PROC_DECLARE(0x63262e0, internal_63262e0, public_63262e0);
extern "C" NAKED register_t __cdecl internal_63262e0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6409568]
        mov al, 1
        test al, cl
        jne public_632633a
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_6409570]
        test eax, eax
        mov byte ptr ds : [public_6409568], dl
        je public_632631c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6326312
        cmp cl, 0xFF
        je public_6326312
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_632631c
        public_6326312 : nop
        dec eax
        push eax
        call public_6391d5a
        add esp, 4
        public_632631c : nop
        mov dword ptr ds : [public_6409570], 0
        mov dword ptr ds : [public_6409574], 0
        mov dword ptr ds : [public_6409578], 0
        public_632633a : nop
        ret 
        UNREACHABLE_TRAP(0x63262e0)
    }
}

#undef public_6326312
#undef public_632631c
#undef public_632633a
