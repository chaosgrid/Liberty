#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5850);

#define public_62e585f _public_62e585f
#define public_62e5878 _public_62e5878
#define public_62e5891 _public_62e5891
#define public_62e58ba _public_62e58ba
#define public_62e58d3 _public_62e58d3

PROC_DECLARE(0x62e5850, internal_62e5850, public_62e5850);
extern "C" NAKED register_t __cdecl internal_62e5850()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e585f
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e585f : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e5878
        mov dword ptr ss : [esp+0xC], 0
        public_62e5878 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e5891
        mov dword ptr ss : [esp+0x10], 0
        public_62e5891 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e58ba
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62e58ba
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e58ba : nop
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_62e58d3
        mov dword ptr ss : [esp+0xC], 0
        public_62e58d3 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [eax+0xCC]
        ret 
        UNREACHABLE_TRAP(0x62e5850)
    }
}

#undef public_62e585f
#undef public_62e5878
#undef public_62e5891
#undef public_62e58ba
#undef public_62e58d3
