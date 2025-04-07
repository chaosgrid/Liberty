#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_62802d0);
CLANG_FORWARD_PROC_SYMBOL(public_62814b0);
CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_6284bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6285740);
CLANG_FORWARD_PROC_SYMBOL(public_62857f0);
CLANG_FORWARD_PROC_SYMBOL(public_62858c0);
CLANG_FORWARD_PROC_SYMBOL(public_628a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_628c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f700);
CLANG_FORWARD_PROC_SYMBOL(public_62aee50);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d70);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630e710);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393403);

#define public_628a14b _public_628a14b
#define public_628a16d _public_628a16d
#define public_628a16f _public_628a16f
#define public_628a197 _public_628a197
#define public_628a199 _public_628a199
#define public_628a260 _public_628a260
#define public_628a289 _public_628a289
#define public_628a291 _public_628a291
#define public_628a2d0 _public_628a2d0
#define public_628a2f6 _public_628a2f6
#define public_628a312 _public_628a312
#define public_628a320 _public_628a320
#define public_628a350 _public_628a350
#define public_628a37b _public_628a37b
#define public_628a381 _public_628a381
#define public_628a384 _public_628a384
#define public_628a390 _public_628a390
#define public_628a3ba _public_628a3ba

PROC_DECLARE(0x628a0c0, internal_628a0c0, public_628a0c0);
extern "C" NAKED register_t __cdecl internal_628a0c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393403 @0x628a0c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393403
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_62aee50
        mov ebp, dword ptr ss : [esp+0xAC]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        push eax
        call dword ptr ds : [ecx+0x70]
        mov ebx, dword ptr ss : [esp+0xA4]
        mov edi, dword ptr ds : [esi]
        mov ecx, ebx
        call public_6262d50
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov ecx, ebx
        call public_6262d50
        mov ecx, eax
        call public_62f0d70
        mov edi, eax
        test edi, edi
        jne public_628a14b
        call public_62802d0
        mov edi, eax
        public_628a14b : nop
        push 0xC
        mov dword ptr ds : [esi+0x58], edi
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_628a16d
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax], offset public_639c258
        jmp public_628a16f
        public_628a16d : nop
        xor eax, eax
        public_628a16f : nop
        push 0x14
        mov dword ptr ds : [esi+0x5C], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x9C], edi
        je public_628a197
        push esi
        mov ecx, eax
        call public_62814b0
        jmp public_628a199
        public_628a197 : nop
        xor eax, eax
        public_628a199 : nop
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x84], eax
        call public_63486c0
        mov dword ptr ss : [esp+0x3C], edi
        mov edi, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ds : [edi+0x18]
        fld dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edi+4]
        fld dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, eax
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x78], ecx
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0xA0], 1
        mov dword ptr ss : [esp+0x78], eax
        call public_6348720
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_628a260
        fld dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [edi+0x20]
        fld dword ptr ds : [edi+0x24]
        mov ecx, eax
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], 0
        public_628a260 : nop
        lea edi, ds:[ebx+0x50]
        push edi
        mov ecx, offset public_63fc098
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_628a289
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_628a289
        lea eax, ss:[esp+0x10]
        jmp public_628a291
        public_628a289 : nop
        mov dword ptr ss : [esp+0x24], ecx
        lea eax, ss:[esp+0x24]
        public_628a291 : nop
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        lea ecx, ds:[eax+0x10]
        call public_628c7b0
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_628a312
        mov edi, edi
        public_628a2d0 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        cmp eax, ebx
        jne public_628a2f6
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x7C]
        public_628a2f6 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_628a2d0
        public_628a312 : nop
        mov edi, dword ptr ds : [ebx+0x68]
        cmp edi, dword ptr ds : [ebx+0x6C]
        je public_628a390
        lea ebx, ds:[ebx]
        public_628a320 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        push ebp
        call public_630e710
        add esp, 8
        test al, al
        je public_628a381
        mov eax, dword ptr ds : [esi+0x6C]
        push edi
        lea ecx, ds:[esi+0x64]
        push 1
        push eax
        call public_628f700
        mov ecx, dword ptr ds : [ebx+0x6C]
        lea eax, ds:[edi+0xC]
        cmp eax, ecx
        je public_628a37b
        mov edx, edi
        mov dword ptr ss : [esp+0x10], edx
        public_628a350 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        add eax, 0xC
        add ebx, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_628a350
        mov ebx, dword ptr ss : [esp+0xA4]
        public_628a37b : nop
        add dword ptr ds : [ebx+0x6C], 0xFFFFFFF4
        jmp public_628a384
        public_628a381 : nop
        add edi, 0xC
        public_628a384 : nop
        cmp edi, dword ptr ds : [ebx+0x6C]
        mov ebp, dword ptr ss : [esp+0xA8]
        jne public_628a320
        public_628a390 : nop
        push esi
        push esi
        call public_6284bc0
        push ebx
        call public_62858c0
        add esp, 0xC
        test al, al
        je public_628a3ba
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_628a3ba
        mov ecx, dword ptr ds : [esi+0x84]
        push 1
        push 1
        call public_6281510
        public_628a3ba : nop
        lea eax, ss:[esp+0x88]
        push ebx
        push eax
        call public_62857f0
        lea ecx, ss:[esp+0x90]
        push ecx
        push esi
        call public_6285740
        add esp, 0x10
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call public_6348710
        mov ecx, dword ptr ss : [esp+0x94]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x628a0c0)
    }
}

#undef public_628a14b
#undef public_628a16d
#undef public_628a16f
#undef public_628a197
#undef public_628a199
#undef public_628a260
#undef public_628a289
#undef public_628a291
#undef public_628a2d0
#undef public_628a2f6
#undef public_628a312
#undef public_628a320
#undef public_628a350
#undef public_628a37b
#undef public_628a381
#undef public_628a384
#undef public_628a390
#undef public_628a3ba
