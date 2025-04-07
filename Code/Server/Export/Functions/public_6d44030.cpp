#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43600);

#define public_6d44071 _public_6d44071

PROC_DECLARE(0x6d44030, internal_6d44030, public_6d44030);
extern "C" NAKED register_t __cdecl internal_6d44030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        push eax
        mov edi, 0xFFFFFFFE
        call public_6d43600
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6d44071
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], ecx
        call dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        pop edi
        xor eax, eax
        fmul dword ptr ds : [public_6d656b8]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0xC]
        pop esi
        ret 
        public_6d44071 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d44030)
    }
}

#undef public_6d44071
