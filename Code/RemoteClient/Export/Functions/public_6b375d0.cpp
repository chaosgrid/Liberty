#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b37610 _public_6b37610

PROC_DECLARE(0x6b375d0, internal_6b375d0, public_6b375d0);
extern "C" NAKED register_t __cdecl internal_6b375d0()
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
        jne public_6b37610
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 0x20
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b37610 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b375d0)
    }
}

#undef public_6b37610
