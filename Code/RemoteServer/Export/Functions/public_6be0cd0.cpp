#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5700);
CLANG_FORWARD_PROC_SYMBOL(public_6bd59e0);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc830);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a617);

#define public_6be0d09 _public_6be0d09
#define public_6be0d10 _public_6be0d10
#define public_6be0deb _public_6be0deb
#define public_6be0ded _public_6be0ded
#define public_6be0f31 _public_6be0f31
#define public_6be0f33 _public_6be0f33
#define public_6be0fc0 _public_6be0fc0
#define public_6be0fe0 _public_6be0fe0
#define public_6be100d _public_6be100d
#define public_6be100f _public_6be100f
#define public_6be10a0 _public_6be10a0
#define public_6be10c0 _public_6be10c0
#define public_6be10ea _public_6be10ea
#define public_6be10f0 _public_6be10f0
#define public_6be1120 _public_6be1120
#define public_6be113e _public_6be113e
#define public_6be1144 _public_6be1144
#define public_6be1148 _public_6be1148
#define public_6be118e _public_6be118e
#define public_6be1198 _public_6be1198
#define public_6be11da _public_6be11da
#define public_6be11f6 _public_6be11f6
#define public_6be120a _public_6be120a
#define public_6be1215 _public_6be1215
#define public_6be122c _public_6be122c

PROC_DECLARE(0x6be0cd0, internal_6be0cd0, public_6be0cd0);
extern "C" NAKED register_t __cdecl internal_6be0cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a617 @0x6be0cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a617
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6be122c
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        jmp public_6be0d10
        public_6be0d09 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ecx]
        public_6be0d10 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6be1215
        push 0x27C
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6be0deb
        mov dl, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], bl
        mov byte ptr ds : [esi+0x200], bl
        mov byte ptr ds : [esi+0x201], bl
        push ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6c0b1ac]
        mov al, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x214]
        push ebx
        mov byte ptr ss : [esp+0x38], 1
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_6c0b1ac]
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
        mov cl, byte ptr ss : [esp+0x3C]
        lea ebp, ds:[esi+0x268]
        push ebx
        mov byte ptr ss : [ebp], cl
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 3
        call dword ptr ds : [public_6c0b0f8]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [esi+0x274], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        jmp public_6be0ded
        public_6be0deb : nop
        xor esi, esi
        public_6be0ded : nop
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6c0b0d8]
        mov dl, byte ptr ds : [edi+0x200]
        mov byte ptr ds : [esi+0x200], dl
        mov al, byte ptr ds : [edi+0x201]
        mov byte ptr ds : [esi+0x201], al
        mov ecx, dword ptr ds : [public_6c0b1b8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ds:[edi+0x204]
        push eax
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_6c0b1bc]
        mov ecx, dword ptr ds : [public_6c0b1b8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ds:[edi+0x214]
        push eax
        lea ecx, ds:[esi+0x214]
        call dword ptr ds : [public_6c0b1bc]
        mov ecx, dword ptr ds : [edi+0x224]
        mov dword ptr ds : [esi+0x224], ecx
        mov edx, dword ptr ds : [edi+0x228]
        mov dword ptr ds : [esi+0x228], edx
        mov eax, dword ptr ds : [edi+0x22C]
        mov dword ptr ds : [esi+0x22C], eax
        mov ecx, dword ptr ds : [edi+0x230]
        mov dword ptr ds : [esi+0x230], ecx
        mov edx, dword ptr ds : [edi+0x234]
        mov dword ptr ds : [esi+0x234], edx
        mov eax, dword ptr ds : [edi+0x238]
        mov dword ptr ds : [esi+0x238], eax
        mov ecx, dword ptr ds : [edi+0x23C]
        mov dword ptr ds : [esi+0x23C], ecx
        mov edx, dword ptr ds : [edi+0x240]
        mov dword ptr ds : [esi+0x240], edx
        mov eax, dword ptr ds : [edi+0x244]
        mov dword ptr ds : [esi+0x244], eax
        mov ecx, dword ptr ds : [edi+0x248]
        mov dword ptr ds : [esi+0x248], ecx
        mov edx, dword ptr ds : [edi+0x24C]
        mov dword ptr ds : [esi+0x24C], edx
        mov eax, dword ptr ds : [edi+0x250]
        mov dword ptr ds : [esi+0x250], eax
        mov ecx, dword ptr ds : [edi+0x254]
        mov dword ptr ds : [esi+0x254], ecx
        mov edx, dword ptr ds : [edi+0x258]
        mov dword ptr ds : [esi+0x258], edx
        mov eax, dword ptr ds : [edi+0x25C]
        mov dword ptr ds : [esi+0x25C], eax
        cmp dword ptr ds : [edi+0x274], ebx
        je public_6be0fe0
        push 0x18
        call public_6c09d26
        add esp, 4
        cmp eax, ebx
        je public_6be0f31
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6be0f33
        public_6be0f31 : nop
        xor eax, eax
        public_6be0f33 : nop
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
        jbe public_6be0fe0
        lea ecx, ds:[eax*4]
        push ecx
        call public_6c09d26
        mov edx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6be0fe0
        public_6be0fc0 : nop
        mov edx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6be0fc0
        public_6be0fe0 : nop
        cmp dword ptr ds : [edi+0x278], ebx
        je public_6be10c0
        push 0x18
        call public_6c09d26
        add esp, 4
        cmp eax, ebx
        je public_6be100d
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6be100f
        public_6be100d : nop
        xor eax, eax
        public_6be100f : nop
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
        jbe public_6be10c0
        lea ecx, ds:[eax*4]
        push ecx
        call public_6c09d26
        mov edx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6be10c0
        lea esp, ss:[esp]
        public_6be10a0 : nop
        mov edx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6be10a0
        public_6be10c0 : nop
        lea eax, ds:[edi+0x264]
        lea ebp, ds:[esi+0x264]
        push eax
        mov ecx, ebp
        call public_6bdc850
        mov ecx, ebp
        call public_6bdc830
        cmp eax, ebx
        je public_6be10ea
        mov cl, byte ptr ds : [eax+8]
        mov byte ptr ds : [esi+0x260], cl
        jmp public_6be10f0
        public_6be10ea : nop
        mov byte ptr ds : [esi+0x260], bl
        public_6be10f0 : nop
        lea ecx, ds:[edi+0x268]
        lea ebp, ds:[esi+0x268]
        cmp ebp, ecx
        je public_6be11da
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6be118e
        lea ebx, ds:[ebx]
        public_6be1120 : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        je public_6be113e
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6be1120
        public_6be113e : nop
        cmp eax, edi
        je public_6be118e
        jmp public_6be1148
        public_6be1144 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6be1148 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], eax
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], edx
        call public_6bd5700
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp eax, edi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6be1144
        mov ecx, dword ptr ss : [esp+0x10]
        public_6be118e : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6be11da
        public_6be1198 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6c0b0f8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        add edx, 8
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6bd59e0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc edx
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6be1198
        public_6be11da : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [ecx+0x28]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_6be11f6
        mov ebp, eax
        public_6be11f6 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_6be120a
        mov dword ptr ds : [eax], esi
        public_6be120a : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        public_6be1215 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6be0d09
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6be122c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6be0cd0)
    }
}

#undef public_6be0d09
#undef public_6be0d10
#undef public_6be0deb
#undef public_6be0ded
#undef public_6be0f31
#undef public_6be0f33
#undef public_6be0fc0
#undef public_6be0fe0
#undef public_6be100d
#undef public_6be100f
#undef public_6be10a0
#undef public_6be10c0
#undef public_6be10ea
#undef public_6be10f0
#undef public_6be1120
#undef public_6be113e
#undef public_6be1144
#undef public_6be1148
#undef public_6be118e
#undef public_6be1198
#undef public_6be11da
#undef public_6be11f6
#undef public_6be120a
#undef public_6be1215
#undef public_6be122c
