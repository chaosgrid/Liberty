#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6cf0330);
CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d00830);
CLANG_FORWARD_PROC_SYMBOL(public_6d01110);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d07e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a880);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ed90);
CLANG_FORWARD_PROC_SYMBOL(public_6d4efb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f420);
CLANG_FORWARD_PROC_SYMBOL(public_6d54840);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);
CLANG_FORWARD_JUMP_SYMBOL(public_6d607d7);

#define public_6cefcd8 _public_6cefcd8
#define public_6cefcfe _public_6cefcfe
#define public_6cefe49 _public_6cefe49
#define public_6ceff40 _public_6ceff40
#define public_6ceff5f _public_6ceff5f
#define public_6cf0030 _public_6cf0030
#define public_6cf004b _public_6cf004b
#define public_6cf0079 _public_6cf0079
#define public_6cf00da _public_6cf00da
#define public_6cf00f7 _public_6cf00f7
#define public_6cf012a _public_6cf012a
#define public_6cf012c _public_6cf012c
#define public_6cf013f _public_6cf013f
#define public_6cf0239 _public_6cf0239

PROC_DECLARE(0x6cefb20, internal_6cefb20, public_6cefb20);
extern "C" NAKED register_t __cdecl internal_6cefb20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d607d7 @0x6cefb28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d607d7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x164
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x188]
        test edi, edi
        jbe public_6cf0239
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edi-1]
        cmp eax, ecx
        jae public_6cf0239
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cf0239
        mov esi, edi
        imul esi, 0x418
        mov eax, dword ptr ds : [esi+ecx-0x34]
        test eax, 0x3FFFFFFF
        lea ebx, ds:[esi+ecx-0x418]
        jne public_6cf0239
        mov eax, dword ptr ds : [ebx+0x3E8]
        test eax, 0x3FFFFFFF
        je public_6cf0239
        cmp dword ptr ss : [esp+0x184], eax
        jne public_6cf0239
        mov eax, dword ptr ds : [esi+ecx-0x38]
        push eax
        call public_6d00280
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        mov dword ptr ss : [esp+0x34], ebp
        je public_6cf0239
        mov ecx, ebx
        call public_6ce1090
        push edi
        mov ecx, ebp
        call public_6d07e20
        mov ecx, dword ptr ds : [public_6d90260]
        lea eax, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x70], edi
        mov edx, dword ptr ds : [esi+ecx-8]
        push eax
        push 6
        mov dword ptr ss : [esp+0x7C], edx
        call public_6d43650
        add esp, 8
        lea ecx, ss:[esp+0x88]
        call public_6cf0330
        xor ebp, ebp
        lea ecx, ss:[esp+0x168]
        mov dword ptr ss : [esp+0x17C], ebp
        call dword ptr ds : [public_6d643c4]
        mov dword ptr ss : [esp+0x16C], ebp
        mov dword ptr ss : [esp+0x170], ebp
        mov ecx, dword ptr ds : [public_6d90260]
        lea ecx, ds:[esi+ecx-0x418]
        mov dword ptr ss : [esp+0x17C], 1
        call public_6d4ed90
        push edi
        mov ecx, offset public_6d90260
        mov dword ptr ss : [esp+0x94], eax
        call public_6d54840
        mov edx, dword ptr ss : [esp+0x90]
        push edx
        mov dword ptr ss : [esp+0x164], eax
        call dword ptr ds : [public_6d643c0]
        mov ebx, eax
        mov eax, dword ptr ds : [ebx]
        add esp, 4
        mov ecx, ebx
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ebx+0x40]
        push ebp
        lea ecx, ss:[esp+0x40]
        push ecx
/*FIXUP push offset public_6d65f6c @0x6cefc8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65f6c
        push eax
        call dword ptr ds : [public_6d643bc]
        lea edx, ss:[esp+0xF0]
        push edx
        lea eax, ss:[esp+0xE8]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        push edi
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_6d00830
        mov eax, dword ptr ds : [public_6d8d758]
        add esp, 0x24
        cmp eax, ebp
        jne public_6cefcd8
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d758], eax
        public_6cefcd8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xE0]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_6d8d758]
        cmp eax, ebp
        jne public_6cefcfe
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d758], eax
        public_6cefcfe : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xD4]
        fsub dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0x3C], eax
        fld dword ptr ss : [esp+0xD8]
        mov eax, dword ptr ss : [esp+0x184]
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0xD8]
        fld dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ss : [esp+0xE0]
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x4C], ecx
        fstp dword ptr ss : [esp+0xDC]
        mov ecx, dword ptr ss : [esp+0xD8]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ss : [esp+0xEC]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ss : [esp+0xE4]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x6C], edx
        mov edx, dword ptr ss : [esp+0xE8]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        lea eax, ss:[esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0xF0]
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov ebp, dword ptr ss : [esp+0x184]
        jne public_6cefe49
        mov eax, dword ptr ss : [esp+0x160]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebp
        push edi
        call dword ptr ds : [edx+0x1C4]
        mov ecx, dword ptr ds : [public_6d90260]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov eax, dword ptr ds : [esi+ecx-0x100]
        push 0
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [public_6d643b8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push eax
        push ebp
        push edi
        call dword ptr ds : [edx+0x1D0]
        public_6cefe49 : nop
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x148], eax
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x140], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x144], edx
        mov dword ptr ss : [esp+0x8C], ebp
        mov dword ptr ss : [esp+0x134], edi
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x154], eax
        mov eax, dword ptr ds : [public_6d90260]
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14C], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x150], edx
        mov ecx, dword ptr ds : [esi+eax-0x100]
        mov dword ptr ss : [esp+0x98], ecx
        mov ecx, dword ptr ds : [esi+eax-0x18C]
        mov dword ptr ss : [esp+0x9C], ecx
        mov edx, dword ptr ds : [esi+eax-0x188]
        mov dword ptr ss : [esp+0xA0], edx
        mov ecx, dword ptr ds : [esi+eax-0x184]
        mov dword ptr ss : [esp+0xA4], ecx
        mov edx, dword ptr ds : [esi+eax-0x180]
        mov dword ptr ss : [esp+0xA8], edx
        mov edx, dword ptr ds : [esi+eax-0x15C]
        xor ebp, ebp
        xor ecx, ecx
        cmp edx, ebp
        mov dword ptr ss : [esp+0xCC], edx
        jle public_6ceff5f
        lea ebp, ds:[esi+eax-0x17C]
        lea edx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0x10], ebp
        lea esp, ss:[esp]
        public_6ceff40 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [edx], ebp
        add dword ptr ss : [esp+0x10], 4
        mov ebp, dword ptr ss : [esp+0xCC]
        inc ecx
        add edx, 4
        cmp ecx, ebp
        jl public_6ceff40
        xor ebp, ebp
        public_6ceff5f : nop
        lea eax, ds:[esi+eax-0x154]
        push eax
        call dword ptr ds : [public_6d643b4]
        mov ecx, dword ptr ds : [public_6d90260]
        add esp, 4
        lea ecx, ds:[esi+ecx-0x418]
        mov dword ptr ss : [esp+0xD0], eax
        call public_6d4ed00
        fmul dword ptr ds : [ebx+0x1C]
        call public_6d60150
        mov edx, dword ptr ds : [public_6d90260]
        lea ecx, ds:[esi+edx-0x418]
        mov dword ptr ss : [esp+0xF0], eax
        call public_6d4efb0
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d643b0]
        push eax
        lea ecx, ss:[esp+0xFC]
        mov byte ptr ss : [esp+0x180], 2
        call dword ptr ds : [public_6d643ac]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x184], 1
        call dword ptr ds : [public_6d64238]
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [public_6d90260]
        add esp, 4
        lea ecx, ds:[esi+eax-0x418]
        call public_6d4f420
        lea ecx, ss:[esp+0x108]
        cmp ecx, eax
        je public_6cf0079
        mov edx, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x10], eax
        je public_6cf004b
        lea ebx, ds:[ebx]
        public_6cf0030 : nop
        cmp ebp, dword ptr ss : [esp+0x10]
        je public_6cf004b
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        mov ebp, dword ptr ss : [ebp]
        jne public_6cf0030
        public_6cf004b : nop
        push edx
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_6d643a8]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x28]
        push edx
        push ebp
        push eax
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_6d643a4]
        xor ebp, ebp
        public_6cf0079 : nop
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x9C]
        push edx
        call dword ptr ds : [public_6d643a0]
        mov ecx, dword ptr ds : [public_6d65bb8]
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 8
        lea edx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x158], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x140], eax
        mov dword ptr ss : [esp+0x170], ebp
        call public_6d0a880
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6d6439c]
        cmp dword ptr ss : [esp+0x24], ebp
        je public_6cf00da
        mov ecx, dword ptr ss : [esp+0x10]
        call public_6d01110
        public_6cf00da : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cf013f
        mov eax, dword ptr ds : [public_6d8d758]
        cmp eax, ebp
        jne public_6cf00f7
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d758], eax
        public_6cf00f7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xE0]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_6cf012a
        add eax, 0xC
        cmp eax, ebp
        je public_6cf012a
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebp
        je public_6cf012a
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 1
        cmp al, 1
        je public_6cf012c
        public_6cf012a : nop
        xor ecx, ecx
        public_6cf012c : nop
        mov edx, dword ptr ds : [ecx]
        push ebp
        lea eax, ss:[esp+0x4C]
        push eax
        lea eax, ss:[esp+0xDC]
        push eax
        call dword ptr ds : [edx+0x7C]
        public_6cf013f : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [esi+edx-0x34], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x7C], edi
        call public_6d06cd0
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push 0x36
        mov dword ptr ss : [esp+0x88], eax
        mov dword ptr ss : [esp+0x8C], ecx
        call public_6d43650
        add esp, 8
        mov dword ptr ss : [esp+0x88], offset public_6d65f68
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x180], 4
        call dword ptr ds : [public_6d64398]
        mov ecx, dword ptr ss : [esp+0x118]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_6d64394]
        mov ecx, dword ptr ss : [esp+0x118]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x110]
        add esp, 4
        mov dword ptr ss : [esp+0x118], ebp
        mov dword ptr ss : [esp+0x11C], ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ss:[esp+0x114]
        mov byte ptr ss : [esp+0x188], 3
        call dword ptr ds : [public_6d643a8]
        mov eax, dword ptr ss : [esp+0x10C]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x100]
        push ecx
        mov dword ptr ss : [esp+0x114], ebp
        mov dword ptr ss : [esp+0x118], ebp
        call public_6d5ffb0
        add esp, 8
        public_6cf0239 : nop
        mov ecx, dword ptr ss : [esp+0x174]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x170
        ret 8
        UNREACHABLE_TRAP(0x6cefb20)
    }
}

#undef public_6cefcd8
#undef public_6cefcfe
#undef public_6cefe49
#undef public_6ceff40
#undef public_6ceff5f
#undef public_6cf0030
#undef public_6cf004b
#undef public_6cf0079
#undef public_6cf00da
#undef public_6cf00f7
#undef public_6cf012a
#undef public_6cf012c
#undef public_6cf013f
#undef public_6cf0239
