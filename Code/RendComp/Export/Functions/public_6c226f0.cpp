#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25140);
CLANG_FORWARD_PROC_SYMBOL(public_6c26630);

#define public_6c22707 _public_6c22707
#define public_6c22735 _public_6c22735

PROC_DECLARE(0x6c226f0, internal_6c226f0, public_6c226f0);
extern "C" NAKED register_t __cdecl internal_6c226f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_6c22707
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c22707 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x4C]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x1E8], eax
        cmp dword ptr ds : [esi+0x218], 2
        jne public_6c22735
        push 0
        mov ecx, esi
        call public_6c26630
        mov ecx, esi
        call public_6c25140
        public_6c22735 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c226f0)
    }
}

#undef public_6c22707
#undef public_6c22735
