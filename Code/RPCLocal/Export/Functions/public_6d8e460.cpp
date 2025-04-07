#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8e49e _public_6d8e49e

PROC_DECLARE(0x6d8e460, internal_6d8e460, public_6d8e460);
extern "C" NAKED register_t __cdecl internal_6d8e460()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x12
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8e49e
        mov ecx, dword ptr ss : [esp+4]
        mov al, byte ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 0x40
        mov edx, dword ptr ss : [esp+4]
        mov byte ptr ds : [edx+0x30], al
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8e49e : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8e460)
    }
}

#undef public_6d8e49e
