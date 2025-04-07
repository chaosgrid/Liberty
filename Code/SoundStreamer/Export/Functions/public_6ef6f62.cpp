#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f62);

#define public_6ef6f85 _public_6ef6f85

PROC_DECLARE(0x6ef6f62, internal_6ef6f62, public_6ef6f62);
extern "C" NAKED register_t __cdecl internal_6ef6f62()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        je public_6ef6f85
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6ef5230
        inc eax
        push eax
        push esi
        add esi, edi
        push esi
        call public_6ef46e0
        add esp, 0x10
        pop esi
        public_6ef6f85 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ef6f62)
    }
}

#undef public_6ef6f85
