#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b386e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a430);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b42690);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a937);

#define public_6b426c9 _public_6b426c9
#define public_6b426d0 _public_6b426d0
#define public_6b427ab _public_6b427ab
#define public_6b427ad _public_6b427ad
#define public_6b428f1 _public_6b428f1
#define public_6b428f3 _public_6b428f3
#define public_6b42980 _public_6b42980
#define public_6b429a0 _public_6b429a0
#define public_6b429cd _public_6b429cd
#define public_6b429cf _public_6b429cf
#define public_6b42a60 _public_6b42a60
#define public_6b42a80 _public_6b42a80
#define public_6b42aaa _public_6b42aaa
#define public_6b42ab0 _public_6b42ab0
#define public_6b42ae0 _public_6b42ae0
#define public_6b42afe _public_6b42afe
#define public_6b42b04 _public_6b42b04
#define public_6b42b08 _public_6b42b08
#define public_6b42b4e _public_6b42b4e
#define public_6b42b58 _public_6b42b58
#define public_6b42b9a _public_6b42b9a
#define public_6b42bb6 _public_6b42bb6
#define public_6b42bca _public_6b42bca
#define public_6b42bd5 _public_6b42bd5
#define public_6b42bec _public_6b42bec

PROC_DECLARE(0x6b42690, internal_6b42690, public_6b42690);
extern "C" NAKED register_t __cdecl internal_6b42690()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a937 @0x6b42692*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a937
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
        je public_6b42bec
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        jmp public_6b426d0
        public_6b426c9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ecx]
        public_6b426d0 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6b42bd5
        push 0x27C
        call public_6b6a134
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6b427ab
        mov dl, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], bl
        mov byte ptr ds : [esi+0x200], bl
        mov byte ptr ds : [esi+0x201], bl
        push ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6b6b178]
        mov al, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x214]
        push ebx
        mov byte ptr ss : [esp+0x38], 1
        mov byte ptr ds : [ecx], al
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
        mov cl, byte ptr ss : [esp+0x3C]
        lea ebp, ds:[esi+0x268]
        push ebx
        mov byte ptr ss : [ebp], cl
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 3
        call dword ptr ds : [public_6b6b030]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [esi+0x274], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        jmp public_6b427ad
        public_6b427ab : nop
        xor esi, esi
        public_6b427ad : nop
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6b6b044]
        mov dl, byte ptr ds : [edi+0x200]
        mov byte ptr ds : [esi+0x200], dl
        mov al, byte ptr ds : [edi+0x201]
        mov byte ptr ds : [esi+0x201], al
        mov ecx, dword ptr ds : [public_6b6b180]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ds:[edi+0x204]
        push eax
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_6b6b184]
        mov ecx, dword ptr ds : [public_6b6b180]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ds:[edi+0x214]
        push eax
        lea ecx, ds:[esi+0x214]
        call dword ptr ds : [public_6b6b184]
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
        je public_6b429a0
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b428f1
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6b428f3
        public_6b428f1 : nop
        xor eax, eax
        public_6b428f3 : nop
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
        jbe public_6b429a0
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
        jbe public_6b429a0
        public_6b42980 : nop
        mov edx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6b42980
        public_6b429a0 : nop
        cmp dword ptr ds : [edi+0x278], ebx
        je public_6b42a80
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b429cd
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6b429cf
        public_6b429cd : nop
        xor eax, eax
        public_6b429cf : nop
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
        jbe public_6b42a80
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
        jbe public_6b42a80
        lea esp, ss:[esp]
        public_6b42a60 : nop
        mov edx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6b42a60
        public_6b42a80 : nop
        lea eax, ds:[edi+0x264]
        lea ebp, ds:[esi+0x264]
        push eax
        mov ecx, ebp
        call public_6b3a510
        mov ecx, ebp
        call public_6b3a4f0
        cmp eax, ebx
        je public_6b42aaa
        mov cl, byte ptr ds : [eax+8]
        mov byte ptr ds : [esi+0x260], cl
        jmp public_6b42ab0
        public_6b42aaa : nop
        mov byte ptr ds : [esi+0x260], bl
        public_6b42ab0 : nop
        lea ecx, ds:[edi+0x268]
        lea ebp, ds:[esi+0x268]
        cmp ebp, ecx
        je public_6b42b9a
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b42b4e
        lea ebx, ds:[ebx]
        public_6b42ae0 : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        je public_6b42afe
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6b42ae0
        public_6b42afe : nop
        cmp eax, edi
        je public_6b42b4e
        jmp public_6b42b08
        public_6b42b04 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6b42b08 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], eax
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x2C]
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
        jne public_6b42b04
        mov ecx, dword ptr ss : [esp+0x10]
        public_6b42b4e : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b42b9a
        public_6b42b58 : nop
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
        jne public_6b42b58
        public_6b42b9a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [ecx+0x28]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_6b42bb6
        mov ebp, eax
        public_6b42bb6 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_6b42bca
        mov dword ptr ds : [eax], esi
        public_6b42bca : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        public_6b42bd5 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6b426c9
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b42bec : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6b42690)
    }
}

#undef public_6b426c9
#undef public_6b426d0
#undef public_6b427ab
#undef public_6b427ad
#undef public_6b428f1
#undef public_6b428f3
#undef public_6b42980
#undef public_6b429a0
#undef public_6b429cd
#undef public_6b429cf
#undef public_6b42a60
#undef public_6b42a80
#undef public_6b42aaa
#undef public_6b42ab0
#undef public_6b42ae0
#undef public_6b42afe
#undef public_6b42b04
#undef public_6b42b08
#undef public_6b42b4e
#undef public_6b42b58
#undef public_6b42b9a
#undef public_6b42bb6
#undef public_6b42bca
#undef public_6b42bd5
#undef public_6b42bec
