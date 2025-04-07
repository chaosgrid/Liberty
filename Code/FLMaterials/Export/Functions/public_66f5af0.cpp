#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f6320);
CLANG_FORWARD_PROC_SYMBOL(public_66fc970);
CLANG_FORWARD_PROC_SYMBOL(public_66fcec0);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);
CLANG_FORWARD_JUMP_SYMBOL(public_6700bf8);

#define public_66f5b7b _public_66f5b7b
#define public_66f5ba7 _public_66f5ba7
#define public_66f5bb2 _public_66f5bb2
#define public_66f5bc0 _public_66f5bc0
#define public_66f5bd7 _public_66f5bd7
#define public_66f5bf1 _public_66f5bf1
#define public_66f5c07 _public_66f5c07
#define public_66f5c23 _public_66f5c23
#define public_66f5c2b _public_66f5c2b
#define public_66f5c53 _public_66f5c53
#define public_66f5c84 _public_66f5c84
#define public_66f5c86 _public_66f5c86
#define public_66f5ca8 _public_66f5ca8
#define public_66f5cff _public_66f5cff
#define public_66f5d10 _public_66f5d10
#define public_66f5d36 _public_66f5d36
#define public_66f5d9d _public_66f5d9d

PROC_DECLARE(0x66f5af0, internal_66f5af0, public_66f5af0);
extern "C" NAKED register_t __cdecl internal_66f5af0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700bf8 @0x66f5af8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700bf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        xor ebx, ebx
        xor ebp, ebp
        cmp edi, ebx
        mov byte ptr ds : [esi+0x70], 0
        je public_66f5c07
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        je public_66f5c07
        mov dword ptr ss : [esp+0x40], ebx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
/*FIXUP push offset public_67013f0 @0x66f5b3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        push eax
        mov dword ptr ss : [esp+0x40], ebx
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_66f5ba7
        mov al, byte ptr ds : [public_67058f8]
        test al, 1
        jne public_66f5b7b
        mov cl, al
        or cl, 1
/*FIXUP push offset public_6701ae4 @0x66f5b58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ae4
        mov byte ptr ds : [public_67058f8], cl
        call dword ptr ds : [public_6701004]
/*FIXUP push offset _public_66f6320 @0x66f5b69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f6320
        mov dword ptr ds : [public_67058fc], eax
        call public_6700912
        add esp, 8
        public_66f5b7b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x50]
        push eax
        call dword ptr ds : [public_6701004]
        mov edx, dword ptr ds : [public_67058fc]
        add esp, 4
        cmp edx, eax
        sete cl
        mov byte ptr ds : [esi+0x70], cl
        mov eax, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x20]
        jmp public_66f5bb2
        public_66f5ba7 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x18]
        public_66f5bb2 : nop
        mov al, byte ptr ds : [esi+0x70]
        test al, al
        je public_66f5bc0
        mov ebp, offset public_6701ad8
        jmp public_66f5bf1
        public_66f5bc0 : nop
        mov edi, dword ptr ds : [edi]
        call public_66fc970
        cmp eax, ebx
        je public_66f5bd7
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0xDC]
        mov edi, eax
        public_66f5bd7 : nop
        lea eax, ss:[esp+0x3C]
        push eax
        push edi
        mov dword ptr ss : [esp+0x44], ebx
        call public_66fcec0
        add esp, 8
        test al, al
        je public_66f5bf1
        mov ebp, dword ptr ss : [esp+0x3C]
        public_66f5bf1 : nop
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_66f5c07
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66f5c07 : nop
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x74], ebx
        jne public_66f5c2b
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_66f5c23
        mov ecx, dword ptr ds : [esi+0x68]
        cmp ecx, ebx
        je public_66f5c23
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        public_66f5c23 : nop
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        jmp public_66f5c86
        public_66f5c2b : nop
        push ebp
        call dword ptr ds : [public_6701004]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x6C]
        add esp, 4
        cmp eax, ebx
        je public_66f5c84
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_66f5c53
        mov ecx, dword ptr ds : [esi+0x68]
        test ecx, ecx
        je public_66f5c53
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        public_66f5c53 : nop
        test ebx, ebx
        lea edi, ds:[esi+0x68]
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [esi+0x6C], ebx
        je public_66f5c84
        push ebp
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [public_6701004]
        add esp, 4
        push edi
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_66f5c84 : nop
        xor ebx, ebx
        public_66f5c86 : nop
        mov ecx, dword ptr ds : [esi+0x68]
        cmp ecx, ebx
        je public_66f5ca8
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        lea edi, ss:[esp+0x18]
        push edi
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        test eax, eax
        jl public_66f5ca8
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x74], eax
        public_66f5ca8 : nop
        mov al, byte ptr ds : [esi+0x70]
        test al, al
        jne public_66f5d9d
        cmp dword ptr ds : [esi+0x74], ebx
        je public_66f5d9d
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x3C]
        push edx
        mov edi, 1
        push edi
        push ebx
        mov dword ptr ss : [esp+0x48], edi
        mov ecx, dword ptr ds : [eax]
        push eax
        xor ebp, ebp
        call dword ptr ds : [ecx+0xFC]
        cmp dword ptr ss : [esp+0x3C], edi
        je public_66f5cff
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        push edi
        push edi
        push eax
        mov ebp, edi
        call dword ptr ds : [ecx+0xFC]
        cmp dword ptr ss : [esp+0x3C], edi
        jne public_66f5d9d
        public_66f5cff : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_67019c4
        mov eax, 1
        lea esp, ss:[esp]
        public_66f5d10 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f5d10
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_67019fc
        mov eax, 1
        public_66f5d36 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        lea eax, ss:[ebp+1]
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f5d36
        mov edx, dword ptr ds : [esi+0x74]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0x30000
        push 0xB
        push ebp
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push 0x8E
        push eax
        call dword ptr ds : [edx+0xF0]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push 1
        push 0x8F
        push esi
        call dword ptr ds : [eax+0xF0]
        public_66f5d9d : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x66f5af0)
    }
}

#undef public_66f5b7b
#undef public_66f5ba7
#undef public_66f5bb2
#undef public_66f5bc0
#undef public_66f5bd7
#undef public_66f5bf1
#undef public_66f5c07
#undef public_66f5c23
#undef public_66f5c2b
#undef public_66f5c53
#undef public_66f5c84
#undef public_66f5c86
#undef public_66f5ca8
#undef public_66f5cff
#undef public_66f5d10
#undef public_66f5d36
#undef public_66f5d9d
