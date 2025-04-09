#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4582b0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4475a3 _public_4475a3

PROC_DECLARE(0x447570, internal_447570, public_447570);
extern "C" NAKED register_t __cdecl internal_447570()
{
    __asm
    {
        push esi
        push 0x1B
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4475a3
        push 0x1D
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4475a3
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_4475a3
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea ecx, ds:[esi+0x74]
        call public_4582b0
        public_4475a3 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x447570)
    }
}

#undef public_4475a3
