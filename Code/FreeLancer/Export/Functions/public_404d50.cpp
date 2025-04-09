#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404d50);

#define public_404d65 _public_404d65
#define public_404d6b _public_404d6b
#define public_404d7d _public_404d7d

PROC_DECLARE(0x404d50, internal_404d50, public_404d50);
extern "C" NAKED register_t __cdecl internal_404d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jne public_404d65
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], eax
        jmp public_404d6b
        public_404d65 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        public_404d6b : nop
        test edx, edx
        jne public_404d7d
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], edx
        inc dword ptr ds : [ecx+8]
        pop esi
        ret 8
        public_404d7d : nop
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], edx
        inc dword ptr ds : [ecx+8]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x404d50)
    }
}

#undef public_404d65
#undef public_404d6b
#undef public_404d7d
