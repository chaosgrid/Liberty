#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5470);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d5493 _public_65d5493
#define public_65d549c _public_65d549c

PROC_DECLARE(0x65d5470, internal_65d5470, public_65d5470);
extern "C" NAKED register_t __cdecl internal_65d5470()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_65e142c
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_65d549c
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_65d5493
        cmp cl, 0xFF
        je public_65d5493
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d549c
        public_65d5493 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d549c : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d5470)
    }
}

#undef public_65d5493
#undef public_65d549c
