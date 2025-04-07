#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8a84d _public_6d8a84d

PROC_DECLARE(0x6d8a800, internal_6d8a800, public_6d8a800);
extern "C" NAKED register_t __cdecl internal_6d8a800()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x4A
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8a84d
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+4]
        mov ax, word ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [edx+0x28], ax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8a84d : nop
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6d8a800)
    }
}

#undef public_6d8a84d
