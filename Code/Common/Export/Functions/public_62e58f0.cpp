#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e58f0);

#define public_62e58ff _public_62e58ff
#define public_62e5917 _public_62e5917
#define public_62e5930 _public_62e5930

PROC_DECLARE(0x62e58f0, internal_62e58f0, public_62e58f0);
extern "C" NAKED register_t __cdecl internal_62e58f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e58ff
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e58ff : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e5917
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5917 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_62e5930
        mov dword ptr ss : [esp+0xC], 0
        public_62e5930 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [eax+0xD0]
        ret 
        UNREACHABLE_TRAP(0x62e58f0)
    }
}

#undef public_62e58ff
#undef public_62e5917
#undef public_62e5930
