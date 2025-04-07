#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1d70);

#define public_6ef1d91 _public_6ef1d91
#define public_6ef1d97 _public_6ef1d97

PROC_DECLARE(0x6ef1d70, internal_6ef1d70, public_6ef1d70);
extern "C" NAKED register_t __cdecl internal_6ef1d70()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        je public_6ef1d91
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        mov eax, dword ptr ss : [esp+4]
        jge public_6ef1d97
        public_6ef1d91 : nop
        mov eax, dword ptr ds : [esi+0x88]
        public_6ef1d97 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef1d70)
    }
}

#undef public_6ef1d91
#undef public_6ef1d97
