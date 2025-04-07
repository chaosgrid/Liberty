#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f02b35 _public_6f02b35
#define public_6f02b3e _public_6f02b3e

PROC_DECLARE(0x6f02b10, internal_6f02b10, public_6f02b10);
extern "C" NAKED register_t __cdecl internal_6f02b10()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_6f02b3e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f02b3e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f02b35
        cmp cl, 0xFF
        je public_6f02b35
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f02b3e
        public_6f02b35 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f02b3e : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f02b10)
    }
}

#undef public_6f02b35
#undef public_6f02b3e
