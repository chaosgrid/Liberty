#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e510);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6244f90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247afb);

#define public_620e58a _public_620e58a
#define public_620e58c _public_620e58c

PROC_DECLARE(0x620e510, internal_620e510, public_620e510);
extern "C" NAKED register_t __cdecl internal_620e510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247afb @0x620e512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247afb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0xA4
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_620e58a
        push edi
        lea edi, ds:[esi+4]
        mov ecx, edi
        mov dword ptr ds : [esi], offset public_624bf40
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [edi+0x98], 0
        mov byte ptr ds : [edi+0x96], al
        mov dword ptr ds : [edi], offset public_624bee0
        mov dword ptr ds : [edi], offset public_624be80
        mov dword ptr ds : [esi+0x1C], esi
        mov dword ptr ds : [esi], offset public_624bdd8
        mov dword ptr ds : [esi+0xA0], eax
        pop edi
        jmp public_620e58c
        public_620e58a : nop
        xor esi, esi
        public_620e58c : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+4]
        push eax
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6244f90
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x620e510)
    }
}

#undef public_620e58a
#undef public_620e58c
