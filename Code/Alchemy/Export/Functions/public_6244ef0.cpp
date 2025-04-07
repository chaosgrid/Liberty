#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244ef0);

#define public_6244f27 _public_6244f27

PROC_DECLARE(0x6244ef0, internal_6244ef0, public_6244ef0);
extern "C" NAKED register_t __cdecl internal_6244ef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_6244f27
        mov ecx, dword ptr ds : [public_6257bbc]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push ecx
        call dword ptr ds : [edx+0x94]
        mov eax, dword ptr ds : [public_6257bbc]
        lea edx, ds:[esi+8]
        push edx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push edx
        push eax
        call dword ptr ds : [ecx+0x70]
        pop edi
        public_6244f27 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6244ef0)
    }
}

#undef public_6244f27
