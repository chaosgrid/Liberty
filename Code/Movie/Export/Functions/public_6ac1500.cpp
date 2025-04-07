#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);

#define public_6ac1525 _public_6ac1525
#define public_6ac152e _public_6ac152e

PROC_DECLARE(0x6ac1500, internal_6ac1500, public_6ac1500);
extern "C" NAKED register_t __cdecl internal_6ac1500()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        test al, al
        mov esi, ecx
        je public_6ac152e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ac152e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6ac1525
        cmp cl, 0xFF
        je public_6ac1525
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ac152e
        public_6ac1525 : nop
        push eax
        call public_6acf3d0
        add esp, 4
        public_6ac152e : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac1500)
    }
}

#undef public_6ac1525
#undef public_6ac152e
