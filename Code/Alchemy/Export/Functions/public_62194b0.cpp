#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6216550);
CLANG_FORWARD_PROC_SYMBOL(public_6216f20);
CLANG_FORWARD_PROC_SYMBOL(public_62194b0);

#define public_62194dc _public_62194dc

PROC_DECLARE(0x62194b0, internal_62194b0, public_62194b0);
extern "C" NAKED register_t __cdecl internal_62194b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_62578f0]
        inc eax
        mov dword ptr ds : [public_62578f0], eax
        mov edx, dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 2
        cmp al, 2
        jne public_62194dc
        call public_6216550
        xor eax, eax
        ret 4
        public_62194dc : nop
        call public_6216f20
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62194b0)
    }
}

#undef public_62194dc
