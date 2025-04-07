#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd7c8e _public_6bd7c8e

PROC_DECLARE(0x6bd7c50, internal_6bd7c50, public_6bd7c50);
extern "C" NAKED register_t __cdecl internal_6bd7c50()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x3E
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7c8e
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x24], ecx
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd7c8e : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd7c50)
    }
}

#undef public_6bd7c8e
