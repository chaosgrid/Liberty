#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff7d0);

#define public_62b6d16 _public_62b6d16
#define public_62b6d18 _public_62b6d18

PROC_DECLARE(0x62b6cf0, internal_62b6cf0, public_62b6cf0);
extern "C" NAKED register_t __cdecl internal_62b6cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push esi
        push eax
        push edx
        xor esi, esi
        call public_62ff7d0
        test eax, eax
        je public_62b6d16
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_62b6d18
        mov eax, dword ptr ds : [public_63991d0]
        pop esi
        ret 8
        public_62b6d16 : nop
        mov eax, esi
        public_62b6d18 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b6cf0)
    }
}

#undef public_62b6d16
#undef public_62b6d18
