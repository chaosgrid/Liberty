#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b0f0);

#define public_6f6b111 _public_6f6b111
#define public_6f6b12b _public_6f6b12b

PROC_DECLARE(0x6f6b0f0, internal_6f6b0f0, public_6f6b0f0);
extern "C" NAKED register_t __cdecl internal_6f6b0f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx-4]
        push ebx
        mov ebx, dword ptr ds : [ecx+0x14C]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx-4]
        push edi
        mov edi, dword ptr ds : [esi+0x14C]
        cmp edi, ebx
        jge public_6f6b12b
        public_6f6b111 : nop
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax-4]
        mov edi, dword ptr ds : [esi+0x14C]
        mov ebx, dword ptr ds : [ecx+0x14C]
        mov edx, eax
        sub eax, 4
        cmp edi, ebx
        jl public_6f6b111
        public_6f6b12b : nop
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6b0f0)
    }
}

#undef public_6f6b111
#undef public_6f6b12b
