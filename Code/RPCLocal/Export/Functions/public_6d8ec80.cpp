#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8ecc9 _public_6d8ecc9

PROC_DECLARE(0x6d8ec80, internal_6d8ec80, public_6d8ec80);
extern "C" NAKED register_t __cdecl internal_6d8ec80()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x44
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8ecc9
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+0x24], cl
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [edx+0x25], al
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8ecc9 : nop
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6d8ec80)
    }
}

#undef public_6d8ecc9
