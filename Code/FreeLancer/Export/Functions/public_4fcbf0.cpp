#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcbf0);

#define public_4fcc15 _public_4fcc15
#define public_4fcc30 _public_4fcc30

PROC_DECLARE(0x4fcbf0, internal_4fcbf0, public_4fcbf0);
extern "C" NAKED register_t __cdecl internal_4fcbf0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        fnstsw ax
        test ah, 0x41
        jne public_4fcc15
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx], edx
        public_4fcc15 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fcc30
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC], eax
        ret 0xC
        public_4fcc30 : nop
        mov dword ptr ds : [ecx+0xC], 0
        ret 0xC
        UNREACHABLE_TRAP(0x4fcbf0)
    }
}

#undef public_4fcc15
#undef public_4fcc30
