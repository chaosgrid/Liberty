#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b377c5 _public_6b377c5

PROC_DECLARE(0x6b37770, internal_6b37770, public_6b37770);
extern "C" NAKED register_t __cdecl internal_6b37770()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0xF
        push 1
        call public_6b3b480
        test eax, eax
        jne public_6b377c5
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
        mov al, byte ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2C], al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b377c5 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b37770)
    }
}

#undef public_6b377c5
