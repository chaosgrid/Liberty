#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5950);

#define public_62e595f _public_62e595f
#define public_62e5977 _public_62e5977
#define public_62e5990 _public_62e5990

PROC_DECLARE(0x62e5950, internal_62e5950, public_62e5950);
extern "C" NAKED register_t __cdecl internal_62e5950()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e595f
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e595f : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62e5977
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5977 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_62e5990
        mov dword ptr ss : [esp+0x10], 0
        public_62e5990 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [eax+0xEC]
        ret 
        UNREACHABLE_TRAP(0x62e5950)
    }
}

#undef public_62e595f
#undef public_62e5977
#undef public_62e5990
