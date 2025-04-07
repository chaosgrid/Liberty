#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd710a _public_6bd710a

PROC_DECLARE(0x6bd70d0, internal_6bd70d0, public_6bd70d0);
extern "C" NAKED register_t __cdecl internal_6bd70d0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 6
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd710a
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        lea ecx, ds:[edx+0x20]
        call dword ptr ds : [public_6c0b0d8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6bd710a : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd70d0)
    }
}

#undef public_6bd710a
