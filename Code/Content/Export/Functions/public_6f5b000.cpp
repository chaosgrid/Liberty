#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5910);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f5b000);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f5b0a0 _public_6f5b0a0
#define public_6f5b0d9 _public_6f5b0d9
#define public_6f5b0ee _public_6f5b0ee
#define public_6f5b0f4 _public_6f5b0f4
#define public_6f5b11e _public_6f5b11e
#define public_6f5b12b _public_6f5b12b
#define public_6f5b131 _public_6f5b131
#define public_6f5b163 _public_6f5b163
#define public_6f5b16b _public_6f5b16b
#define public_6f5b194 _public_6f5b194
#define public_6f5b1a8 _public_6f5b1a8
#define public_6f5b1bc _public_6f5b1bc
#define public_6f5b1f7 _public_6f5b1f7
#define public_6f5b204 _public_6f5b204
#define public_6f5b20f _public_6f5b20f
#define public_6f5b24b _public_6f5b24b
#define public_6f5b24f _public_6f5b24f
#define public_6f5b258 _public_6f5b258
#define public_6f5b2a0 _public_6f5b2a0
#define public_6f5b2b1 _public_6f5b2b1
#define public_6f5b2c0 _public_6f5b2c0
#define public_6f5b2d1 _public_6f5b2d1
#define public_6f5b2e3 _public_6f5b2e3
#define public_6f5b368 _public_6f5b368
#define public_6f5b36d _public_6f5b36d
#define public_6f5b375 _public_6f5b375
#define public_6f5b383 _public_6f5b383
#define public_6f5b388 _public_6f5b388
#define public_6f5b394 _public_6f5b394
#define public_6f5b3b0 _public_6f5b3b0
#define public_6f5b3c4 _public_6f5b3c4
#define public_6f5b41a _public_6f5b41a
#define public_6f5b460 _public_6f5b460
#define public_6f5b46f _public_6f5b46f
#define public_6f5b484 _public_6f5b484
#define public_6f5b493 _public_6f5b493
#define public_6f5b4a0 _public_6f5b4a0
#define public_6f5b4ad _public_6f5b4ad
#define public_6f5b4b3 _public_6f5b4b3
#define public_6f5b4b6 _public_6f5b4b6
#define public_6f5b4c7 _public_6f5b4c7

PROC_DECLARE(0x6f5b000, internal_6f5b000, public_6f5b000);
extern "C" NAKED register_t __cdecl internal_6f5b000()
{
    __asm
    {
        sub esp, 0x110
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x128]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push edi
        push eax
        push ecx
        mov ecx, esi
        call public_6eb5910
        mov ecx, dword ptr ss : [esp+0x130]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        call public_6eb5910
        mov edi, dword ptr ss : [esp+0x134]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push ecx
        push edx
        mov ecx, edi
        call public_6eb5910
        mov eax, dword ptr ss : [esp+0x128]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x14
        lea edx, ss:[esp+0x38]
        push edx
        add eax, 0x24
        push 0x41200000
        push eax
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x138]
        mov ecx, dword ptr ds : [eax+0x48]
        push ecx
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        add esp, 0x18
        or ebp, 0xFFFFFFFF
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov dword ptr ss : [esp+0x10], ebx
        jbe public_6f5b194
        nop 
        lea esp, ss:[esp]
        public_6f5b0a0 : nop
        mov edx, dword ptr ss : [esp+ebx*4+0x30]
        mov ecx, dword ptr ss : [esp+0x124]
        push edx
        call public_6f72cb0
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6f5b131
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_6f5b131
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6f5b0d9
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, esi
        call public_6eb5770
        jmp public_6f5b131
        public_6f5b0d9 : nop
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6f5b0ee
        mov edx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [public_6fb3558]
        add esp, 4
        jmp public_6f5b0f4
        public_6f5b0ee : nop
        fld dword ptr ds : [public_6fb444c]
        public_6f5b0f4 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f5b11e
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6f5b11e
        fstp st(0)
        mov dword ptr ss : [esp+ebx*4+0x30], 0
        jmp public_6f5b131
        public_6f5b11e : nop
        cmp ebp, 0xFFFFFFFF
        je public_6f5b12b
        mov dword ptr ss : [esp+ebp*4+0x30], 0
        public_6f5b12b : nop
        fstp dword ptr ss : [esp+0x14]
        mov ebp, ebx
        public_6f5b131 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc ebx
        cmp ebx, eax
        jb public_6f5b0a0
        cmp ebp, 0xFFFFFFFF
        je public_6f5b194
        mov eax, dword ptr ss : [esp+ebp*4+0x30]
        mov ecx, dword ptr ss : [esp+0x124]
        push eax
        call public_6f72cb0
        mov ebp, dword ptr ds : [esi+4]
        test ebp, ebp
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f5b163
        xor ebx, ebx
        jmp public_6f5b16b
        public_6f5b163 : nop
        mov ebx, dword ptr ds : [esi+8]
        sub ebx, ebp
        sar ebx, 2
        public_6f5b16b : nop
        call dword ptr ds : [public_6fb3370]
        inc ebx
        imul eax, ebx
        cdq 
        and edx, 0x7FFF
        add eax, edx
        lea ecx, ss:[esp+0x1C]
        push ecx
        sar eax, 0xF
        lea ebp, ss:[ebp+eax*4]
        push 1
        push ebp
        mov ecx, esi
        call public_6f937c0
        public_6f5b194 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x138]
        mov byte ptr ds : [ecx], 0
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f5b1bc
        public_6f5b1a8 : nop
        mov edx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edx+0x18]
        test ebx, ebx
        je public_6f5b375
        add eax, 4
        cmp eax, esi
        jne public_6f5b1a8
        public_6f5b1bc : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x124]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ss : [ebp+0x48]
        push 0x14
        lea ecx, ss:[esp+0xD8]
        push ecx
        push 0x44FA0000
        push edx
        push eax
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        xor esi, esi
        test eax, eax
        jbe public_6f5b258
        mov edx, dword ptr ss : [esp+0x18]
        public_6f5b1f7 : nop
        xor eax, eax
        test edx, edx
        jle public_6f5b20f
        mov ecx, dword ptr ss : [esp+esi*4+0xD0]
        public_6f5b204 : nop
        cmp dword ptr ss : [esp+eax*4+0x30], ecx
        je public_6f5b24f
        inc eax
        cmp eax, edx
        jl public_6f5b204
        public_6f5b20f : nop
        mov ecx, dword ptr ss : [esp+esi*4+0xD0]
        push ecx
        mov ecx, ebp
        call public_6f72cb0
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6f5b24b
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_6f5b24b
        mov cl, byte ptr ds : [eax+0x4C]
        test cl, cl
        je public_6f5b24b
        mov ecx, dword ptr ss : [esp+0x130]
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push eax
        call public_6f937c0
        public_6f5b24b : nop
        mov edx, dword ptr ss : [esp+0x18]
        public_6f5b24f : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        jb public_6f5b1f7
        public_6f5b258 : nop
        mov eax, dword ptr ss : [esp+0x128]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x48]
        push 0x14
        lea edx, ss:[esp+0x88]
        push edx
        push 0x457A0000
        push 0x3F77954D
        push 0x3F9C61AA
        push eax
        push ecx
        call dword ptr ds : [public_6fb3554]
        mov eax, dword ptr ss : [esp+0x3C]
        xor ebx, ebx
        add esp, 0x20
        test eax, eax
        mov dword ptr ss : [esp+0x20], ebx
        jbe public_6f5b4c7
        lea ecx, ds:[ecx]
        public_6f5b2a0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        test edx, edx
        jle public_6f5b2c0
        mov ecx, dword ptr ss : [esp+ebx*4+0x80]
        public_6f5b2b1 : nop
        cmp dword ptr ss : [esp+eax*4+0x30], ecx
        je public_6f5b4b6
        inc eax
        cmp eax, edx
        jl public_6f5b2b1
        public_6f5b2c0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        xor eax, eax
        test edx, edx
        jle public_6f5b2e3
        mov ecx, dword ptr ss : [esp+ebx*4+0x80]
        public_6f5b2d1 : nop
        cmp dword ptr ss : [esp+eax*4+0xD0], ecx
        je public_6f5b4b6
        inc eax
        cmp eax, edx
        jl public_6f5b2d1
        public_6f5b2e3 : nop
        mov edx, dword ptr ss : [esp+ebx*4+0x80]
        push edx
        mov ecx, ebp
        call public_6f72cb0
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6f5b4b6
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+ebx*4+0x80]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3550]
        fcomp dword ptr ds : [public_6fbbb60]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jp public_6f5b4b6
        mov eax, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_6f5b4b6
        mov cl, byte ptr ds : [eax+0x4C]
        test cl, cl
        je public_6f5b4b6
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+0xC]
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov esi, eax
        jae public_6f5b41a
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6f5b368
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f5b36d
        public_6f5b368 : nop
        mov ecx, 1
        public_6f5b36d : nop
        test edx, edx
        jne public_6f5b383
        xor eax, eax
        jmp public_6f5b388
        public_6f5b375 : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ecx], 1
        pop ebx
        add esp, 0x110
        ret 
        public_6f5b383 : nop
        sub eax, edx
        sar eax, 2
        public_6f5b388 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        jge public_6f5b394
        xor eax, eax
        public_6f5b394 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [edi+4]
        add esp, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x2C], eax
        mov ebp, eax
        je public_6f5b3c4
        lea ecx, ds:[ecx]
        public_6f5b3b0 : nop
        push ebx
        push ebp
        call public_6eb6740
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, esi
        jne public_6f5b3b0
        public_6f5b3c4 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebp
        call public_6eb6740
        mov edx, dword ptr ds : [edi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push edx
        push esi
        mov ecx, edi
        call public_6eed270
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x30]
        lea edx, ds:[esi+ecx*4]
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0xC], edx
        call public_6fa3db0
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x124]
        lea eax, ds:[esi+eax*4+4]
        mov dword ptr ds : [edi+4], esi
        jmp public_6f5b4b3
        public_6f5b41a : nop
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, edi
        jae public_6f5b46f
        lea edx, ds:[esi+4]
        push edx
        push eax
        push esi
        call public_6eed270
        mov eax, dword ptr ds : [edi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, esi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, edi
        call public_6f38a50
        mov eax, dword ptr ds : [edi+8]
        cmp esi, eax
        je public_6f5b4ad
        lea esp, ss:[esp]
        public_6f5b460 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], edx
        add esi, 4
        cmp esi, eax
        jne public_6f5b460
        jmp public_6f5b4ad
        public_6f5b46f : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[ecx-4]
        cmp esi, eax
        je public_6f5b493
        public_6f5b484 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        jne public_6f5b484
        public_6f5b493 : nop
        lea eax, ds:[esi+4]
        cmp esi, eax
        je public_6f5b4ad
        lea ebx, ds:[ebx]
        public_6f5b4a0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], ecx
        add esi, 4
        cmp esi, eax
        jne public_6f5b4a0
        public_6f5b4ad : nop
        mov eax, dword ptr ds : [edi+8]
        add eax, 4
        public_6f5b4b3 : nop
        mov dword ptr ds : [edi+8], eax
        public_6f5b4b6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc ebx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], ebx
        jb public_6f5b2a0
        public_6f5b4c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x110
        ret 
        UNREACHABLE_TRAP(0x6f5b000)
    }
}

#undef public_6f5b0a0
#undef public_6f5b0d9
#undef public_6f5b0ee
#undef public_6f5b0f4
#undef public_6f5b11e
#undef public_6f5b12b
#undef public_6f5b131
#undef public_6f5b163
#undef public_6f5b16b
#undef public_6f5b194
#undef public_6f5b1a8
#undef public_6f5b1bc
#undef public_6f5b1f7
#undef public_6f5b204
#undef public_6f5b20f
#undef public_6f5b24b
#undef public_6f5b24f
#undef public_6f5b258
#undef public_6f5b2a0
#undef public_6f5b2b1
#undef public_6f5b2c0
#undef public_6f5b2d1
#undef public_6f5b2e3
#undef public_6f5b368
#undef public_6f5b36d
#undef public_6f5b375
#undef public_6f5b383
#undef public_6f5b388
#undef public_6f5b394
#undef public_6f5b3b0
#undef public_6f5b3c4
#undef public_6f5b41a
#undef public_6f5b460
#undef public_6f5b46f
#undef public_6f5b484
#undef public_6f5b493
#undef public_6f5b4a0
#undef public_6f5b4ad
#undef public_6f5b4b3
#undef public_6f5b4b6
#undef public_6f5b4c7
