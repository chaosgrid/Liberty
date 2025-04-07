#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221510);
CLANG_FORWARD_PROC_SYMBOL(public_6221fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62226d0);
CLANG_FORWARD_PROC_SYMBOL(public_62226e0);
CLANG_FORWARD_PROC_SYMBOL(public_62226f0);
CLANG_FORWARD_PROC_SYMBOL(public_6222da0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248c5b);

#define public_622251a _public_622251a
#define public_622253a _public_622253a
#define public_622253e _public_622253e
#define public_6222543 _public_6222543
#define public_6222596 _public_6222596
#define public_6222598 _public_6222598
#define public_62225b4 _public_62225b4
#define public_62225ce _public_62225ce
#define public_62225df _public_62225df
#define public_6222644 _public_6222644
#define public_6222648 _public_6222648
#define public_622266e _public_622266e
#define public_6222672 _public_6222672
#define public_62226a2 _public_62226a2
#define public_62226af _public_62226af
#define public_62226b5 _public_62226b5

PROC_DECLARE(0x62224e0, internal_62224e0, public_62224e0);
extern "C" NAKED register_t __cdecl internal_62224e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248c5b @0x62224e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248c5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        push edi
        xor ebx, ebx
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, 8
        jne public_62226a2
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_622251a : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_622253e
        cmp cl, bl
        je public_622253a
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_622253e
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_622251a
        public_622253a : nop
        xor eax, eax
        jmp public_6222543
        public_622253e : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6222543 : nop
        cmp eax, ebx
        jne public_62226a2
        push 0x28
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x30], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6222596
        mov al, byte ptr ss : [esp+0x34]
        mov dl, byte ptr ss : [esp+0x34]
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624d9b4
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6222da0
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi], offset public_624d978
        mov dword ptr ds : [edi+0x24], 1
        jmp public_6222598
        public_6222596 : nop
        xor edi, edi
        public_6222598 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_62225b4
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_62226b5
        public_62225b4 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [edx+0x38]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_62226af
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_62225df
        public_62225ce : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x18], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        jne public_62225ce
        public_62225df : nop
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, ebx
        mov ebp, eax
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], ecx
        je public_6222644
        push eax
        call public_62226d0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        cmp ecx, eax
        jne public_6222644
        mov eax, dword ptr ds : [esi+4]
        cmp ebp, eax
        jne public_6222644
        mov edx, dword ptr ds : [eax+4]
        mov ecx, esi
        push edx
        call public_6221fc0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x2C]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        push edx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_62226e0
        jmp public_6222672
        public_6222644 : nop
        cmp ecx, ebp
        je public_622266e
        public_6222648 : nop
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        lea ecx, ss:[esp+0x38]
        call public_62226f0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, esi
        call public_6221510
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, ebp
        jne public_6222648
        public_622266e : nop
        mov dword ptr ss : [esp+0x2C], ecx
        public_6222672 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push ecx
        mov dword ptr ds : [esi+0x10], ebx
        call public_62460e0
        push edi
        mov dword ptr ds : [esi+8], ebx
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        mov dword ptr ds : [edx], ebx
        jmp public_62226b5
        public_62226a2 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_62226b5
        public_62226af : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx], edi
        public_62226b5 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x62224e0)
    }
}

#undef public_622251a
#undef public_622253a
#undef public_622253e
#undef public_6222543
#undef public_6222596
#undef public_6222598
#undef public_62225b4
#undef public_62225ce
#undef public_62225df
#undef public_6222644
#undef public_6222648
#undef public_622266e
#undef public_6222672
#undef public_62226a2
#undef public_62226af
#undef public_62226b5
