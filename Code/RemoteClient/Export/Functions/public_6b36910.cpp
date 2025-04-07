#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b36949 _public_6b36949

PROC_DECLARE(0x6b36910, internal_6b36910, public_6b36910);
extern "C" NAKED register_t __cdecl internal_6b36910()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x43
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36949
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b36949 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b36910)
    }
}

#undef public_6b36949
