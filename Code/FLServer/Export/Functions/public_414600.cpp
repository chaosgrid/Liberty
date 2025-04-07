#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414600);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_41461d _public_41461d
#define public_414629 _public_414629

PROC_DECLARE(0x414600, internal_414600, public_414600);
extern "C" NAKED register_t __cdecl internal_414600()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_414629
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_41461d
        cmp cl, 0xFF
        je public_41461d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_414629
        public_41461d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_414629 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x414600)
    }
}

#undef public_41461d
#undef public_414629
