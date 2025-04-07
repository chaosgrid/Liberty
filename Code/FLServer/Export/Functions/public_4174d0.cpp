#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417420);

#define public_417502 _public_417502
#define public_417504 _public_417504

PROC_DECLARE(0x4174d0, internal_4174d0, public_4174d0);
extern "C" NAKED register_t __cdecl internal_4174d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, esi
        shr eax, 0x10
        test eax, eax
        jl public_417502
        mov edx, dword ptr ds : [public_429dd0]
        test edx, edx
        je public_417502
        mov ecx, dword ptr ds : [public_429dd4]
        sub ecx, edx
        sar ecx, 2
        cmp eax, ecx
        jae public_417502
        mov eax, dword ptr ds : [edx+eax*4]
        and esi, 0xFFFF
        jmp public_417504
        public_417502 : nop
        xor eax, eax
        public_417504 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push esi
        push eax
        call public_417420
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4174d0)
    }
}

#undef public_417502
#undef public_417504
