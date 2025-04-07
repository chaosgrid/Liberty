#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0210);

#define public_62a024c _public_62a024c
#define public_62a024e _public_62a024e

PROC_DECLARE(0x62a0210, internal_62a0210, public_62a0210);
extern "C" NAKED register_t __cdecl internal_62a0210()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC], eax
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62a024c
        fld dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62a024e
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 9
        mov ecx, eax
        call dword ptr ds : [edx+0xC8]
        ret 4
        public_62a024c : nop
        fstp st(0)
        public_62a024e : nop
        ret 4
        UNREACHABLE_TRAP(0x62a0210)
    }
}

#undef public_62a024c
#undef public_62a024e
