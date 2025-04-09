#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c8090);
CLANG_FORWARD_PROC_SYMBOL(public_51daa0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_51daee _public_51daee

PROC_DECLARE(0x51daa0, internal_51daa0, public_51daa0);
extern "C" NAKED register_t __cdecl internal_51daa0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        je public_51daee
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51daee
        push 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51daee
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51daee
        push esi
        call public_422950
        call public_42d680
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        push eax
        push esi
        call public_4c8090
        add esp, 0xC
        public_51daee : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x51daa0)
    }
}

#undef public_51daee
