#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);

#define public_53248a _public_53248a

PROC_DECLARE(0x532460, internal_532460, public_532460);
extern "C" NAKED register_t __cdecl internal_532460()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xA
        push esi
        mov esi, ecx
        jne public_53248a
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x10]
        push eax
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_5c6938]
        mov dword ptr ds : [esi+4], 0
        public_53248a : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x532460)
    }
}

#undef public_53248a
