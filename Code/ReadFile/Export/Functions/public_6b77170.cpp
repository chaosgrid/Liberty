#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b741b0);

#define public_6b77186 _public_6b77186
#define public_6b771ad _public_6b771ad

PROC_DECLARE(0x6b77170, internal_6b77170, public_6b77170);
extern "C" NAKED register_t __cdecl internal_6b77170()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x16C]
        test eax, eax
        jbe public_6b77186
        dec eax
        mov dword ptr ds : [esi+0x16C], eax
        public_6b77186 : nop
        mov eax, dword ptr ds : [esi+0x16C]
        test eax, eax
        jne public_6b771ad
        mov ecx, esi
        mov dword ptr ds : [esi+0x16C], 1
        call public_6b741b0
        push esi
        call dword ptr ds : [public_6b79070]
        add esp, 4
        xor eax, eax
        public_6b771ad : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b77170)
    }
}

#undef public_6b77186
#undef public_6b771ad
