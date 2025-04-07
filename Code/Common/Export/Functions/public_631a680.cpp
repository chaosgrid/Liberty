#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631a680);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631a69d _public_631a69d
#define public_631a6a6 _public_631a6a6
#define public_631a6cb _public_631a6cb

PROC_DECLARE(0x631a680, internal_631a680, public_631a680);
extern "C" NAKED register_t __cdecl internal_631a680()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_631a6a6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_631a69d
        cmp cl, 0xFF
        je public_631a69d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_631a6a6
        public_631a69d : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_631a6a6 : nop
        test byte ptr ss : [esp+8], 1
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        je public_631a6cb
        push esi
        call public_6391d5a
        add esp, 4
        public_631a6cb : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x631a680)
    }
}

#undef public_631a69d
#undef public_631a6a6
#undef public_631a6cb
