#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f56027 _public_6f56027
#define public_6f5602c _public_6f5602c

PROC_DECLARE(0x6f56000, internal_6f56000, public_6f56000);
extern "C" NAKED register_t __cdecl internal_6f56000()
{
    __asm
    {
        push esi
        push 1
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b4c0
        add esp, 8
        test eax, eax
        je public_6f56027
        push esi
        call public_6f4b540
        add esp, 4
        call public_6f57f16
        jmp public_6f5602c
        public_6f56027 : nop
        mov eax, 1
        public_6f5602c : nop
        push eax
        call dword ptr ds : [public_6f5a098]
        pop esi
        UNREACHABLE_TRAP(0x6f56000)
    }
}

#undef public_6f56027
#undef public_6f5602c
