#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce3b45 _public_6ce3b45
#define public_6ce3b51 _public_6ce3b51

PROC_DECLARE(0x6ce3b20, internal_6ce3b20, public_6ce3b20);
extern "C" NAKED register_t __cdecl internal_6ce3b20()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_6ce3b51
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ce3b51
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce3b45
        cmp cl, 0xFF
        je public_6ce3b45
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6ce3b51
        public_6ce3b45 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce3b51 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce3b20)
    }
}

#undef public_6ce3b45
#undef public_6ce3b51
