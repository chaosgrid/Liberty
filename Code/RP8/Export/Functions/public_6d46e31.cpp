#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d46d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d46e31);
CLANG_FORWARD_PROC_SYMBOL(public_6d49931);

#define public_6d46e3a _public_6d46e3a

PROC_DECLARE(0x6d46e31, internal_6d46e31, public_6d46e31);
extern "C" NAKED register_t __cdecl internal_6d46e31()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        xor edi, edi
        inc edi
        public_6d46e3a : nop
        push edi
        push esi
        call public_6d46d50
        dec edi
        pop ecx
        pop ecx
        jns public_6d46e3a
        push 0x50
        push dword ptr ds : [esi+4]
        push esi
        call public_6d49931
        and dword ptr ds : [esi+4], 0
        push esi
        call public_6d317dd
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d46e31)
    }
}

#undef public_6d46e3a
