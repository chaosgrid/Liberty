#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e720);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ec70);

#define public_6c2e75a _public_6c2e75a
#define public_6c2e762 _public_6c2e762
#define public_6c2e76d _public_6c2e76d

PROC_DECLARE(0x6c2e720, internal_6c2e720, public_6c2e720);
extern "C" NAKED register_t __cdecl internal_6c2e720()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], ecx
        push edx
        mov ecx, offset public_6c37d28
        call public_6c2ec70
        mov edx, dword ptr ds : [public_6c37d2c]
        cmp eax, edx
        mov dword ptr ss : [esp], eax
        je public_6c2e75a
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6c2e75a
        lea eax, ss:[esp]
        jmp public_6c2e762
        public_6c2e75a : nop
        mov dword ptr ss : [esp+4], edx
        lea eax, ss:[esp+4]
        public_6c2e762 : nop
        mov ecx, dword ptr ds : [eax]
        xor eax, eax
        cmp ecx, edx
        je public_6c2e76d
        mov eax, dword ptr ds : [ecx+0x10]
        public_6c2e76d : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6c2e720)
    }
}

#undef public_6c2e75a
#undef public_6c2e762
#undef public_6c2e76d
