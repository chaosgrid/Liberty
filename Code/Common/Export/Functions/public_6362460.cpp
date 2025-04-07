#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d3e0);

#define public_6362481 _public_6362481

PROC_DECLARE(0x6362460, internal_6362460, public_6362460);
extern "C" NAKED register_t __cdecl internal_6362460()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [0], 0
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [esi]
        jl public_6362481
        mov ecx, esi
        call public_635d3e0
        public_6362481 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+ecx*4], edi
        mov eax, dword ptr ds : [esi+4]
        inc eax
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6362460)
    }
}

#undef public_6362481
