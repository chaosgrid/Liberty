#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae93e);

#define public_6f30607 _public_6f30607
#define public_6f30616 _public_6f30616

PROC_DECLARE(0x6f305d0, internal_6f305d0, public_6f305d0);
extern "C" NAKED register_t __cdecl internal_6f305d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae93e @0x6f305d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae93e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov ebx, dword ptr ds : [esi+0x90]
        mov edi, dword ptr ds : [esi+0x8C]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 2
        je public_6f30616
        public_6f30607 : nop
        lea ecx, ds:[edi+4]
        call public_6eec8d0
        add edi, 0x18
        cmp edi, ebx
        jne public_6f30607
        public_6f30616 : nop
        mov eax, dword ptr ds : [esi+0x8C]
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x8C], edi
        mov dword ptr ds : [esi+0x90], edi
        mov dword ptr ds : [esi+0x94], edi
        mov ecx, dword ptr ds : [esi+0x6C]
        push ecx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        mov dword ptr ds : [esi+0x74], edi
        mov edx, dword ptr ds : [esi+0x5C]
        push edx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f305d0)
    }
}

#undef public_6f30607
#undef public_6f30616
