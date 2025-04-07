#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f710);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8cf86 _public_6d8cf86

PROC_DECLARE(0x6d8cf50, internal_6d8cf50, public_6d8cf50);
extern "C" NAKED register_t __cdecl internal_6d8cf50()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x36
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8cf86
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        call public_6d8f710
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8cf86 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8cf50)
    }
}

#undef public_6d8cf86
