#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd8b29 _public_6bd8b29

PROC_DECLARE(0x6bd8ae0, internal_6bd8ae0, public_6bd8ae0);
extern "C" NAKED register_t __cdecl internal_6bd8ae0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x10
        push 1
        call public_6be1750
        test eax, eax
        jne public_6bd8b29
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd8b29 : nop
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6bd8ae0)
    }
}

#undef public_6bd8b29
