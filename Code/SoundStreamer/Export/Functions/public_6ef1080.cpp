#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1040);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1080);

#define public_6ef109a _public_6ef109a

PROC_DECLARE(0x6ef1080, internal_6ef1080, public_6ef1080);
extern "C" NAKED register_t __cdecl internal_6ef1080()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ef1040
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edx, eax
        cmp ecx, edx
        jb public_6ef109a
        sub ecx, edx
        mov eax, ecx
        pop esi
        ret 
        public_6ef109a : nop
        mov eax, dword ptr ds : [esi+0xBC]
        sub eax, edx
        add eax, ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef1080)
    }
}

#undef public_6ef109a
