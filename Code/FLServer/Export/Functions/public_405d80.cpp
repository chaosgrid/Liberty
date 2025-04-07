#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405d80);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_405da5 _public_405da5
#define public_405dae _public_405dae

PROC_DECLARE(0x405d80, internal_405d80, public_405d80);
extern "C" NAKED register_t __cdecl internal_405d80()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_405dae
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_405dae
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_405da5
        cmp cl, 0xFF
        je public_405da5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_405dae
        public_405da5 : nop
        push eax
        call public_418978
        add esp, 4
        public_405dae : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x405d80)
    }
}

#undef public_405da5
#undef public_405dae
