#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236360);
CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6244f90);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249ebb);

#define public_623640a _public_623640a
#define public_623640c _public_623640c

PROC_DECLARE(0x6236360, internal_6236360, public_6236360);
extern "C" NAKED register_t __cdecl internal_6236360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249ebb @0x6236362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249ebb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xC8
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_623640a
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], al
        mov dword ptr ds : [esi], offset public_624edb8
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624ed10
        mov dword ptr ds : [esi], offset public_624ecb0
        mov dword ptr ds : [edi+0xC4], eax
        jmp public_623640c
        public_623640a : nop
        xor edi, edi
        public_623640c : nop
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
        UNREACHABLE_TRAP(0x6236360)
    }
}

#undef public_623640a
#undef public_623640c
