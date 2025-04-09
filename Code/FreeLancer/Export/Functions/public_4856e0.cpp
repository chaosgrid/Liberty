#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6140);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc0b0);

#define public_485791 _public_485791
#define public_485793 _public_485793
#define public_4857d3 _public_4857d3

PROC_DECLARE(0x4856e0, internal_4856e0, public_4856e0);
extern "C" NAKED register_t __cdecl internal_4856e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc0b0 @0x4856e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc0b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push 0x974
        mov ebx, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_485791
        mov ecx, esi
        call public_59f860
        lea ecx, ds:[esi+0x330]
        mov byte ptr ss : [esp+0x14], 1
        call public_4c6140
        lea ecx, ds:[esi+0x394]
        mov byte ptr ss : [esp+0x14], 2
        call dword ptr ds : [public_5c69a0]
        mov al, byte ptr ss : [esp+0x20]
        push 0x28
        mov byte ptr ds : [esi+0x3A8], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x3AC], eax
        mov dword ptr ds : [esi+0x3B0], 0
        lea ecx, ds:[esi+0x94C]
        mov byte ptr ss : [esp+0x14], 3
        call dword ptr ds : [public_5c6364]
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5d0eec
        mov dword ptr ds : [esi+0x7C], offset public_5d0ee0
        call public_477ee0
        jmp public_485793
        public_485791 : nop
        xor esi, esi
        public_485793 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        add ebx, 0xC
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebx
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_4857d3
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_4857d3 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4856e0)
    }
}

#undef public_485791
#undef public_485793
#undef public_4857d3
