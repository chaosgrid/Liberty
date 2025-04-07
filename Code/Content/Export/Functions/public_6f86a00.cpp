#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6fb0bc8);

#define public_6f86a90 _public_6f86a90
#define public_6f86aa5 _public_6f86aa5

PROC_DECLARE(0x6f86a00, internal_6f86a00, public_6f86a00);
extern "C" NAKED register_t __cdecl internal_6f86a00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0bc8 @0x6f86a08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0bc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax]
        sub esp, 0x20
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jl public_6f86aa5
        jne public_6f86aa5
        mov edi, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f86aa5
        cmp dword ptr ds : [edi+8], 0x39
        jne public_6f86aa5
        mov eax, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0x20]
        lea ecx, ds:[esi+0x20]
        push eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_6f86a90
        mov edi, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [eax+0x3C], 3
        mov eax, dword ptr ds : [public_6fd3b9c]
        push eax
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_6fb3118]
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+8], offset public_6fbc804
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ds:[esi+0x10]
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [edx+8]
        public_6f86a90 : nop
        pop edi
        mov al, 1
        pop esi
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 8
        public_6f86aa5 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        xor al, al
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6f86a00)
    }
}

#undef public_6f86a90
#undef public_6f86aa5
