#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e7d0);

#define public_634e7e3 _public_634e7e3

PROC_DECLARE(0x634e7d0, internal_634e7d0, public_634e7d0);
extern "C" NAKED register_t __cdecl internal_634e7d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, dword ptr ss : [esp+4]
        jne public_634e7e3
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0xC], edx
        ret 8
        public_634e7e3 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x10], eax
        ret 8
        UNREACHABLE_TRAP(0x634e7d0)
    }
}

#undef public_634e7e3
