#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b3d490);

#define public_6b3436d _public_6b3436d

PROC_DECLARE(0x6b34330, internal_6b34330, public_6b34330);
extern "C" NAKED register_t __cdecl internal_6b34330()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x1F
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b3436d
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push edx
        call public_6b3d490
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b3436d : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b34330)
    }
}

#undef public_6b3436d
