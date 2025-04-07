#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd89ce _public_6bd89ce

PROC_DECLARE(0x6bd8990, internal_6bd8990, public_6bd8990);
extern "C" NAKED register_t __cdecl internal_6bd8990()
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
        jne public_6bd89ce
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], 0x80
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd89ce : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bd8990)
    }
}

#undef public_6bd89ce
