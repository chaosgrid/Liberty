#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1d10);

#define public_6ef345e _public_6ef345e

PROC_DECLARE(0x6ef3420, internal_6ef3420, public_6ef3420);
extern "C" NAKED register_t __cdecl internal_6ef3420()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6ef345e
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        je public_6ef345e
        mov ecx, edi
        call public_6ef1d10
        add esi, 0x20
        push esi
        call dword ptr ds : [public_6efc050]
        mov ecx, edi
        call public_6ef1b70
        push esi
        call dword ptr ds : [public_6efc04c]
        pop edi
        mov eax, 1
        pop esi
        ret 8
        public_6ef345e : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ef3420)
    }
}

#undef public_6ef345e
