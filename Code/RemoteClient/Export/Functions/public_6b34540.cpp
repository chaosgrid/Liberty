#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b34575 _public_6b34575

PROC_DECLARE(0x6b34540, internal_6b34540, public_6b34540);
extern "C" NAKED register_t __cdecl internal_6b34540()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x5A
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b34575
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0x20], dl
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b34575 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b34540)
    }
}

#undef public_6b34575
