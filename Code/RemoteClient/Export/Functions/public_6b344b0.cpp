#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b344e5 _public_6b344e5

PROC_DECLARE(0x6b344b0, internal_6b344b0, public_6b344b0);
extern "C" NAKED register_t __cdecl internal_6b344b0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x10
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b344e5
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b344e5 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b344b0)
    }
}

#undef public_6b344e5
