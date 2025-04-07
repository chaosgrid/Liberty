#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b373e0 _public_6b373e0

PROC_DECLARE(0x6b373a0, internal_6b373a0, public_6b373a0);
extern "C" NAKED register_t __cdecl internal_6b373a0()
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
        call public_6b3b480
        test eax, eax
        jne public_6b373e0
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b373e0 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b373a0)
    }
}

#undef public_6b373e0
