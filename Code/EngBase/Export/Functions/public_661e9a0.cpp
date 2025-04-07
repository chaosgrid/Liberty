#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d750);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661e9b0 _public_661e9b0
#define public_661e9d0 _public_661e9d0

PROC_DECLARE(0x661e9a0, internal_661e9a0, public_661e9a0);
extern "C" NAKED register_t __cdecl internal_661e9a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jbe public_661e9b0
        dec eax
        mov dword ptr ds : [esi+0x1C], eax
        public_661e9b0 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_661e9d0
        mov ecx, esi
        mov dword ptr ds : [esi+0x1C], 1
        call public_661d750
        push esi
        call public_66281d0
        add esp, 4
        xor eax, eax
        public_661e9d0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x661e9a0)
    }
}

#undef public_661e9b0
#undef public_661e9d0
