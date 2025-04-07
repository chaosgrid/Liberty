#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3190);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3540);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef31e8 _public_6ef31e8
#define public_6ef31ea _public_6ef31ea
#define public_6ef31f2 _public_6ef31f2
#define public_6ef3207 _public_6ef3207
#define public_6ef3214 _public_6ef3214
#define public_6ef3231 _public_6ef3231
#define public_6ef3248 _public_6ef3248
#define public_6ef3252 _public_6ef3252
#define public_6ef3260 _public_6ef3260
#define public_6ef3277 _public_6ef3277
#define public_6ef327d _public_6ef327d
#define public_6ef32a0 _public_6ef32a0
#define public_6ef32b7 _public_6ef32b7
#define public_6ef32c1 _public_6ef32c1
#define public_6ef32fd _public_6ef32fd
#define public_6ef332c _public_6ef332c
#define public_6ef3363 _public_6ef3363
#define public_6ef337a _public_6ef337a
#define public_6ef3384 _public_6ef3384
#define public_6ef33b0 _public_6ef33b0
#define public_6ef33c3 _public_6ef33c3
#define public_6ef33c9 _public_6ef33c9
#define public_6ef33d0 _public_6ef33d0
#define public_6ef33df _public_6ef33df
#define public_6ef33f5 _public_6ef33f5
#define public_6ef3410 _public_6ef3410
#define public_6ef3423 _public_6ef3423
#define public_6ef342d _public_6ef342d
#define public_6ef3440 _public_6ef3440
#define public_6ef3452 _public_6ef3452
#define public_6ef3460 _public_6ef3460
#define public_6ef346f _public_6ef346f
#define public_6ef3476 _public_6ef3476

PROC_DECLARE(0x6ef3190, internal_6ef3190, public_6ef3190);
extern "C" NAKED register_t __cdecl internal_6ef3190()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_6ef332c
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6ef31e8
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_6ef31ea
        public_6ef31e8 : nop
        mov ecx, esi
        public_6ef31ea : nop
        test ebp, ebp
        jne public_6ef31f2
        xor edx, edx
        jmp public_6ef3207
        public_6ef31f2 : nop
        sub ebx, ebp
        mov eax, 0x84210843
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ef3207 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ef3214
        xor eax, eax
        public_6ef3214 : nop
        imul eax, 0x7C
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ef3252
        public_6ef3231 : nop
        test edx, edx
        je public_6ef3248
        mov ecx, 0x1F
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ef3248 : nop
        add eax, 0x7C
        add edx, 0x7C
        cmp eax, ebx
        jne public_6ef3231
        public_6ef3252 : nop
        test esi, esi
        mov eax, edx
        jbe public_6ef327d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        mov edi, edi
        public_6ef3260 : nop
        test eax, eax
        je public_6ef3277
        mov ecx, 0x1F
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ef3277 : nop
        add eax, 0x7C
        dec ebx
        jne public_6ef3260
        public_6ef327d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x7C
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6ef32c1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6ef32a0 : nop
        test ebx, ebx
        je public_6ef32b7
        mov ecx, 0x1F
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ef32b7 : nop
        add eax, 0x7C
        add ebx, 0x7C
        cmp eax, ebp
        jne public_6ef32a0
        public_6ef32c1 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x7C
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6ef32fd
        xor edx, edx
        mov edx, esi
        imul edx, 0x7C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ef32fd : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x7C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ef332c : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_6ef33f5
        mov ecx, esi
        imul ecx, 0x7C
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6ef3384
        mov edx, eax
        sub edx, ecx
        public_6ef3363 : nop
        test eax, eax
        je public_6ef337a
        mov ecx, 0x1F
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ef337a : nop
        add edx, 0x7C
        add eax, 0x7C
        cmp edx, ebx
        jne public_6ef3363
        public_6ef3384 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov eax, ebx
        mov ebx, dword ptr ss : [esp+0x28]
        je public_6ef33c9
        mov edx, esi
        lea ebx, ds:[ebx]
        public_6ef33b0 : nop
        test eax, eax
        je public_6ef33c3
        mov ecx, 0x1F
        mov esi, ebx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6ef33c3 : nop
        add eax, 0x7C
        dec edx
        jne public_6ef33b0
        public_6ef33c9 : nop
        mov esi, dword ptr ds : [edi+8]
        cmp ebp, esi
        je public_6ef33df
        public_6ef33d0 : nop
        push ebx
        mov ecx, ebp
        call public_6ef3540
        add ebp, 0x7C
        cmp ebp, esi
        jne public_6ef33d0
        public_6ef33df : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ef33f5 : nop
        test esi, esi
        jbe public_6ef3476
        mov edi, esi
        imul edi, 0x7C
        mov eax, ebx
        sub eax, edi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], edi
        je public_6ef342d
        lea esp, ss:[esp]
        public_6ef3410 : nop
        test edx, edx
        je public_6ef3423
        mov ecx, 0x1F
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x20]
        public_6ef3423 : nop
        add eax, 0x7C
        add edx, 0x7C
        cmp eax, ebx
        jne public_6ef3410
        public_6ef342d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        mov esi, ebx
        sub esi, edi
        cmp ebp, esi
        je public_6ef3452
        lea esp, ss:[esp]
        public_6ef3440 : nop
        sub esi, 0x7C
        sub ebx, 0x7C
        push esi
        mov ecx, ebx
        call public_6ef3540
        cmp esi, ebp
        jne public_6ef3440
        public_6ef3452 : nop
        lea esi, ds:[edi+ebp]
        cmp ebp, esi
        je public_6ef346f
        mov ebx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ecx]
        public_6ef3460 : nop
        push ebx
        mov ecx, ebp
        call public_6ef3540
        add ebp, 0x7C
        cmp ebp, esi
        jne public_6ef3460
        public_6ef346f : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_6ef3476 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3190)
    }
}

#undef public_6ef31e8
#undef public_6ef31ea
#undef public_6ef31f2
#undef public_6ef3207
#undef public_6ef3214
#undef public_6ef3231
#undef public_6ef3248
#undef public_6ef3252
#undef public_6ef3260
#undef public_6ef3277
#undef public_6ef327d
#undef public_6ef32a0
#undef public_6ef32b7
#undef public_6ef32c1
#undef public_6ef32fd
#undef public_6ef332c
#undef public_6ef3363
#undef public_6ef337a
#undef public_6ef3384
#undef public_6ef33b0
#undef public_6ef33c3
#undef public_6ef33c9
#undef public_6ef33d0
#undef public_6ef33df
#undef public_6ef33f5
#undef public_6ef3410
#undef public_6ef3423
#undef public_6ef342d
#undef public_6ef3440
#undef public_6ef3452
#undef public_6ef3460
#undef public_6ef346f
#undef public_6ef3476
