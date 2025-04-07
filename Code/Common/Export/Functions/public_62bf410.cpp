#include "Common-PCH.h"


#define public_62bf464 _public_62bf464
#define public_62bf46e _public_62bf46e

PROC_DECLARE(0x62bf410, internal_62bf410, public_62bf410);
extern "C" NAKED register_t __cdecl internal_62bf410()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [eax+0x44]
        mov ecx, eax
        test ecx, ecx
        jne public_62bf46e
        fld dword ptr ss : [esp]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62bf464
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp]
        fstp dword ptr ds : [eax]
        mov eax, ecx
        add esp, 8
        ret 8
        public_62bf464 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], 0
        public_62bf46e : nop
        mov eax, ecx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62bf410)
    }
}

#undef public_62bf464
#undef public_62bf46e
