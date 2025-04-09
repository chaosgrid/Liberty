#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bc30);
CLANG_FORWARD_PROC_SYMBOL(public_54bc40);
CLANG_FORWARD_PROC_SYMBOL(public_54bc50);

#define public_5134e7 _public_5134e7
#define public_5134ec _public_5134ec

PROC_DECLARE(0x5134c0, internal_5134c0, public_5134c0);
extern "C" NAKED register_t __cdecl internal_5134c0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_54bc30
        mov edi, dword ptr ss : [esp+0x10]
        cmp eax, edi
        je public_5134e7
        call public_54bc40
        cmp eax, edi
        je public_5134e7
        call public_54bc50
        cmp eax, edi
        je public_5134e7
        xor edx, edx
        jmp public_5134ec
        public_5134e7 : nop
        mov edx, 1
        public_5134ec : nop
        mov cl, byte ptr ds : [esi+0x7C]
        mov al, cl
        xor al, dl
        and al, 1
        xor al, cl
        mov byte ptr ds : [esi+0x7C], al
        pop edi
        and al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5134c0)
    }
}

#undef public_5134e7
#undef public_5134ec
