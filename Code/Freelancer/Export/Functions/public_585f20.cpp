#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457f00);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5835f0);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c43a8);

#define public_585fa8 _public_585fa8
#define public_585fac _public_585fac
#define public_585fde _public_585fde
#define public_585ffb _public_585ffb
#define public_58600f _public_58600f
#define public_586013 _public_586013
#define public_586046 _public_586046
#define public_58605c _public_58605c
#define public_586061 _public_586061
#define public_586086 _public_586086
#define public_586094 _public_586094
#define public_5860aa _public_5860aa
#define public_5860af _public_5860af
#define public_5860c9 _public_5860c9
#define public_5860d8 _public_5860d8
#define public_5860e4 _public_5860e4
#define public_5860f0 _public_5860f0
#define public_586100 _public_586100
#define public_586172 _public_586172
#define public_586175 _public_586175
#define public_586182 _public_586182
#define public_586192 _public_586192
#define public_5861b2 _public_5861b2
#define public_5861b8 _public_5861b8
#define public_5861f0 _public_5861f0
#define public_586208 _public_586208
#define public_586220 _public_586220
#define public_58623a _public_58623a
#define public_586245 _public_586245
#define public_586253 _public_586253
#define public_586260 _public_586260
#define public_586287 _public_586287
#define public_586289 _public_586289
#define public_586295 _public_586295
#define public_5862ae _public_5862ae
#define public_5862c0 _public_5862c0
#define public_5862c8 _public_5862c8
#define public_5862d9 _public_5862d9
#define public_5862ed _public_5862ed
#define public_5862f6 _public_5862f6
#define public_5862f8 _public_5862f8

PROC_DECLARE(0x585f20, internal_585f20, public_585f20);
extern "C" NAKED register_t __cdecl internal_585f20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c43a8 @0x585f22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c43a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x4D4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], edi
        je public_5862f6
        mov eax, dword ptr ss : [esp+0x60]
        cmp eax, ebx
        je public_5862f6
        mov cl, byte ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x40], cl
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        push eax
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_5c6088]
        add esp, 4
        cmp eax, ebx
        je public_585fa8
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [eax+0x50]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        call public_5835f0
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], eax
        jmp public_585fac
        public_585fa8 : nop
        mov dword ptr ss : [esp+0x14], ebx
        public_585fac : nop
        lea eax, ds:[edi+0x32C]
        push eax
        call dword ptr ds : [public_5c6b70]
        mov ecx, dword ptr ds : [edi+0x4D4]
        mov edx, dword ptr ds : [ecx]
        mov esi, eax
        mov eax, dword ptr ds : [esi+0x134]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x24], edx
        jne public_585fde
        mov dword ptr ss : [esp+0x30], ebx
        jmp public_585ffb
        public_585fde : nop
        mov ecx, dword ptr ds : [esi+0x138]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x30], edx
        public_585ffb : nop
        cmp dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x38], ebx
        jle public_5861b8
        mov dword ptr ss : [esp+0x2C], ebx
        jmp public_586013
        public_58600f : nop
        mov esi, dword ptr ss : [esp+0x3C]
        public_586013 : nop
        mov ebx, dword ptr ds : [esi+0x134]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [ebx+ecx]
        add ebx, ecx
        cmp eax, 4
        mov byte ptr ss : [esp+0x60], 0
        jne public_586061
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_586061
        call dword ptr ds : [public_5c6378]
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle public_586061
        public_586046 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push esi
        call dword ptr ds : [public_5c6374]
        cmp ebp, eax
        je public_58605c
        inc esi
        cmp esi, edi
        jl public_586046
        jmp public_586061
        public_58605c : nop
        mov byte ptr ss : [esp+0x60], 1
        public_586061 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        mov byte ptr ss : [esp+0x13], 0
        je public_5860af
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 5
        je public_586086
        cmp eax, 6
        je public_586086
        cmp eax, 7
        je public_586086
        cmp eax, 8
        jne public_5860af
        public_586086 : nop
        call dword ptr ds : [public_5c6c5c]
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle public_5860af
        public_586094 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push esi
        call dword ptr ds : [public_5c6c58]
        cmp ebp, eax
        je public_5860aa
        inc esi
        cmp esi, edi
        jl public_586094
        jmp public_5860af
        public_5860aa : nop
        mov byte ptr ss : [esp+0x13], 1
        public_5860af : nop
        cmp ebp, dword ptr ss : [esp+0x14]
        je public_5860c9
        mov al, byte ptr ss : [esp+0x60]
        test al, al
        jne public_5860c9
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_586192
        public_5860c9 : nop
        mov eax, dword ptr ds : [ebx+8]
        xor ebp, ebp
        cmp eax, ebp
        jne public_5860d8
        mov dword ptr ss : [esp+0x28], ebp
        jmp public_5860e4
        public_5860d8 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, eax
        sar ecx, 2
        mov dword ptr ss : [esp+0x28], ecx
        public_5860e4 : nop
        cmp dword ptr ss : [esp+0x28], ebp
        jle public_586182
        mov edi, edi
        public_5860f0 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ecx+ebp*4]
        xor esi, esi
        test eax, eax
        je public_586175
        public_586100 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_5c6294]
        cmp esi, eax
        jge public_586175
        mov ecx, dword ptr ss : [esp+0x24]
        push esi
        call dword ptr ds : [public_5c620c]
        test eax, eax
        mov dword ptr ss : [esp+0x34], eax
        je public_586172
        push edi
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_586172
        mov al, byte ptr ss : [esp+0x64]
        test al, al
        jne public_5861f0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x4D4]
        push esi
        call public_457f00
        cmp eax, 0xFFFFFFFF
        jne public_586172
        mov al, byte ptr ss : [esp+0x60]
        test al, al
        je public_586208
        mov ecx, dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x34]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_537260
        public_586172 : nop
        inc esi
        jmp public_586100
        public_586175 : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc ebp
        cmp ebp, eax
        jl public_5860f0
        public_586182 : nop
        mov al, byte ptr ss : [esp+0x60]
        test al, al
        jne public_586192
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_5861b2
        public_586192 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        inc eax
        add edx, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x2C], edx
        jl public_58600f
        public_5861b2 : nop
        mov edi, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        public_5861b8 : nop
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, ebx
        je public_5862ed
        mov edx, dword ptr ss : [esp+0x48]
        sub edx, eax
        sar edx, 2
        cmp edx, ebx
        mov dword ptr ss : [esp+0x64], edx
        jle public_5862ed
        cmp edx, 1
        jne public_586220
        mov esi, dword ptr ds : [eax]
        push eax
        call public_5b7e1d
        add esp, 4
        mov eax, esi
        jmp public_5862f8
        public_5861f0 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x34]
        push edx
        call public_5b7e1d
        add esp, 4
        mov eax, esi
        jmp public_5862f8
        public_586208 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x34]
        push eax
        call public_5b7e1d
        add esp, 4
        mov eax, esi
        jmp public_5862f8
        public_586220 : nop
        mov ecx, dword ptr ds : [edi+0x564]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], 0x270F
        jne public_58623a
        xor ebp, ebp
        jmp public_586245
        public_58623a : nop
        mov ebp, dword ptr ds : [edi+0x568]
        sub ebp, ecx
        sar ebp, 5
        public_586245 : nop
        xor ecx, ecx
        cmp edx, ebx
        mov dword ptr ss : [esp+0x60], ecx
        jle public_5862d9
        public_586253 : nop
        mov ebx, dword ptr ds : [eax+ecx*4]
        xor esi, esi
        test ebp, ebp
        jle public_5862c8
        xor edi, edi
        mov edi, edi
        public_586260 : nop
        test edi, edi
        jl public_586287
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x564]
        test ecx, ecx
        je public_586287
        mov eax, dword ptr ds : [edx+0x568]
        sub eax, ecx
        sar eax, 5
        cmp esi, eax
        jae public_586287
        mov eax, ecx
        add eax, edi
        jmp public_586289
        public_586287 : nop
        xor eax, eax
        public_586289 : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_586295
        mov eax, dword ptr ds : [public_5c7078]
        public_586295 : nop
        push ebx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_5862ae
        inc esi
        add edi, 0x20
        cmp esi, ebp
        jl public_586260
        jmp public_5862c0
        public_5862ae : nop
        cmp esi, dword ptr ss : [esp+0x38]
        jge public_5862c0
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x34], ecx
        public_5862c0 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x64]
        public_5862c8 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        inc ecx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x60], ecx
        jl public_586253
        public_5862d9 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+edx*4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov eax, esi
        jmp public_5862f8
        public_5862ed : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5862f6 : nop
        xor eax, eax
        public_5862f8 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 8
        UNREACHABLE_TRAP(0x585f20)
    }
}

#undef public_585fa8
#undef public_585fac
#undef public_585fde
#undef public_585ffb
#undef public_58600f
#undef public_586013
#undef public_586046
#undef public_58605c
#undef public_586061
#undef public_586086
#undef public_586094
#undef public_5860aa
#undef public_5860af
#undef public_5860c9
#undef public_5860d8
#undef public_5860e4
#undef public_5860f0
#undef public_586100
#undef public_586172
#undef public_586175
#undef public_586182
#undef public_586192
#undef public_5861b2
#undef public_5861b8
#undef public_5861f0
#undef public_586208
#undef public_586220
#undef public_58623a
#undef public_586245
#undef public_586253
#undef public_586260
#undef public_586287
#undef public_586289
#undef public_586295
#undef public_5862ae
#undef public_5862c0
#undef public_5862c8
#undef public_5862d9
#undef public_5862ed
#undef public_5862f6
#undef public_5862f8
