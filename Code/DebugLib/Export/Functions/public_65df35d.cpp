#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd798);
CLANG_FORWARD_PROC_SYMBOL(public_65dd7ea);
CLANG_FORWARD_PROC_SYMBOL(public_65df35d);
CLANG_FORWARD_PROC_SYMBOL(public_65df38e);

#define public_65df372 _public_65df372
#define public_65df389 _public_65df389

PROC_DECLARE(0x65df35d, internal_65df35d, public_65df35d);
extern "C" NAKED register_t __cdecl internal_65df35d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        or edi, 0xFFFFFFFF
        test byte ptr ds : [esi+0xC], 0x40
        je public_65df372
        and dword ptr ds : [esi+0xC], 0
        jmp public_65df389
        public_65df372 : nop
        push esi
        call public_65dd798
        push esi
        call public_65df38e
        push esi
        mov edi, eax
        call public_65dd7ea
        add esp, 0xC
        public_65df389 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65df35d)
    }
}

#undef public_65df372
#undef public_65df389
