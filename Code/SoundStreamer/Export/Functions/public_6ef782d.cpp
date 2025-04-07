#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef77f8);
CLANG_FORWARD_PROC_SYMBOL(public_6ef782d);

#define public_6ef783e _public_6ef783e
#define public_6ef785b _public_6ef785b

PROC_DECLARE(0x6ef782d, internal_6ef782d, public_6ef782d);
extern "C" NAKED register_t __cdecl internal_6ef782d()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, edi
        dec edi
        test eax, eax
        jle public_6ef785b
        mov esi, dword ptr ss : [esp+0x18]
        public_6ef783e : nop
        push esi
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x14]
        call public_6ef77f8
        add esp, 0xC
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_6ef785b
        mov eax, edi
        dec edi
        test eax, eax
        jg public_6ef783e
        public_6ef785b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef782d)
    }
}

#undef public_6ef783e
#undef public_6ef785b
