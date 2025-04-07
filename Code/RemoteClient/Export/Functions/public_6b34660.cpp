#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b3e690);

#define public_6b346a3 _public_6b346a3

PROC_DECLARE(0x6b34660, internal_6b34660, public_6b34660);
extern "C" NAKED register_t __cdecl internal_6b34660()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 5
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b346a3
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x20], edx
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6b3e690
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b346a3 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b34660)
    }
}

#undef public_6b346a3
