#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8ebbc _public_6d8ebbc

PROC_DECLARE(0x6d8eb60, internal_6d8eb60, public_6d8eb60);
extern "C" NAKED register_t __cdecl internal_6d8eb60()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x32
        push 3
        mov dword ptr ss : [esp+0x10], 0
        call public_6d96300
        test eax, eax
        jne public_6d8ebbc
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [ecx+0x20], dl
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x28], eax
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx+0x2C], dl
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6d8ebbc : nop
        pop esi
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6d8eb60)
    }
}

#undef public_6d8ebbc
