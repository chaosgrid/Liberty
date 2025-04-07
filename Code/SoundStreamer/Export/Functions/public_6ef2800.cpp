#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);

#define public_6ef2825 _public_6ef2825
#define public_6ef282e _public_6ef282e

PROC_DECLARE(0x6ef2800, internal_6ef2800, public_6ef2800);
extern "C" NAKED register_t __cdecl internal_6ef2800()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_6ef282e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ef282e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6ef2825
        cmp cl, 0xFF
        je public_6ef2825
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ef282e
        public_6ef2825 : nop
        push eax
        call public_6ef4507
        add esp, 4
        public_6ef282e : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef2800)
    }
}

#undef public_6ef2825
#undef public_6ef282e
