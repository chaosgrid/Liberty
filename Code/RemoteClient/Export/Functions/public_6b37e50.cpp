#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b45840);
CLANG_FORWARD_PROC_SYMBOL(public_6b45860);

#define public_6b37e96 _public_6b37e96

PROC_DECLARE(0x6b37e50, internal_6b37e50, public_6b37e50);
extern "C" NAKED register_t __cdecl internal_6b37e50()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x54
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b37e96
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        call public_6b45840
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+4]
        push edx
        call public_6b45860
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b37e96 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b37e50)
    }
}

#undef public_6b37e96
