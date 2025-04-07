#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc8);

#define public_62df30a _public_62df30a
#define public_62df325 _public_62df325
#define public_62df354 _public_62df354

PROC_DECLARE(0x62df2d0, internal_62df2d0, public_62df2d0);
extern "C" NAKED register_t __cdecl internal_62df2d0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [ecx+0x2D4]
        test al, al
        je public_62df354
        mov eax, dword ptr ds : [ecx]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62df354
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62df354
        fld dword ptr ds : [ecx+0x314]
        fcomp qword ptr ds : [public_639fa58]
        fnstsw ax
        test ah, 0x41
        jne public_62df30a
        fld dword ptr ds : [public_63a0468]
        pop ecx
        ret 
        public_62df30a : nop
        fld dword ptr ds : [ecx+0x314]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 5
        jp public_62df325
        fld dword ptr ds : [public_63a0620]
        pop ecx
        ret 
        public_62df325 : nop
        fld dword ptr ds : [ecx+0x314]
        fsub qword ptr ds : [public_6399410]
        fmul qword ptr ds : [public_63a0618]
        fst dword ptr ss : [esp]
        fld qword ptr ds : [public_639c420]
        call public_6391fc8
        fmul dword ptr ds : [public_63a0620]
        fadd dword ptr ds : [public_63a0620]
        pop ecx
        ret 
        public_62df354 : nop
        fld dword ptr ds : [public_639a1d0]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62df2d0)
    }
}

#undef public_62df30a
#undef public_62df325
#undef public_62df354
