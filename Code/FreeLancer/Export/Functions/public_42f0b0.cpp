#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42f0b0);
CLANG_FORWARD_PROC_SYMBOL(public_4304b0);

#define public_42f0c3 _public_42f0c3
#define public_42f0df _public_42f0df

PROC_DECLARE(0x42f0b0, internal_42f0b0, public_42f0b0);
extern "C" NAKED register_t __cdecl internal_42f0b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_42f0df
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_42f0c3 : nop
        push esi
        push edi
        call public_4304b0
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_42f0c3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_42f0df : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x42f0b0)
    }
}

#undef public_42f0c3
#undef public_42f0df
