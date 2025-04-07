#include "Common-PCH.h"


#define public_62dada9 _public_62dada9
#define public_62dade2 _public_62dade2
#define public_62dade5 _public_62dade5

PROC_DECLARE(0x62dad90, internal_62dad90, public_62dad90);
extern "C" NAKED register_t __cdecl internal_62dad90()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x10], 2
        je public_62dade5
        fld dword ptr ds : [ecx+0x3C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62dada9
        xor al, al
        ret 
        public_62dada9 : nop
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        jne public_62dade5
        fld dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62dade2
        mov eax, 1
        ret 
        public_62dade2 : nop
        xor eax, eax
        ret 
        public_62dade5 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62dad90)
    }
}

#undef public_62dada9
#undef public_62dade2
#undef public_62dade5
