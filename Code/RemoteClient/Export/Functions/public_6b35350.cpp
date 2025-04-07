#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b386b0);
CLANG_FORWARD_PROC_SYMBOL(public_6b386e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b38770);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a820);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b42690);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a64b);

#define public_6b353b0 _public_6b353b0
#define public_6b353c1 _public_6b353c1
#define public_6b353c7 _public_6b353c7
#define public_6b354a1 _public_6b354a1
#define public_6b354a3 _public_6b354a3
#define public_6b35617 _public_6b35617
#define public_6b35619 _public_6b35619
#define public_6b356c8 _public_6b356c8
#define public_6b356e5 _public_6b356e5
#define public_6b35706 _public_6b35706
#define public_6b35708 _public_6b35708
#define public_6b357b7 _public_6b357b7
#define public_6b357d4 _public_6b357d4
#define public_6b357e8 _public_6b357e8
#define public_6b35813 _public_6b35813
#define public_6b35857 _public_6b35857
#define public_6b35892 _public_6b35892
#define public_6b358b8 _public_6b358b8
#define public_6b358d0 _public_6b358d0
#define public_6b358d8 _public_6b358d8
#define public_6b35901 _public_6b35901
#define public_6b3590c _public_6b3590c
#define public_6b3594f _public_6b3594f
#define public_6b35990 _public_6b35990
#define public_6b359be _public_6b359be
#define public_6b359c7 _public_6b359c7
#define public_6b359e1 _public_6b359e1
#define public_6b359ea _public_6b359ea
#define public_6b35a5e _public_6b35a5e
#define public_6b35a6a _public_6b35a6a
#define public_6b35a89 _public_6b35a89
#define public_6b35a94 _public_6b35a94
#define public_6b35aa0 _public_6b35aa0
#define public_6b35acd _public_6b35acd
#define public_6b35ad9 _public_6b35ad9

PROC_DECLARE(0x6b35350, internal_6b35350, public_6b35350);
extern "C" NAKED register_t __cdecl internal_6b35350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a64b @0x6b35352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a64b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 3
        push 2
        mov dword ptr ss : [esp+0x28], esi
        call public_6b3b480
        test eax, eax
        jne public_6b35ad9
        mov cl, byte ptr ss : [esp+0x48]
        push ebx
        push ebp
        push edi
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [esp+0x38], cl
        push ebx
        lea ecx, ss:[esp+0x3C]
        call public_6b386b0
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        xor eax, eax
        mov edi, edi
        public_6b353b0 : nop
        cmp eax, ebx
        jne public_6b353c1
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6b353c7
        public_6b353c1 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        public_6b353c7 : nop
        cmp eax, ebx
        je public_6b3594f
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        je public_6b3590c
        push 0x27C
        call public_6b6a134
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x48], 1
        je public_6b354a1
        mov dl, byte ptr ss : [esp+0x54]
        lea ecx, ds:[edi+0x204]
        mov byte ptr ds : [edi], 0
        mov byte ptr ds : [edi+0x200], 0
        mov byte ptr ds : [edi+0x201], 0
        push ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6b6b178]
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ds:[edi+0x214]
        mov byte ptr ss : [esp+0x4C], 2
        call dword ptr ds : [public_6b6b17c]
        mov dword ptr ds : [edi+0x224], ebx
        mov dword ptr ds : [edi+0x244], ebx
        mov dword ptr ds : [edi+0x248], ebx
        mov dword ptr ds : [edi+0x24C], ebx
        mov dword ptr ds : [edi+0x250], ebx
        mov dword ptr ds : [edi+0x254], ebx
        mov dword ptr ds : [edi+0x258], ebx
        mov dword ptr ds : [edi+0x25C], ebx
        mov byte ptr ds : [edi+0x260], 0
        mov dword ptr ds : [edi+0x264], ebx
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ds:[edi+0x268]
        mov byte ptr ss : [esp+0x4C], 4
        call dword ptr ds : [public_6b6b040]
        mov dword ptr ds : [edi+0x274], ebx
        mov dword ptr ds : [edi+0x278], ebx
        mov dword ptr ds : [edi+0x228], ebx
        mov dword ptr ds : [edi+0x22C], ebx
        jmp public_6b354a3
        public_6b354a1 : nop
        xor edi, edi
        public_6b354a3 : nop
        push esi
        mov ecx, edi
        mov byte ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_6b6b044]
        mov dl, byte ptr ds : [esi+0x200]
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+0x200], dl
        mov cl, byte ptr ds : [esi+0x201]
        mov edx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+0x201], cl
        mov eax, dword ptr ds : [public_6b6b180]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push ebx
        lea edx, ds:[esi+0x204]
        push edx
        lea ecx, ds:[eax+0x204]
        call dword ptr ds : [public_6b6b184]
        mov ecx, dword ptr ds : [public_6b6b180]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        push ebx
        lea eax, ds:[esi+0x214]
        push eax
        add ecx, 0x214
        call dword ptr ds : [public_6b6b184]
        mov edx, dword ptr ds : [esi+0x224]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x224], edx
        mov ecx, dword ptr ds : [esi+0x228]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x228], ecx
        mov eax, dword ptr ds : [esi+0x22C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x22C], eax
        mov edx, dword ptr ds : [esi+0x230]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x230], edx
        mov ecx, dword ptr ds : [esi+0x234]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x234], ecx
        mov eax, dword ptr ds : [esi+0x260]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x238], eax
        mov edx, dword ptr ds : [esi+0x26C]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x244], edx
        mov ecx, dword ptr ds : [esi+0x270]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x248], ecx
        mov eax, dword ptr ds : [esi+0x264]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x23C], eax
        mov edx, dword ptr ds : [esi+0x268]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x240], edx
        mov ecx, dword ptr ds : [esi+0x244]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x250], ecx
        mov eax, dword ptr ds : [esi+0x238]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x254], eax
        mov edx, dword ptr ds : [esi+0x240]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x258], edx
        mov ecx, dword ptr ds : [esi+0x23C]
        mov edx, dword ptr ss : [esp+0x14]
        push 0x18
        mov dword ptr ds : [edx+0x25C], ecx
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b35617
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6b35619
        public_6b35617 : nop
        xor eax, eax
        public_6b35619 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x274], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x27C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x280]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x2A4]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6b356e5
        lea ecx, ds:[eax*4]
        push ecx
        call public_6b6a134
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x274]
        mov dword ptr ds : [ecx+0x14], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0x274]
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 4
        xor ecx, ecx
        cmp edx, ebx
        jbe public_6b356e5
        lea edx, ds:[esi+0x284]
        public_6b356c8 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax+ecx*4], edi
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x274]
        mov edi, dword ptr ds : [eax+0x10]
        inc ecx
        add edx, 4
        cmp ecx, edi
        jb public_6b356c8
        public_6b356e5 : nop
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b35706
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6b35708
        public_6b35706 : nop
        xor eax, eax
        public_6b35708 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x278], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2AC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2A8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2B0]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2B4]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2D8]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6b357d4
        lea ecx, ds:[eax*4]
        push ecx
        call public_6b6a134
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x278]
        mov dword ptr ds : [ecx+0x14], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0x278]
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 4
        xor ecx, ecx
        cmp edx, ebx
        jbe public_6b357d4
        lea edx, ds:[esi+0x2B8]
        public_6b357b7 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax+ecx*4], edi
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x278]
        mov edi, dword ptr ds : [eax+0x10]
        inc ecx
        add edx, 4
        cmp ecx, edi
        jb public_6b357b7
        public_6b357d4 : nop
        mov eax, dword ptr ds : [esi+0x24C]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6b35892
        public_6b357e8 : nop
        push 0x18
        call public_6b6a134
        add esp, 4
        cmp eax, ebx
        je public_6b35813
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov word ptr ds : [eax+0xC], bx
        mov word ptr ds : [eax+0x10], bx
        mov dword ptr ds : [eax+0x14], ebx
        mov byte ptr ds : [eax+0xE], 0
        mov byte ptr ds : [eax+0xF], 0
        mov ebx, eax
        public_6b35813 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ebx+4], edx
        fld dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [ebx+8]
        mov ax, word ptr ss : [ebp+0xA]
        mov word ptr ds : [ebx+0xC], ax
        mov cl, byte ptr ss : [ebp+0x14]
        mov byte ptr ds : [ebx+0xE], cl
        mov dl, byte ptr ss : [ebp+0x20]
        mov byte ptr ds : [ebx+0xF], dl
        mov edi, dword ptr ss : [ebp+0x10]
        xor eax, eax
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        push ecx
        call public_6b6a134
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        add esp, 4
        mov edx, eax
        public_6b35857 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6b35857
        mov edi, dword ptr ss : [ebp+0x10]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        mov word ptr ds : [ebx+0x10], cx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        lea ecx, ds:[eax+0x264]
        call public_6b3a820
        mov ebp, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x20]
        xor ebx, ebx
        cmp ebp, eax
        jne public_6b357e8
        public_6b35892 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        add esi, 0x254
        lea ebp, ds:[ecx+0x268]
        cmp ebp, esi
        je public_6b3590c
        mov edi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], ecx
        je public_6b358d0
        public_6b358b8 : nop
        cmp esi, ecx
        je public_6b358d0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6b358b8
        public_6b358d0 : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        je public_6b35901
        public_6b358d8 : nop
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6b386e0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6b6b048]
        cmp dword ptr ss : [esp+0x20], edi
        jne public_6b358d8
        mov ecx, dword ptr ss : [esp+0x24]
        public_6b35901 : nop
        push ecx
        push esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6b6b074]
        public_6b3590c : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6b386b0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6b38770
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x30]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x18]
        jmp public_6b353b0
        public_6b3594f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x34]
        push edx
        call public_6b42690
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6b35a94
        lea ebx, ds:[ebx]
        public_6b35990 : nop
        mov edi, dword ptr ss : [ebp+8]
        cmp edi, ebx
        je public_6b35a89
        mov dword ptr ss : [esp+0x54], edi
        mov esi, dword ptr ds : [edi+0x274]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x48], 7
        je public_6b359c7
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6b359be
        push eax
        call public_6b6a092
        add esp, 4
        public_6b359be : nop
        push esi
        call public_6b6a092
        add esp, 4
        public_6b359c7 : nop
        mov esi, dword ptr ds : [edi+0x278]
        cmp esi, ebx
        je public_6b359ea
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6b359e1
        push eax
        call public_6b6a092
        add esp, 4
        public_6b359e1 : nop
        push esi
        call public_6b6a092
        add esp, 4
        public_6b359ea : nop
        mov eax, dword ptr ds : [edi+0x26C]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x268]
        push eax
        push ecx
        lea eax, ss:[esp+0x58]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6b6b0a8]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6b6a092
        add esp, 4
        lea ecx, ds:[edi+0x264]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ss : [esp+0x48], 6
        call public_6b3a450
        push 1
        lea ecx, ds:[edi+0x214]
        mov byte ptr ss : [esp+0x4C], 5
        call dword ptr ds : [public_6b6b178]
        mov eax, dword ptr ds : [edi+0x208]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x48], 0
        je public_6b35a6a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6b35a5e
        cmp cl, 0xFF
        je public_6b35a5e
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6b35a6a
        public_6b35a5e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6b6a092
        add esp, 4
        public_6b35a6a : nop
        push edi
        mov dword ptr ds : [edi+0x208], ebx
        mov dword ptr ds : [edi+0x20C], ebx
        mov dword ptr ds : [edi+0x210], ebx
        call public_6b6a092
        mov eax, dword ptr ss : [esp+0x3C]
        add esp, 4
        public_6b35a89 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6b35990
        public_6b35a94 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6b35acd
        lea esp, ss:[esp]
        public_6b35aa0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x3C], ecx
        jne public_6b35aa0
        mov eax, dword ptr ss : [esp+0x38]
        public_6b35acd : nop
        push eax
        call public_6b6a092
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        public_6b35ad9 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x6b35350)
    }
}

#undef public_6b353b0
#undef public_6b353c1
#undef public_6b353c7
#undef public_6b354a1
#undef public_6b354a3
#undef public_6b35617
#undef public_6b35619
#undef public_6b356c8
#undef public_6b356e5
#undef public_6b35706
#undef public_6b35708
#undef public_6b357b7
#undef public_6b357d4
#undef public_6b357e8
#undef public_6b35813
#undef public_6b35857
#undef public_6b35892
#undef public_6b358b8
#undef public_6b358d0
#undef public_6b358d8
#undef public_6b35901
#undef public_6b3590c
#undef public_6b3594f
#undef public_6b35990
#undef public_6b359be
#undef public_6b359c7
#undef public_6b359e1
#undef public_6b359ea
#undef public_6b35a5e
#undef public_6b35a6a
#undef public_6b35a89
#undef public_6b35a94
#undef public_6b35aa0
#undef public_6b35acd
#undef public_6b35ad9
