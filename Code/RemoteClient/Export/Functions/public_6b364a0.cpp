#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b364f8 _public_6b364f8

PROC_DECLARE(0x6b364a0, internal_6b364a0, public_6b364a0);
extern "C" NAKED register_t __cdecl internal_6b364a0()
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
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b364f8
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+0x24], cl
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [edx+0x25], al
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [ecx+0x26], dl
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ds : [edx]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b364f8 : nop
        pop esi
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6b364a0)
    }
}

#undef public_6b364f8
