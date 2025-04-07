#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4374);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4495);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);

#define public_6ef44c2 _public_6ef44c2

PROC_DECLARE(0x6ef4495, internal_6ef4495, public_6ef4495);
extern "C" NAKED register_t __cdecl internal_6ef4495()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_6ef44c2
        mov al, byte ptr ds : [esi-1]
        test al, al
        je public_6ef44c2
        cmp al, 0xFF
        je public_6ef44c2
        push 1
        call public_6ef2800
        push esi
        call public_6ef5230
        pop ecx
        push eax
        push esi
        mov ecx, edi
        call public_6ef4374
        public_6ef44c2 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef4495)
    }
}

#undef public_6ef44c2
