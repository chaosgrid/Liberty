#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8e63);

#define public_65d8e84 _public_65d8e84

PROC_DECLARE(0x65d8e63, internal_65d8e63, public_65d8e63);
extern "C" NAKED register_t __cdecl internal_65d8e63()
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
        jl public_65d8e84
        mov esi, dword ptr ds : [edx+esi]
        mov ecx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi+ecx]
        add ecx, edx
        add eax, ecx
        public_65d8e84 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d8e63)
    }
}

#undef public_65d8e84
