#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

#define public_53e95e _public_53e95e

PROC_DECLARE(0x53e930, internal_53e930, public_53e930);
extern "C" NAKED register_t __cdecl internal_53e930()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0xF
        mov esi, ecx
        call public_539bc0
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53e95e
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0xF
        cmp al, 0xF
        jne public_53e95e
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        public_53e95e : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53e930)
    }
}

#undef public_53e95e
