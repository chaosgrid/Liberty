#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_45a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4cc880);
CLANG_FORWARD_PROC_SYMBOL(public_4eada0);
CLANG_FORWARD_PROC_SYMBOL(public_4ebf70);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5beea3);

#define public_4ebff7 _public_4ebff7
#define public_4ec093 _public_4ec093
#define public_4ec120 _public_4ec120
#define public_4ec144 _public_4ec144
#define public_4ec171 _public_4ec171
#define public_4ec18f _public_4ec18f
#define public_4ec1a8 _public_4ec1a8
#define public_4ec1bf _public_4ec1bf
#define public_4ec1d4 _public_4ec1d4
#define public_4ec1ee _public_4ec1ee
#define public_4ec208 _public_4ec208
#define public_4ec222 _public_4ec222
#define public_4ec23d _public_4ec23d
#define public_4ec280 _public_4ec280
#define public_4ec286 _public_4ec286
#define public_4ec28c _public_4ec28c
#define public_4ec2c8 _public_4ec2c8
#define public_4ec31c _public_4ec31c
#define public_4ec354 _public_4ec354
#define public_4ec356 _public_4ec356
#define public_4ec38d _public_4ec38d
#define public_4ec3b6 _public_4ec3b6
#define public_4ec3ba _public_4ec3ba
#define public_4ec3e4 _public_4ec3e4

PROC_DECLARE(0x4ebf70, internal_4ebf70, public_4ebf70);
extern "C" NAKED register_t __cdecl internal_4ebf70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5beea3 @0x4ebf72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5beea3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        call public_54baf0
        mov ecx, dword ptr ds : [edi+0x368]
        xor esi, esi
        cmp ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_4ec3e4
        cmp eax, esi
        je public_4ec3e4
        add eax, 0xC
        cmp eax, esi
        je public_4ec3e4
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x30], ecx
        je public_4ec3e4
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4ec3e4
        call dword ptr ds : [public_5c6348]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_4ebff7
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        public_4ebff7 : nop
        push 0xB50
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB60
        call public_421ed0
        add esp, 0x14
        call public_4101e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        mov eax, dword ptr ds : [edi+0x36C]
        mov edx, dword ptr ds : [eax+0x800]
        xor ecx, ecx
        add esp, 0xC
        cmp edx, esi
        mov dword ptr ss : [esp+0x20], ecx
        jle public_4ec3e4
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x2C], esi
        public_4ec093 : nop
        mov eax, dword ptr ds : [eax+ecx*8]
        test eax, eax
        je public_4ec3ba
        lea ebp, ds:[eax-8]
        test ebp, ebp
        je public_4ec3ba
        mov eax, dword ptr ds : [edi+0x374]
        add esi, eax
        cmp dword ptr ds : [esi], 0
        je public_4ec3ba
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [esp+0x24]
        je public_4ec3ba
        mov al, byte ptr ds : [esi+0x30]
        test al, al
        jne public_4ec3ba
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [eax+0x1C], 1
        mov edi, dword ptr ds : [public_679bb0]
        mov ebx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x1C], 0
        jne public_4ec120
        push ebp
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        call public_45a4e0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [eax]
        push ebp
        push ecx
        mov dword ptr ss : [esp+0x24], edi
        call public_45a490
        add esp, 0x14
        cmp eax, 0xFFFFFFFF
        jne public_4ec120
        mov byte ptr ss : [esp+0x1C], 1
        public_4ec120 : nop
        and ebx, 0x10000000
        je public_4ec144
        mov byte ptr ss : [esp+0x14], 0xFF
        mov byte ptr ss : [esp+0x15], 0xFF
        mov byte ptr ss : [esp+0x16], 0xFF
        mov byte ptr ss : [esp+0x17], 0xFF
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], edi
        public_4ec144 : nop
        mov al, byte ptr ds : [esi+0x24]
        test al, al
        je public_4ec171
        call public_45a740
        test al, al
        jne public_4ec1ee
        lea edx, ss:[esp+0x40]
        push edi
        push edx
        call public_561f20
        mov eax, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0x10], eax
        jmp public_4ec1ee
        public_4ec171 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        push eax
        call public_4cc880
        add esp, 4
        test al, al
        je public_4ec18f
        mov eax, dword ptr ds : [public_679ba4]
        mov dword ptr ss : [esp+0x10], eax
        public_4ec18f : nop
        test ebx, ebx
        fld dword ptr ds : [esi+0x28]
        fmul dword ptr ds : [public_5d954c]
        fsubr dword ptr ds : [public_5c9804]
        je public_4ec1a8
        fmul dword ptr ds : [public_5c75e0]
        public_4ec1a8 : nop
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4ec1bf
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        jmp public_4ec1d4
        public_4ec1bf : nop
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4ec1d4
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4ec1d4 : nop
        movzx ecx, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x30], ecx
        fild dword ptr ss : [esp+0x30]
        fmul st, st(1)
        call public_5b7ec0
        fstp st(0)
        mov byte ptr ss : [esp+0x13], al
        public_4ec1ee : nop
        mov edi, dword ptr ss : [esp+0x34]
        test edi, 0x107F0000
        jne public_4ec208
        mov al, byte ptr ds : [esi+0x30]
        test al, al
        jne public_4ec208
        mov al, byte ptr ds : [esi+0x2C]
        test al, al
        je public_4ec222
        public_4ec208 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x2C]
        lea ecx, ss:[esp+0x10]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push esi
        call public_4eada0
        public_4ec222 : nop
        mov al, byte ptr ds : [esi+0x2D]
        test al, al
        je public_4ec3b6
        test edi, 0x7F0000
        je public_4ec23d
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        jmp public_4ec286
        public_4ec23d : nop
        test edi, 0x1000000
        je public_4ec280
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [edx+0x74]
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_4ec3b6
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp esi, eax
        jne public_4ec3b6
        jmp public_4ec28c
        public_4ec280 : nop
        test edi, 0x4000000
        public_4ec286 : nop
        je public_4ec3b6
        public_4ec28c : nop
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ebp
        call dword ptr ds : [public_5c65a8]
        test al, al
        je public_4ec3b6
        xor ebx, ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        add ebp, 8
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x78], 1
        je public_4ec2c8
        push ebp
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_5c62a8]
        public_4ec2c8 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], ecx
        call public_40f130
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x68]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov ebp, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [ebp+0x914]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x7C], 2
        call public_5b7e84
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_4ec31c
        mov edi, eax
        public_4ec31c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x30], esi
        cmp esi, ebx
        je public_4ec38d
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x78], 4
        je public_4ec354
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_4ec354
        add eax, 8
        jmp public_4ec356
        public_4ec354 : nop
        xor eax, eax
        public_4ec356 : nop
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c645c]
        mov eax, dword ptr ss : [esp+0x58]
        lea edx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x64]
        add esi, 0x14
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+8], eax
        public_4ec38d : nop
        mov ecx, dword ptr ss : [ebp+0x918]
        mov eax, dword ptr ss : [esp+0x50]
        inc ecx
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x918], ecx
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        je public_4ec3b6
        push 0
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_5c62a8]
        public_4ec3b6 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_4ec3ba : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi+0x36C]
        mov edx, dword ptr ds : [eax+0x800]
        inc ecx
        add esi, 0x34
        cmp ecx, edx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], esi
        jl public_4ec093
        pop ebp
        pop ebx
        public_4ec3e4 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x4ebf70)
    }
}

#undef public_4ebff7
#undef public_4ec093
#undef public_4ec120
#undef public_4ec144
#undef public_4ec171
#undef public_4ec18f
#undef public_4ec1a8
#undef public_4ec1bf
#undef public_4ec1d4
#undef public_4ec1ee
#undef public_4ec208
#undef public_4ec222
#undef public_4ec23d
#undef public_4ec280
#undef public_4ec286
#undef public_4ec28c
#undef public_4ec2c8
#undef public_4ec31c
#undef public_4ec354
#undef public_4ec356
#undef public_4ec38d
#undef public_4ec3b6
#undef public_4ec3ba
#undef public_4ec3e4
