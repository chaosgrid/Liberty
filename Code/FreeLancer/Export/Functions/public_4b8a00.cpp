#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_4b8a00);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_585070);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);
CLANG_FORWARD_PROC_SYMBOL(public_585a90);
CLANG_FORWARD_PROC_SYMBOL(public_586900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd32f);

#define public_4b8a40 _public_4b8a40
#define public_4b8a5b _public_4b8a5b
#define public_4b8a66 _public_4b8a66
#define public_4b8a80 _public_4b8a80
#define public_4b8aa7 _public_4b8aa7
#define public_4b8ab9 _public_4b8ab9
#define public_4b8ac9 _public_4b8ac9
#define public_4b8c1a _public_4b8c1a
#define public_4b8c1c _public_4b8c1c
#define public_4b8c87 _public_4b8c87
#define public_4b8cc4 _public_4b8cc4
#define public_4b8d6b _public_4b8d6b
#define public_4b8da6 _public_4b8da6
#define public_4b8e59 _public_4b8e59
#define public_4b8e85 _public_4b8e85
#define public_4b8ea0 _public_4b8ea0
#define public_4b8f83 _public_4b8f83
#define public_4b900a _public_4b900a
#define public_4b9017 _public_4b9017
#define public_4b904f _public_4b904f
#define public_4b90ad _public_4b90ad
#define public_4b90cb _public_4b90cb
#define public_4b90db _public_4b90db
#define public_4b911f _public_4b911f
#define public_4b9130 _public_4b9130
#define public_4b917b _public_4b917b
#define public_4b91a0 _public_4b91a0
#define public_4b91d6 _public_4b91d6
#define public_4b9200 _public_4b9200
#define public_4b9235 _public_4b9235

PROC_DECLARE(0x4b8a00, internal_4b8a00, public_4b8a00);
extern "C" NAKED register_t __cdecl internal_4b8a00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd32f @0x4b8a08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd32f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x3D0], eax
        mov eax, dword ptr ds : [esi+0x3CC]
        xor ebx, ebx
        xor ebp, ebp
        cmp eax, ebx
        push edi
        jle public_4b8a80
        lea edi, ds:[esi+0x340]
        lea esp, ss:[esp]
        public_4b8a40 : nop
        cmp ebp, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [edi-0xC]
        mov edx, dword ptr ds : [ecx]
        push ebx
        jne public_4b8a5b
        push 1
        push 0xC
        call dword ptr ds : [edx+0xA8]
        push ebx
        push 1
        jmp public_4b8a66
        public_4b8a5b : nop
        push ebx
        push 0xC
        call dword ptr ds : [edx+0xA8]
        push ebx
        push ebx
        public_4b8a66 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x3CC]
        inc ebp
        add edi, 4
        cmp ebp, eax
        jl public_4b8a40
        public_4b8a80 : nop
        mov eax, dword ptr ds : [esi+0x3D0]
        mov ecx, dword ptr ds : [esi+0x3D8]
        mov edi, 0xFFFFFFFE
        cmp eax, edi
        jne public_4b8aa7
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 0xC
        call dword ptr ds : [edx+0xA8]
        push ebx
        push 1
        jmp public_4b8ab9
        public_4b8aa7 : nop
        cmp ecx, ebx
        je public_4b8ac9
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0xC
        call dword ptr ds : [edx+0xA8]
        push ebx
        push ebx
        public_4b8ab9 : nop
        mov ecx, dword ptr ds : [esi+0x3DC]
        mov eax, dword ptr ds : [ecx]
        push 0xC
        call dword ptr ds : [eax+0xA8]
        public_4b8ac9 : nop
        mov ecx, dword ptr ds : [esi+0x370]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x38C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x384]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x388]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x394]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x398]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x39C]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x3D0]
        xor ebp, ebp
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_4b8f83
        mov ecx, dword ptr ss : [esp+0x64]
        mov ebx, dword ptr ds : [esi+ecx*4+0x3B4]
        test ebx, ebx
        je public_4b8c1a
        mov eax, dword ptr ds : [ebx+0x90]
        push eax
        call dword ptr ds : [public_5c6088]
        mov edx, dword ptr ds : [eax+0x54]
        push edx
        call dword ptr ds : [public_5c61fc]
        mov ecx, dword ptr ds : [esi+0x370]
        add esp, 8
        push ebp
        mov edi, eax
        push 1
        lea eax, ds:[edi+8]
        push eax
        call public_585a90
        mov ecx, dword ptr ds : [esi+0x370]
        add ebx, 0x94
        push ebx
        call public_5850f0
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+0x384]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [esi+eax*4+0x3EC]
        mov eax, dword ptr ds : [eax*4+public_611f78]
        mov ecx, dword ptr ds : [esi+0x388]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0xF0]
        mov edx, dword ptr ds : [edi+0xF4]
        mov ebp, dword ptr ds : [edi+0xEC]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        public_4b8c1a : nop
        xor ebx, ebx
        public_4b8c1c : nop
        mov al, byte ptr ss : [esp+0x64]
        push 0xC
        mov byte ptr ss : [esp+0x40], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x60], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x5C], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov edi, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], edi
        add edi, 4
        push 0xC
        mov byte ptr ss : [esp+0x60], 2
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], ecx
        jne public_4b8c87
        mov ebx, eax
        public_4b8c87 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x64]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        xor ebx, ebx
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x5C], 1
        je public_4b8cc4
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x64], ebx
        public_4b8cc4 : nop
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x5C], 0
        call dword ptr ds : [public_5c62b4]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push ebp
        call public_57da40
        mov edi, dword ptr ds : [esi+0x374]
        add esp, 8
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, edi
        call public_57b3e0
        mov al, byte ptr ss : [esp+0x64]
        push 0xC
        mov byte ptr ss : [esp+0x34], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x60], 3
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x5C], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov edi, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ds : [edi+4]
        mov ebx, edi
        add edi, 4
        push 0xC
        mov byte ptr ss : [esp+0x60], 5
        call public_5b7e84
        mov dword ptr ds : [eax], ebx
        xor ebx, ebx
        add esp, 4
        cmp ebp, ebx
        jne public_4b8d6b
        mov ebp, eax
        public_4b8d6b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x64]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x5C], 4
        je public_4b8da6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x64], ebx
        public_4b8da6 : nop
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x5C], 3
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        call public_57da40
        mov edi, dword ptr ds : [esi+0x378]
        add esp, 8
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, edi
        call public_57b3e0
        push ebx
        mov ecx, edi
        call public_5799f0
        mov al, byte ptr ss : [esp+0x64]
        push 0xC
        mov byte ptr ss : [esp+0x28], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x60], 6
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x5C], 7
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x60], 8
        mov ebx, eax
        call public_5b7e84
        mov dword ptr ds : [eax], ebx
        xor ebx, ebx
        add esp, 4
        cmp ebp, ebx
        jne public_4b8e59
        mov ebp, eax
        public_4b8e59 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], edi
        cmp edi, ebx
        mov ebp, dword ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x5C], 9
        je public_4b8e85
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi], eax
        public_4b8e85 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        inc ecx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x2C], ecx
        mov byte ptr ss : [esp+0x5C], 7
        je public_4b8ea0
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_4b8ea0 : nop
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x5C], 6
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        call public_57da40
        mov edi, dword ptr ds : [esi+0x37C]
        add esp, 8
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_57b3e0
        push ebx
        mov ecx, edi
        call public_5799f0
        mov ecx, dword ptr ds : [esi+0x370]
        lea eax, ss:[esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x4C], 0x432294BC
        mov dword ptr ss : [esp+0x50], 0xC28F49D5
        mov dword ptr ss : [esp+0x54], 0
        call public_586900
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [esi+0x370]
        call public_585070
        mov ecx, dword ptr ds : [esi+0x3D0]
        mov eax, dword ptr ds : [esi+ecx*4+0x3FC]
        cmp eax, 1
        jne public_4b900a
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66dc60 @0x4b8f45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x61B
        push eax
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x3D0]
        mov edx, dword ptr ds : [esi+ecx*4+0x408]
        push edx
/*FIXUP push offset public_66dc60 @0x4b8f63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4b8f68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        add esp, 0x1C
        push ebx
/*FIXUP push offset public_66fc60 @0x4b8f77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        jmp public_4b9017
        public_4b8f83 : nop
        call public_4c3e10
        push eax
        call dword ptr ds : [public_5c61fc]
        mov ecx, dword ptr ds : [esi+0x370]
        add esp, 4
        push ebx
        mov edi, eax
        push 1
        lea eax, ds:[edi+8]
        push eax
        call public_585a90
        call public_4c4060
        mov ecx, dword ptr ds : [esi+0x370]
        push eax
        call public_5850f0
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+0x384]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x3E8]
        mov eax, dword ptr ds : [eax*4+public_611f78]
        mov ecx, dword ptr ds : [esi+0x388]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0xF0]
        mov edx, dword ptr ds : [edi+0xF4]
        mov ebp, dword ptr ds : [edi+0xEC]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        jmp public_4b8c1c
        public_4b900a : nop
        cmp eax, 2
        push ebx
        jne public_4b904f
        push 0x61C
        push 0x1E
        public_4b9017 : nop
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        push ebx
        push 1
        jmp public_4b90cb
        public_4b904f : nop
        mov eax, dword ptr ds : [esi+ecx*4+0x3A8]
        cmp eax, dword ptr ds : [esi+0x3A4]
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ds : [ecx]
        jle public_4b90ad
        push 0x49A
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x38C]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        jmp public_4b90db
        public_4b90ad : nop
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 1
        call dword ptr ds : [eax+0xA8]
        push ebx
        push ebx
        public_4b90cb : nop
        mov ecx, dword ptr ds : [esi+0x38C]
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4b90db : nop
        cmp dword ptr ds : [esi+0x3D0], 0xFFFFFFFE
        jne public_4b911f
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x38C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov esi, dword ptr ds : [esi+0x3A0]
        mov eax, dword ptr ds : [esi]
        push ebx
        push 1
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        public_4b911f : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov byte ptr ss : [esp+0x5C], 3
        mov ebp, eax
        je public_4b917b
        public_4b9130 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push ecx
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x6C], eax
        call public_53ab20
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push ebx
        lea ecx, ds:[esi+8]
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x2C], ecx
        jne public_4b9130
        mov eax, dword ptr ss : [esp+0x28]
        public_4b917b : nop
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        mov byte ptr ss : [esp+0x5C], 0
        mov ebp, eax
        je public_4b91d6
        lea ecx, ds:[ecx]
        public_4b91a0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push ebx
        lea ecx, ds:[esi+8]
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x38], ecx
        jne public_4b91a0
        mov eax, dword ptr ss : [esp+0x34]
        public_4b91d6 : nop
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        mov ebx, eax
        je public_4b9235
        nop 
        lea esp, ss:[esp]
        public_4b9200 : nop
        mov esi, edi
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x44], ecx
        jne public_4b9200
        mov eax, dword ptr ss : [esp+0x40]
        public_4b9235 : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x4b8a00)
    }
}

#undef public_4b8a40
#undef public_4b8a5b
#undef public_4b8a66
#undef public_4b8a80
#undef public_4b8aa7
#undef public_4b8ab9
#undef public_4b8ac9
#undef public_4b8c1a
#undef public_4b8c1c
#undef public_4b8c87
#undef public_4b8cc4
#undef public_4b8d6b
#undef public_4b8da6
#undef public_4b8e59
#undef public_4b8e85
#undef public_4b8ea0
#undef public_4b8f83
#undef public_4b900a
#undef public_4b9017
#undef public_4b904f
#undef public_4b90ad
#undef public_4b90cb
#undef public_4b90db
#undef public_4b911f
#undef public_4b9130
#undef public_4b917b
#undef public_4b91a0
#undef public_4b91d6
#undef public_4b9200
#undef public_4b9235
