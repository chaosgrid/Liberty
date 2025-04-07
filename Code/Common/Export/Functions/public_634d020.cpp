#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d020);

#define public_634d035 _public_634d035
#define public_634d04a _public_634d04a

PROC_DECLARE(0x634d020, internal_634d020, public_634d020);
extern "C" NAKED register_t __cdecl internal_634d020()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov si, word ptr ds : [edi+0xD2]
        mov dword ptr ss : [esp+8], edi
        dec esi
        js public_634d04a
        public_634d035 : nop
        mov eax, dword ptr ds : [edi+0xD4]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx]
        dec esi
        jns public_634d035
        public_634d04a : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x634d020)
    }
}

#undef public_634d035
#undef public_634d04a
