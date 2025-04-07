#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b3743b _public_6b3743b

PROC_DECLARE(0x6b373f0, internal_6b373f0, public_6b373f0);
extern "C" NAKED register_t __cdecl internal_6b373f0()
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
        jne public_6b3743b
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 0x40
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], eax
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx+0x30], dl
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b3743b : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b373f0)
    }
}

#undef public_6b3743b
