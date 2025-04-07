#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f710);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d88498 _public_6d88498

PROC_DECLARE(0x6d88460, internal_6d88460, public_6d88460);
extern "C" NAKED register_t __cdecl internal_6d88460()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x48
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d88498
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        call public_6d8f710
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d88498 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d88460)
    }
}

#undef public_6d88498
