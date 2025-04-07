#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef96f9);

#define public_6ef9707 _public_6ef9707

PROC_DECLARE(0x6ef96f9, internal_6ef96f9, public_6ef96f9);
extern "C" NAKED register_t __cdecl internal_6ef96f9()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push 3
        sub ecx, eax
        pop edx
        public_6ef9707 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], esi
        add eax, 4
        dec edx
        jne public_6ef9707
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef96f9)
    }
}

#undef public_6ef9707
