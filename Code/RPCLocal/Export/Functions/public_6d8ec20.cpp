#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8ec6d _public_6d8ec6d

PROC_DECLARE(0x6d8ec20, internal_6d8ec20, public_6d8ec20);
extern "C" NAKED register_t __cdecl internal_6d8ec20()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x40
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8ec6d
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov cx, word ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x24], cx
        mov ax, word ptr ds : [eax+6]
        mov ecx, dword ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x26], ax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8ec6d : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8ec20)
    }
}

#undef public_6d8ec6d
