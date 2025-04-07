#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8e3fe _public_6d8e3fe

PROC_DECLARE(0x6d8e3c0, internal_6d8e3c0, public_6d8e3c0);
extern "C" NAKED register_t __cdecl internal_6d8e3c0()
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
        jne public_6d8e3fe
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8e3fe : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8e3c0)
    }
}

#undef public_6d8e3fe
