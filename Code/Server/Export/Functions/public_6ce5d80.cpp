#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce5da5 _public_6ce5da5
#define public_6ce5dae _public_6ce5dae

PROC_DECLARE(0x6ce5d80, internal_6ce5d80, public_6ce5d80);
extern "C" NAKED register_t __cdecl internal_6ce5d80()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_6ce5dae
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ce5dae
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6ce5da5
        cmp cl, 0xFF
        je public_6ce5da5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ce5dae
        public_6ce5da5 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce5dae : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce5d80)
    }
}

#undef public_6ce5da5
#undef public_6ce5dae
