#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

#define public_53e586 _public_53e586

PROC_DECLARE(0x53e550, internal_53e550, public_53e550);
extern "C" NAKED register_t __cdecl internal_53e550()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0x803
        mov esi, ecx
        call public_539bc0
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53e586
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x803
        cmp eax, 0x803
        jne public_53e586
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        public_53e586 : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53e550)
    }
}

#undef public_53e586
