#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);
CLANG_FORWARD_PROC_SYMBOL(public_6ef514a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8da0);

#define public_6ef5179 _public_6ef5179

PROC_DECLARE(0x6ef514a, internal_6ef514a, public_6ef514a);
extern "C" NAKED register_t __cdecl internal_6ef514a()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6efc2d0
        push dword ptr ds : [edi]
        call public_6ef5230
        inc eax
        push eax
        call public_6ef4a65
        pop ecx
        mov dword ptr ds : [esi+4], eax
        test eax, eax
        pop ecx
        je public_6ef5179
        push dword ptr ds : [edi]
        push eax
        call public_6ef8da0
        pop ecx
        pop ecx
        public_6ef5179 : nop
        mov dword ptr ds : [esi+8], 1
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef514a)
    }
}

#undef public_6ef5179
