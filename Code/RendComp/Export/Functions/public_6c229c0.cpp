#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26610);
CLANG_FORWARD_PROC_SYMBOL(public_6c28f50);

#define public_6c229d7 _public_6c229d7
#define public_6c229f0 _public_6c229f0

PROC_DECLARE(0x6c229c0, internal_6c229c0, public_6c229c0);
extern "C" NAKED register_t __cdecl internal_6c229c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_6c229d7
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_6c229d7 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [eax]
        call public_6c28f50
        test al, al
        jne public_6c229f0
        mov eax, 0xFFFFFFF8
        pop esi
        ret 8
        public_6c229f0 : nop
        mov ecx, esi
        call public_6c26610
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c229c0)
    }
}

#undef public_6c229d7
#undef public_6c229f0
