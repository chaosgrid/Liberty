#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5bc0);

#define public_62e5bcf _public_62e5bcf
#define public_62e5be7 _public_62e5be7

PROC_DECLARE(0x62e5bc0, internal_62e5bc0, public_62e5bc0);
extern "C" NAKED register_t __cdecl internal_62e5bc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e5bcf
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5bcf : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e5be7
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5be7 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        call dword ptr ds : [eax+0xDC]
        ret 
        UNREACHABLE_TRAP(0x62e5bc0)
    }
}

#undef public_62e5bcf
#undef public_62e5be7
