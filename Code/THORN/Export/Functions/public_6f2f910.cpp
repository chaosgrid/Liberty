#include "THORN-PCH.h"


#define public_6f2f920 _public_6f2f920
#define public_6f2f934 _public_6f2f934
#define public_6f2f93d _public_6f2f93d

PROC_DECLARE(0x6f2f910, internal_6f2f910, public_6f2f910);
extern "C" NAKED register_t __cdecl internal_6f2f910()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_6f2f934
        lea esp, ss:[esp]
        public_6f2f920 : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        je public_6f2f93d
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f2f920
        public_6f2f934 : nop
        fld dword ptr ds : [public_6f5a1d4]
        ret 4
        public_6f2f93d : nop
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, edx
        je public_6f2f934
        cmp ecx, edx
        je public_6f2f934
        fld dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fdivp 
        fld dword ptr ds : [ecx+0xC]
        fsub st, st(2)
        fmulp 
        faddp 
        ret 4
        UNREACHABLE_TRAP(0x6f2f910)
    }
}

#undef public_6f2f920
#undef public_6f2f934
#undef public_6f2f93d
