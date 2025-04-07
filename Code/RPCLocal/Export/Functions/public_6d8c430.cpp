#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d98b20);

#define public_6d8c468 _public_6d8c468

PROC_DECLARE(0x6d8c430, internal_6d8c430, public_6d8c430);
extern "C" NAKED register_t __cdecl internal_6d8c430()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x54
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8c468
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        call public_6d98b20
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8c468 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8c430)
    }
}

#undef public_6d8c468
