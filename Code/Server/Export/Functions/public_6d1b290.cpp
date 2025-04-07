#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b290);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b3a0);

#define public_6d1b2ab _public_6d1b2ab
#define public_6d1b2b2 _public_6d1b2b2

PROC_DECLARE(0x6d1b290, internal_6d1b290, public_6d1b290);
extern "C" NAKED register_t __cdecl internal_6d1b290()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_6d1b2ab
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 5
        cmp eax, edi
        ja public_6d1b2b2
        public_6d1b2ab : nop
        mov ecx, esi
        call public_6d1b3a0
        public_6d1b2b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edi
        shl eax, 5
        pop edi
        add eax, ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1b290)
    }
}

#undef public_6d1b2ab
#undef public_6d1b2b2
