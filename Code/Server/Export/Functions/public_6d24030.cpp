#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d24030);

#define public_6d24040 _public_6d24040

PROC_DECLARE(0x6d24030, internal_6d24030, public_6d24030);
extern "C" NAKED register_t __cdecl internal_6d24030()
{
    __asm
    {
        push esi
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        xor edx, edx
        push edi
        lea ebx, ds:[ebx]
        public_6d24040 : nop
        mov esi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [esi+edx]
        mov edi, dword ptr ds : [edx+eax]
        not esi
        or edi, esi
        mov dword ptr ds : [edx+eax], edi
        add edx, 4
        cmp edx, 0x20
        jl public_6d24040
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d24030)
    }
}

#undef public_6d24040
