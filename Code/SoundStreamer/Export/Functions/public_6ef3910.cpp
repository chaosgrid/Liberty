#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3910);

#define public_6ef3925 _public_6ef3925

PROC_DECLARE(0x6ef3910, internal_6ef3910, public_6ef3910);
extern "C" NAKED register_t __cdecl internal_6ef3910()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ef3925
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ef3925 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef3910)
    }
}

#undef public_6ef3925
