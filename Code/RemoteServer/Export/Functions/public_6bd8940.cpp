#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd897e _public_6bd897e

PROC_DECLARE(0x6bd8940, internal_6bd8940, public_6bd8940);
extern "C" NAKED register_t __cdecl internal_6bd8940()
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
        call public_6be1750
        test eax, eax
        jne public_6bd897e
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 0x20
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd897e : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd8940)
    }
}

#undef public_6bd897e
