#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dde70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4dde8d _public_4dde8d
#define public_4dde96 _public_4dde96

PROC_DECLARE(0x4dde70, internal_4dde70, public_4dde70);
extern "C" NAKED register_t __cdecl internal_4dde70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_4dde96
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4dde8d
        cmp cl, 0xFF
        je public_4dde8d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4dde96
        public_4dde8d : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4dde96 : nop
        mov dword ptr ds : [esi+0x14], 0
        mov dword ptr ds : [esi+0x18], 0
        mov dword ptr ds : [esi+0x1C], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4dde70)
    }
}

#undef public_4dde8d
#undef public_4dde96
