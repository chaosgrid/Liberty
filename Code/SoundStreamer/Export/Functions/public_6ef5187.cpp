#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5187);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8da0);

#define public_6ef51c4 _public_6ef51c4
#define public_6ef51ca _public_6ef51ca

PROC_DECLARE(0x6ef5187, internal_6ef5187, public_6ef5187);
extern "C" NAKED register_t __cdecl internal_6ef5187()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6efc2d0
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_6ef51c4
        push dword ptr ds : [edi+4]
        call public_6ef5230
        inc eax
        push eax
        call public_6ef4a65
        pop ecx
        mov dword ptr ds : [esi+4], eax
        test eax, eax
        pop ecx
        je public_6ef51ca
        push dword ptr ds : [edi+4]
        push eax
        call public_6ef8da0
        pop ecx
        pop ecx
        jmp public_6ef51ca
        public_6ef51c4 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        public_6ef51ca : nop
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef5187)
    }
}

#undef public_6ef51c4
#undef public_6ef51ca
