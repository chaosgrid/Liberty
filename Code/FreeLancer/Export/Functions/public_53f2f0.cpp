#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

#define public_53f31e _public_53f31e

PROC_DECLARE(0x53f2f0, internal_53f2f0, public_53f2f0);
extern "C" NAKED register_t __cdecl internal_53f2f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0x67
        mov esi, ecx
        call public_539bc0
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53f31e
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x67
        cmp al, 0x67
        jne public_53f31e
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        public_53f31e : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53f2f0)
    }
}

#undef public_53f31e
