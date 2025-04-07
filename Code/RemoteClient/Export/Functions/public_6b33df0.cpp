#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b33e27 _public_6b33e27

PROC_DECLARE(0x6b33df0, internal_6b33df0, public_6b33df0);
extern "C" NAKED register_t __cdecl internal_6b33df0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 2
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b33e27
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x20], dl
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b33e27 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b33df0)
    }
}

#undef public_6b33e27
