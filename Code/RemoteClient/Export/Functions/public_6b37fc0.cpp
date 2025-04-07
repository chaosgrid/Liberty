#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b466f0);

#define public_6b38013 _public_6b38013

PROC_DECLARE(0x6b37fc0, internal_6b37fc0, public_6b37fc0);
extern "C" NAKED register_t __cdecl internal_6b37fc0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x52
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b38013
        mov ecx, dword ptr ss : [esp+4]
        mov al, byte ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+0x2C], al
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push edx
        call public_6b466f0
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b38013 : nop
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6b37fc0)
    }
}

#undef public_6b38013
