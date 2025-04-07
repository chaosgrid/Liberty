#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b466f0);

#define public_6b38064 _public_6b38064

PROC_DECLARE(0x6b38020, internal_6b38020, public_6b38020);
extern "C" NAKED register_t __cdecl internal_6b38020()
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
        jne public_6b38064
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov dword ptr ds : [ecx+0x20], 2
        mov ecx, dword ptr ss : [esp+8]
        push eax
        call public_6b466f0
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b38064 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b38020)
    }
}

#undef public_6b38064
