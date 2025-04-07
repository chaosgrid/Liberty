#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd78fe _public_6bd78fe

PROC_DECLARE(0x6bd78c0, internal_6bd78c0, public_6bd78c0);
extern "C" NAKED register_t __cdecl internal_6bd78c0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 9
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd78fe
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+0x24], cl
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd78fe : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd78c0)
    }
}

#undef public_6bd78fe
