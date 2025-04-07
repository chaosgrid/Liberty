#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b36750 _public_6b36750

PROC_DECLARE(0x6b36700, internal_6b36700, public_6b36700);
extern "C" NAKED register_t __cdecl internal_6b36700()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x33
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36750
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        movzx ecx, byte ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ax, word ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x28], ax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b36750 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b36700)
    }
}

#undef public_6b36750
