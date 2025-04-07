#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212b00);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6244f90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247f7b);

#define public_6212bdd _public_6212bdd
#define public_6212bdf _public_6212bdf

PROC_DECLARE(0x6212b00, internal_6212b00, public_6212b00);
extern "C" NAKED register_t __cdecl internal_6212b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247f7b @0x6212b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247f7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xE4
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6212bdd
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov ecx, 1
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], cl
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi], offset public_624c698
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624c5f0
        mov dword ptr ds : [esi], offset public_624c590
        mov dword ptr ds : [edi+0xE0], ecx
        jmp public_6212bdf
        public_6212bdd : nop
        xor edi, edi
        public_6212bdf : nop
        mov ebx, dword ptr ss : [esp+0x20]
        lea esi, ds:[edi+4]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6244f90
        mov eax, dword ptr ds : [ebx+0x9C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x9C], eax
        xor eax, eax
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6212b00)
    }
}

#undef public_6212bdd
#undef public_6212bdf
