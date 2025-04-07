#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8098);

#define public_6ef80b9 _public_6ef80b9

PROC_DECLARE(0x6ef8098, internal_6ef8098, public_6ef8098);
extern "C" NAKED register_t __cdecl internal_6ef8098()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+4]
        add eax, esi
        test edx, edx
        jl public_6ef80b9
        mov esi, dword ptr ds : [edx+esi]
        mov ecx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi+ecx]
        add ecx, edx
        add eax, ecx
        public_6ef80b9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef8098)
    }
}

#undef public_6ef80b9
