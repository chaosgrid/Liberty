#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad1281);

#define public_6ad12a2 _public_6ad12a2

PROC_DECLARE(0x6ad1281, internal_6ad1281, public_6ad1281);
extern "C" NAKED register_t __cdecl internal_6ad1281()
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
        jl public_6ad12a2
        mov esi, dword ptr ds : [edx+esi]
        mov ecx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi+ecx]
        add ecx, edx
        add eax, ecx
        public_6ad12a2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad1281)
    }
}

#undef public_6ad12a2
