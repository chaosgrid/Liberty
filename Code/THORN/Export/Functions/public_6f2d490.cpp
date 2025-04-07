#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d490);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2d4ad _public_6f2d4ad
#define public_6f2d4b6 _public_6f2d4b6

PROC_DECLARE(0x6f2d490, internal_6f2d490, public_6f2d490);
extern "C" NAKED register_t __cdecl internal_6f2d490()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f2d4b6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f2d4ad
        cmp cl, 0xFF
        je public_6f2d4ad
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f2d4b6
        public_6f2d4ad : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f2d4b6 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2d490)
    }
}

#undef public_6f2d4ad
#undef public_6f2d4b6
