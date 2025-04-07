#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b35e75 _public_6b35e75

PROC_DECLARE(0x6b35e20, internal_6b35e20, public_6b35e20);
extern "C" NAKED register_t __cdecl internal_6b35e20()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x31
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b35e75
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x2C], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b35e75 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b35e20)
    }
}

#undef public_6b35e75
