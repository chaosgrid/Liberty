#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6237840);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a13b);

#define public_62399e9 _public_62399e9
#define public_6239a09 _public_6239a09
#define public_6239a0d _public_6239a0d
#define public_6239a12 _public_6239a12
#define public_6239a5f _public_6239a5f
#define public_6239a61 _public_6239a61
#define public_6239a72 _public_6239a72
#define public_6239a78 _public_6239a78
#define public_6239a8d _public_6239a8d
#define public_6239ac5 _public_6239ac5
#define public_6239ae0 _public_6239ae0
#define public_6239af5 _public_6239af5
#define public_6239b0a _public_6239b0a
#define public_6239b1f _public_6239b1f
#define public_6239b34 _public_6239b34
#define public_6239b49 _public_6239b49
#define public_6239b61 _public_6239b61
#define public_6239bd6 _public_6239bd6

PROC_DECLARE(0x62399b0, internal_62399b0, public_62399b0);
extern "C" NAKED register_t __cdecl internal_62399b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a13b @0x62399b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a13b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_6239bd6
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_62399e9 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6239a0d
        cmp cl, bl
        je public_6239a09
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6239a0d
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_62399e9
        public_6239a09 : nop
        xor eax, eax
        jmp public_6239a12
        public_6239a0d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6239a12 : nop
        cmp eax, ebx
        jne public_6239bd6
        push 0x90
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6239a5f
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_6237840
        mov dword ptr ds : [esi], offset public_624f0e8
        mov dword ptr ds : [edi], offset public_624f148
        mov dword ptr ds : [esi+0x8C], 1
        mov ebp, esi
        jmp public_6239a61
        public_6239a5f : nop
        xor ebp, ebp
        public_6239a61 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_6239a8d
        mov eax, 0xFFFFFFFC
        public_6239a72 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], ebp
        public_6239a78 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_6239a8d : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [ebp+4]
        lea edi, ss:[ebp+4]
        push eax
        push edi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6239a72
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0x84]
        mov dword ptr ss : [esp+0x24], 7
        cmp eax, ebx
        je public_6239ac5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x84], ebx
        public_6239ac5 : nop
        mov eax, dword ptr ds : [edi+0x80]
        mov byte ptr ss : [esp+0x24], 6
        cmp eax, ebx
        je public_6239ae0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x80], ebx
        public_6239ae0 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov byte ptr ss : [esp+0x24], 5
        cmp eax, ebx
        je public_6239af5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_6239af5 : nop
        mov eax, dword ptr ds : [edi+0x78]
        mov byte ptr ss : [esp+0x24], 4
        cmp eax, ebx
        je public_6239b0a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x78], ebx
        public_6239b0a : nop
        mov eax, dword ptr ds : [edi+0x74]
        mov byte ptr ss : [esp+0x24], 3
        cmp eax, ebx
        je public_6239b1f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x74], ebx
        public_6239b1f : nop
        mov eax, dword ptr ds : [edi+0x70]
        mov byte ptr ss : [esp+0x24], 2
        cmp eax, ebx
        je public_6239b34
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x70], ebx
        public_6239b34 : nop
        mov eax, dword ptr ds : [edi+0x6C]
        mov byte ptr ss : [esp+0x24], 1
        cmp eax, ebx
        je public_6239b49
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x6C], ebx
        public_6239b49 : nop
        mov eax, dword ptr ds : [edi+0x58]
        mov dword ptr ss : [esp+0x24], 9
        cmp eax, ebx
        je public_6239b61
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x58], ebx
        public_6239b61 : nop
        mov eax, dword ptr ds : [edi+0x50]
        lea esi, ds:[edi+0x4C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x28], 8
        call public_620b3f0
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x2C]
        mov eax, dword ptr ds : [eax]
        push eax
        call public_620b3f0
        lea edx, ss:[esp+0x18]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_620b3a0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_620b260
        push ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6239a78
        public_6239bd6 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6239a78
        UNREACHABLE_TRAP(0x62399b0)
    }
}

#undef public_62399e9
#undef public_6239a09
#undef public_6239a0d
#undef public_6239a12
#undef public_6239a5f
#undef public_6239a61
#undef public_6239a72
#undef public_6239a78
#undef public_6239a8d
#undef public_6239ac5
#undef public_6239ae0
#undef public_6239af5
#undef public_6239b0a
#undef public_6239b1f
#undef public_6239b34
#undef public_6239b49
#undef public_6239b61
#undef public_6239bd6
