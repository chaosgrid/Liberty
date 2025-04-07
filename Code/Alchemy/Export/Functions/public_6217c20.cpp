#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217c20);
CLANG_FORWARD_PROC_SYMBOL(public_6217e10);
CLANG_FORWARD_PROC_SYMBOL(public_6217e60);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624837e);

#define public_6217c80 _public_6217c80
#define public_6217c82 _public_6217c82
#define public_6217cd1 _public_6217cd1
#define public_6217cd3 _public_6217cd3

PROC_DECLARE(0x6217c20, internal_6217c20, public_6217c20);
extern "C" NAKED register_t __cdecl internal_6217c20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624837e @0x6217c22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624837e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0x20
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        test esi, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov ebx, 1
        je public_6217c80
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi], offset public_624ce20
        mov dword ptr ds : [esi+4], 4
        call public_6217e60
        mov dword ptr ds : [esi], offset public_624bb18
        mov dword ptr ds : [esi+0x1C], ebx
        mov edi, esi
        jmp public_6217c82
        public_6217c80 : nop
        xor edi, edi
        public_6217c82 : nop
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0x24]
        push 0x2C
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x28], eax
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        test esi, esi
        mov byte ptr ss : [esp+0x1C], 2
        je public_6217cd1
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi], offset public_624cde0
        mov dword ptr ds : [esi+4], 4
        call public_6217e10
        mov dword ptr ds : [esi], offset public_624bbf0
        mov dword ptr ds : [esi+0x28], ebx
        jmp public_6217cd3
        public_6217cd1 : nop
        xor esi, esi
        public_6217cd3 : nop
        mov ecx, dword ptr ds : [esi]
        push 4
        push esi
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x24]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [edi]
        push esi
        push 0
        push edi
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+0x28]
        push esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6217c20)
    }
}

#undef public_6217c80
#undef public_6217c82
#undef public_6217cd1
#undef public_6217cd3
