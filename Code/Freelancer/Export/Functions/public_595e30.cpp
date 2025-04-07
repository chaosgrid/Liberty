#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595e30);

#define public_595e6d _public_595e6d

PROC_DECLARE(0x595e30, internal_595e30, public_595e30);
extern "C" NAKED register_t __cdecl internal_595e30()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fcompp 
        mov dword ptr ds : [ecx+0x334], eax
        mov dword ptr ds : [ecx+0x338], edx
        fnstsw ax
        test ah, 0x41
        jne public_595e6d
        fld dword ptr ss : [esp+4]
        fmul qword ptr ds : [public_5cf100]
        fstp dword ptr ds : [ecx+0x3B0]
        call public_595840
        ret 8
        public_595e6d : nop
        fld dword ptr ss : [esp+8]
        fmul qword ptr ds : [public_5cf100]
        fstp dword ptr ds : [ecx+0x3B0]
        call public_595840
        ret 8
        UNREACHABLE_TRAP(0x595e30)
    }
}

#undef public_595e6d
