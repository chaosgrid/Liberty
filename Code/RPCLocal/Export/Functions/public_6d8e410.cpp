#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8e44e _public_6d8e44e

PROC_DECLARE(0x6d8e410, internal_6d8e410, public_6d8e410);
extern "C" NAKED register_t __cdecl internal_6d8e410()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x12
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8e44e
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 2
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8e44e : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8e410)
    }
}

#undef public_6d8e44e
