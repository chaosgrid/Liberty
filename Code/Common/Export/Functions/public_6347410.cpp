#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347410);

#define public_63474af _public_63474af

PROC_DECLARE(0x6347410, internal_6347410, public_6347410);
extern "C" NAKED register_t __cdecl internal_6347410()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ds : [ecx+0x14]
        fstp dword ptr ds : [ecx+0x34]
        fst dword ptr ds : [ecx+0x38]
        fld st(1)
        fstp dword ptr ds : [ecx+0x3C]
        fld dword ptr ds : [ecx+0x20]
        fdivr dword ptr ds : [public_63a53d0]
        fstp dword ptr ds : [ecx+0x40]
        fld st(0)
        fsub st, st(2)
        fld st(2)
        fsub dword ptr ds : [ecx+0x34]
        fld dword ptr ds : [ecx+0x34]
        fsub st, st(3)
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x34]
        fld st(1)
        fmul st, st(2)
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fld st(5)
        fmul st, st(6)
        faddp 
        fld st(6)
        fmul st, st(7)
        faddp 
        fmul dword ptr ds : [public_63a5468]
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        mov eax, dword ptr ds : [ecx]
        jne public_63474af
        fld dword ptr ds : [public_63a5460]
        and eax, 0xFFFFFF7F
        fdiv dword ptr ds : [ecx+4]
        or eax, 0x40
        mov dword ptr ds : [ecx], eax
        fstp dword ptr ds : [ecx+0x48]
        pop ecx
        ret 
        public_63474af : nop
        fld dword ptr ds : [public_63a5460]
        and eax, 0xFFFFFF3F
        fdiv dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], eax
        fstp dword ptr ds : [ecx+0x48]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6347410)
    }
}

#undef public_63474af
