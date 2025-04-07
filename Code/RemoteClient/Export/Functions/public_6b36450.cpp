#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b3649b _public_6b3649b

PROC_DECLARE(0x6b36450, internal_6b36450, public_6b36450);
extern "C" NAKED register_t __cdecl internal_6b36450()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0xB
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b3649b
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x24], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b3649b : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b36450)
    }
}

#undef public_6b3649b
