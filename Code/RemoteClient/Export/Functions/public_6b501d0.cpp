#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b501d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b501ed _public_6b501ed
#define public_6b501f6 _public_6b501f6

PROC_DECLARE(0x6b501d0, internal_6b501d0, public_6b501d0);
extern "C" NAKED register_t __cdecl internal_6b501d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6b501f6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6b501ed
        cmp cl, 0xFF
        je public_6b501ed
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6b501f6
        public_6b501ed : nop
        push eax
        call public_6b6a092
        add esp, 4
        public_6b501f6 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b501d0)
    }
}

#undef public_6b501ed
#undef public_6b501f6
