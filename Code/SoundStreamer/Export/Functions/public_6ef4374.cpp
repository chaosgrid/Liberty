#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4374);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4410);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5310);

#define public_6ef43a2 _public_6ef43a2

PROC_DECLARE(0x6ef4374, internal_6ef4374, public_6ef4374);
extern "C" NAKED register_t __cdecl internal_6ef4374()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push 1
        mov esi, ecx
        push edi
        call public_6ef4410
        test al, al
        je public_6ef43a2
        push edi
        push dword ptr ss : [esp+0x10]
        push dword ptr ds : [esi+4]
        call public_6ef5310
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        mov dword ptr ds : [esi+8], edi
        and byte ptr ds : [eax+edi], 0
        public_6ef43a2 : nop
        mov eax, esi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ef4374)
    }
}

#undef public_6ef43a2
