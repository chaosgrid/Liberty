#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f38c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf1aa);

#define public_4f393d _public_4f393d
#define public_4f3951 _public_4f3951
#define public_4f3958 _public_4f3958
#define public_4f3972 _public_4f3972
#define public_4f398e _public_4f398e
#define public_4f3996 _public_4f3996
#define public_4f399c _public_4f399c
#define public_4f39c0 _public_4f39c0
#define public_4f39e4 _public_4f39e4
#define public_4f39f7 _public_4f39f7
#define public_4f3a24 _public_4f3a24

PROC_DECLARE(0x4f38c0, internal_4f38c0, public_4f38c0);
extern "C" NAKED register_t __cdecl internal_4f38c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf1aa @0x4f38c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf1aa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_4f3a24
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], ecx
        add esi, 4
        push ebp
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, eax
        push edi
        mov dword ptr ss : [esp+0x18], esi
        je public_4f3972
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov ecx, dword ptr ds : [esi+4]
        lea edi, ds:[eax+1]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x34], eax
        jbe public_4f3958
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4f393d
        lea edx, ds:[edi+edi]
        push edx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_4f3951
        public_4f393d : nop
        lea eax, ds:[edi+edi]
        push eax
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4f3951 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+4], edi
        public_4f3958 : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push ebp
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0xC
        mov word ptr ds : [edx+eax*2], 0
        public_4f3972 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], ecx
        mov dl, byte ptr ds : [ebx+0x10]
        mov byte ptr ds : [esi+0xC], dl
        mov ecx, dword ptr ds : [ebx+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x28], 1
        jne public_4f398e
        xor eax, eax
        jmp public_4f3996
        public_4f398e : nop
        mov eax, dword ptr ds : [ebx+0x18]
        sub eax, ecx
        sar eax, 3
        public_4f3996 : nop
        test eax, eax
        jge public_4f399c
        xor eax, eax
        public_4f399c : nop
        shl eax, 3
        push eax
        call public_5b7e84
        mov dword ptr ds : [esi+0x10], eax
        mov edx, dword ptr ds : [ebx+0x18]
        mov ebp, dword ptr ds : [ebx+0x14]
        add esp, 4
        cmp ebp, edx
        mov edi, eax
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x10], edi
        je public_4f39f7
        nop 
        public_4f39c0 : nop
        mov dword ptr ss : [esp+0x1C], edi
        test edi, edi
        mov byte ptr ss : [esp+0x28], 2
        je public_4f39e4
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        mov dword ptr ds : [edi], ecx
        mov al, byte ptr ss : [ebp+4]
        mov byte ptr ds : [edi+4], al
        je public_4f39e4
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x34]
        public_4f39e4 : nop
        add edi, 8
        add ebp, 8
        cmp ebp, edx
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], edi
        jne public_4f39c0
        public_4f39f7 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov eax, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [ebx+0x24]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [ebx+0x30]
        pop edi
        mov dword ptr ds : [esi+0x2C], ecx
        mov dl, byte ptr ds : [ebx+0x34]
        pop ebp
        mov byte ptr ds : [esi+0x30], dl
        pop ebx
        public_4f3a24 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4f38c0)
    }
}

#undef public_4f393d
#undef public_4f3951
#undef public_4f3958
#undef public_4f3972
#undef public_4f398e
#undef public_4f3996
#undef public_4f399c
#undef public_4f39c0
#undef public_4f39e4
#undef public_4f39f7
#undef public_4f3a24
