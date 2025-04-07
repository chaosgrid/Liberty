#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b386e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a430);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a8e7);

#define public_6b41565 _public_6b41565
#define public_6b41570 _public_6b41570
#define public_6b4164b _public_6b4164b
#define public_6b4164d _public_6b4164d
#define public_6b4178f _public_6b4178f
#define public_6b41791 _public_6b41791
#define public_6b41820 _public_6b41820
#define public_6b41840 _public_6b41840
#define public_6b4186d _public_6b4186d
#define public_6b4186f _public_6b4186f
#define public_6b41900 _public_6b41900
#define public_6b41920 _public_6b41920
#define public_6b4194a _public_6b4194a
#define public_6b41950 _public_6b41950
#define public_6b41980 _public_6b41980
#define public_6b4199e _public_6b4199e
#define public_6b419a4 _public_6b419a4
#define public_6b419a8 _public_6b419a8
#define public_6b419ee _public_6b419ee
#define public_6b419f8 _public_6b419f8
#define public_6b41a3a _public_6b41a3a
#define public_6b41a56 _public_6b41a56
#define public_6b41a6a _public_6b41a6a
#define public_6b41a79 _public_6b41a79
#define public_6b41a8c _public_6b41a8c

PROC_DECLARE(0x6b41530, internal_6b41530, public_6b41530);
extern "C" NAKED register_t __cdecl internal_6b41530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a8e7 @0x6b41532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a8e7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+8], eax
        je public_6b41a8c
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        jmp public_6b41570
        public_6b41565 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6b41570 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6b41a79
        push 0x27C
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6b4164b
        mov al, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], bl
        mov byte ptr ds : [esi+0x200], bl
        mov byte ptr ds : [esi+0x201], bl
        push ebx
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_6b6b178]
        mov dl, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x214]
        push ebx
        mov byte ptr ss : [esp+0x38], 1
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6b6b178]
        mov dword ptr ds : [esi+0x224], ebx
        mov dword ptr ds : [esi+0x244], ebx
        mov dword ptr ds : [esi+0x248], ebx
        mov dword ptr ds : [esi+0x24C], ebx
        mov dword ptr ds : [esi+0x250], ebx
        mov dword ptr ds : [esi+0x254], ebx
        mov dword ptr ds : [esi+0x258], ebx
        mov dword ptr ds : [esi+0x25C], ebx
        mov byte ptr ds : [esi+0x260], bl
        mov dword ptr ds : [esi+0x264], ebx
        mov al, byte ptr ss : [esp+0x3C]
        lea ebp, ds:[esi+0x268]
        push ebx
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 3
        mov byte ptr ss : [ebp], al
        call dword ptr ds : [public_6b6b030]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [esi+0x274], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        jmp public_6b4164d
        public_6b4164b : nop
        xor esi, esi
        public_6b4164d : nop
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6b6b044]
        mov cl, byte ptr ds : [edi+0x200]
        mov byte ptr ds : [esi+0x200], cl
        mov dl, byte ptr ds : [edi+0x201]
        mov byte ptr ds : [esi+0x201], dl
        mov eax, dword ptr ds : [public_6b6b180]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x204]
        push edx
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_6b6b184]
        mov eax, dword ptr ds : [public_6b6b180]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x214]
        push edx
        lea ecx, ds:[esi+0x214]
        call dword ptr ds : [public_6b6b184]
        mov eax, dword ptr ds : [edi+0x224]
        mov dword ptr ds : [esi+0x224], eax
        mov ecx, dword ptr ds : [edi+0x228]
        mov dword ptr ds : [esi+0x228], ecx
        mov edx, dword ptr ds : [edi+0x22C]
        mov dword ptr ds : [esi+0x22C], edx
        mov eax, dword ptr ds : [edi+0x230]
        mov dword ptr ds : [esi+0x230], eax
        mov ecx, dword ptr ds : [edi+0x234]
        mov dword ptr ds : [esi+0x234], ecx
        mov edx, dword ptr ds : [edi+0x238]
        mov dword ptr ds : [esi+0x238], edx
        mov eax, dword ptr ds : [edi+0x23C]
        mov dword ptr ds : [esi+0x23C], eax
        mov ecx, dword ptr ds : [edi+0x240]
        mov dword ptr ds : [esi+0x240], ecx
        mov edx, dword ptr ds : [edi+0x244]
        mov dword ptr ds : [esi+0x244], edx
        mov eax, dword ptr ds : [edi+0x248]
        mov dword ptr ds : [esi+0x248], eax
        mov ecx, dword ptr ds : [edi+0x24C]
        mov dword ptr ds : [esi+0x24C], ecx
        mov edx, dword ptr ds : [edi+0x250]
        mov dword ptr ds : [esi+0x250], edx
        mov eax, dword ptr ds : [edi+0x254]
        mov dword ptr ds : [esi+0x254], eax
        mov ecx, dword ptr ds : [edi+0x258]
        mov dword ptr ds : [esi+0x258], ecx
        mov edx, dword ptr ds : [edi+0x25C]
        mov dword ptr ds : [esi+0x25C], edx
        cmp dword ptr ds : [edi+0x274], ebx
        je public_6b41840
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b4178f
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6b41791
        public_6b4178f : nop
        xor eax, eax
        public_6b41791 : nop
        mov dword ptr ds : [esi+0x274], eax
        mov ecx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ds : [esi+0x274]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6b41840
        lea ecx, ds:[eax*4]
        push ecx
        call public_6b6a134
        mov edx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6b41840
        mov edi, edi
        public_6b41820 : nop
        mov edx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6b41820
        public_6b41840 : nop
        cmp dword ptr ds : [edi+0x278], ebx
        je public_6b41920
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b4186d
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6b4186f
        public_6b4186d : nop
        xor eax, eax
        public_6b4186f : nop
        mov dword ptr ds : [esi+0x278], eax
        mov ecx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ds : [esi+0x278]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6b41920
        lea ecx, ds:[eax*4]
        push ecx
        call public_6b6a134
        mov edx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6b41920
        lea esp, ss:[esp]
        public_6b41900 : nop
        mov edx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6b41900
        public_6b41920 : nop
        lea eax, ds:[edi+0x264]
        lea ebp, ds:[esi+0x264]
        push eax
        mov ecx, ebp
        call public_6b3a510
        mov ecx, ebp
        call public_6b3a4f0
        cmp eax, ebx
        je public_6b4194a
        mov cl, byte ptr ds : [eax+8]
        mov byte ptr ds : [esi+0x260], cl
        jmp public_6b41950
        public_6b4194a : nop
        mov byte ptr ds : [esi+0x260], bl
        public_6b41950 : nop
        lea ecx, ds:[edi+0x268]
        lea ebp, ds:[esi+0x268]
        cmp ebp, ecx
        je public_6b41a3a
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b419ee
        lea ebx, ds:[ebx]
        public_6b41980 : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        je public_6b4199e
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6b41980
        public_6b4199e : nop
        cmp eax, edi
        je public_6b419ee
        jmp public_6b419a8
        public_6b419a4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6b419a8 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], eax
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], edx
        call public_6b386e0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp eax, edi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6b419a4
        mov ecx, dword ptr ss : [esp+0x10]
        public_6b419ee : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b41a3a
        public_6b419f8 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6b6b030]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        add edx, 8
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6b3a430
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc edx
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6b419f8
        public_6b41a3a : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_6b41a56
        mov ebp, eax
        public_6b41a56 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_6b41a6a
        mov dword ptr ds : [eax], esi
        public_6b41a6a : nop
        mov eax, dword ptr ss : [esp+0x3C]
        inc dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        public_6b41a79 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6b41565
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b41a8c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6b41530)
    }
}

#undef public_6b41565
#undef public_6b41570
#undef public_6b4164b
#undef public_6b4164d
#undef public_6b4178f
#undef public_6b41791
#undef public_6b41820
#undef public_6b41840
#undef public_6b4186d
#undef public_6b4186f
#undef public_6b41900
#undef public_6b41920
#undef public_6b4194a
#undef public_6b41950
#undef public_6b41980
#undef public_6b4199e
#undef public_6b419a4
#undef public_6b419a8
#undef public_6b419ee
#undef public_6b419f8
#undef public_6b41a3a
#undef public_6b41a56
#undef public_6b41a6a
#undef public_6b41a79
#undef public_6b41a8c
