#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff140);
CLANG_FORWARD_PROC_SYMBOL(public_62ff7d0);

#define public_62b6ce1 _public_62b6ce1

PROC_DECLARE(0x62b6cc0, internal_62b6cc0, public_62b6cc0);
extern "C" NAKED register_t __cdecl internal_62b6cc0()
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
        je public_62b6ce1
        mov ecx, eax
        call public_62ff140
        pop esi
        ret 8
        public_62b6ce1 : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b6cc0)
    }
}

#undef public_62b6ce1
