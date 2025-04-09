#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5140);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4d2e);

#define public_59c4b3 _public_59c4b3
#define public_59c4b5 _public_59c4b5
#define public_59c4f6 _public_59c4f6

PROC_DECLARE(0x59c3d0, internal_59c3d0, public_59c3d0);
extern "C" NAKED register_t __cdecl internal_59c3d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4d2e @0x59c3d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4d2e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0xF4
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_59c4b3
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        lea ecx, ds:[esi+0x3C]
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        call public_4b5150
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xF8
        or al, 8
        mov byte ptr ds : [esi+0x6C], al
        mov dword ptr ds : [esi], offset public_5d5544
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        inc dword ptr ds : [public_67dcd4]
        lea ecx, ds:[esi+0x7C]
        mov byte ptr ss : [esp+0x18], 1
        call public_4144b0
        mov byte ptr ds : [esi+0xCF], bl
        mov byte ptr ds : [esi+0xCE], bl
        mov byte ptr ds : [esi+0xCD], bl
        mov byte ptr ds : [esi+0xCC], bl
        lea ecx, ds:[esi+0xD4]
        mov byte ptr ss : [esp+0x18], 2
        mov byte ptr ds : [esi+0xD3], bl
        mov byte ptr ds : [esi+0xD2], bl
        mov byte ptr ds : [esi+0xD1], bl
        mov byte ptr ds : [esi+0xD0], bl
        call public_4b5140
        lea ecx, ds:[esi+0xD8]
        call public_4b5140
        lea ecx, ds:[esi+0xDC]
        call public_4b5140
        mov dword ptr ds : [esi], offset public_5e5a64
        jmp public_59c4b5
        public_59c4b3 : nop
        xor esi, esi
        public_59c4b5 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        add edi, 0xC
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_59c4f6
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_59c4f6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x59c3d0)
    }
}

#undef public_59c4b3
#undef public_59c4b5
#undef public_59c4f6
