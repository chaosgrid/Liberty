#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224710);
CLANG_FORWARD_PROC_SYMBOL(public_6225a50);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62434c0);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248dac);

#define public_62247b8 _public_62247b8
#define public_62247ba _public_62247ba
#define public_62247d9 _public_62247d9
#define public_62247e9 _public_62247e9

PROC_DECLARE(0x6224710, internal_6224710, public_6224710);
extern "C" NAKED register_t __cdecl internal_6224710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248dac @0x6224712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248dac
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_6243ff0
        xor ebx, ebx
        mov dword ptr ds : [esi+0x68], offset public_624bd80
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0x60], offset public_624bd84
        mov dword ptr ds : [esi+0x84], ebx
        lea ecx, ds:[esi+0x68]
/*FIXUP push offset public_6257a70 @0x622475f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257a70
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [esi], offset public_624dd38
        mov dword ptr ds : [esi+0x5C], ebx
        call public_6225a50
        mov eax, dword ptr ds : [esi+0x70]
        push eax
        call public_623ef70
        mov dword ptr ds : [esi+0x64], eax
        push 0x34
        mov byte ptr ds : [esi+0x80], bl
        call public_624612c
        mov edi, eax
        add esp, 8
        mov dword ptr ss : [esp+0x10], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x1C], 3
        je public_62247b8
        mov ecx, edi
        call public_62434c0
        mov dword ptr ds : [edi], offset public_624bbb8
        mov dword ptr ds : [edi+0x30], 1
        jmp public_62247ba
        public_62247b8 : nop
        xor edi, edi
        public_62247ba : nop
        mov eax, dword ptr ds : [esi+0x84]
        mov byte ptr ss : [esp+0x1C], 2
        cmp eax, edi
        je public_62247e9
        cmp eax, ebx
        je public_62247d9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_62247d9 : nop
        cmp edi, ebx
        mov dword ptr ds : [esi+0x84], edi
        je public_62247e9
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_62247e9 : nop
        mov eax, dword ptr ds : [esi+0x84]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6224710)
    }
}

#undef public_62247b8
#undef public_62247ba
#undef public_62247d9
#undef public_62247e9
