#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd8f82 _public_6bd8f82

PROC_DECLARE(0x6bd8f40, internal_6bd8f40, public_6bd8f40);
extern "C" NAKED register_t __cdecl internal_6bd8f40()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x2B
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd8f82
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x20], edx
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x24], edx
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd8f82 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd8f40)
    }
}

#undef public_6bd8f82
