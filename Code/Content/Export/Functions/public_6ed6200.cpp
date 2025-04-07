#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eedfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee010);
CLANG_FORWARD_PROC_SYMBOL(public_6eee050);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f60dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed6219 _public_6ed6219
#define public_6ed6221 _public_6ed6221
#define public_6ed6230 _public_6ed6230
#define public_6ed6240 _public_6ed6240
#define public_6ed6270 _public_6ed6270
#define public_6ed6278 _public_6ed6278
#define public_6ed62a5 _public_6ed62a5
#define public_6ed62b1 _public_6ed62b1
#define public_6ed62e6 _public_6ed62e6
#define public_6ed62e8 _public_6ed62e8
#define public_6ed62f2 _public_6ed62f2
#define public_6ed6331 _public_6ed6331
#define public_6ed6339 _public_6ed6339
#define public_6ed63bc _public_6ed63bc
#define public_6ed63c1 _public_6ed63c1
#define public_6ed63d5 _public_6ed63d5
#define public_6ed647b _public_6ed647b
#define public_6ed64e4 _public_6ed64e4
#define public_6ed64fa _public_6ed64fa
#define public_6ed6518 _public_6ed6518
#define public_6ed652d _public_6ed652d
#define public_6ed6536 _public_6ed6536
#define public_6ed654a _public_6ed654a
#define public_6ed6551 _public_6ed6551

PROC_DECLARE(0x6ed6200, internal_6ed6200, public_6ed6200);
extern "C" NAKED register_t __cdecl internal_6ed6200()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_6ed6219
        xor ecx, ecx
        jmp public_6ed6221
        public_6ed6219 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        sub ecx, eax
        sar ecx, 2
        public_6ed6221 : nop
        xor eax, eax
        cmp ecx, edi
        jle public_6ed6240
        mov edx, dword ptr ds : [esi+0x18]
        lea ebx, ss:[esp+0x60]
        sub edx, ebx
        public_6ed6230 : nop
        lea ebx, ds:[edx+eax*4]
        mov ebx, dword ptr ss : [esp+ebx+0x60]
        mov dword ptr ss : [esp+eax*4+0x60], ebx
        inc eax
        cmp eax, ecx
        jl public_6ed6230
        public_6ed6240 : nop
        mov eax, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        cmp eax, edi
        je public_6ed6270
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x64], edi
        call dword ptr ds : [public_6fb343c]
        add esp, 8
        lea ebp, ss:[esp+0x2C]
        public_6ed6270 : nop
        mov ebx, dword ptr ds : [esi+0x34]
        cmp ebx, dword ptr ds : [esi+0x38]
        je public_6ed62f2
        public_6ed6278 : nop
        push ebx
        call public_6f49b00
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6ed62e8
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6ed62e6
        mov ecx, edi
        call public_6f478c0
        mov dword ptr ds : [esi+0x24], eax
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6ed62a5
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6ed62b1
        public_6ed62a5 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        sub edx, eax
        sar edx, 2
        mov dword ptr ss : [esp+0x10], edx
        public_6ed62b1 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [esi+0xC]
        push 0
        push 0
        push eax
        push ebp
        push ecx
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x7C]
        push ecx
        mov ecx, edi
        call public_6f481e0
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x24]
        push edx
        push eax
        call public_6f60dd0
        add esp, 0x2C
        jmp public_6ed62e8
        public_6ed62e6 : nop
        xor edi, edi
        public_6ed62e8 : nop
        mov eax, dword ptr ds : [esi+0x38]
        add ebx, 4
        cmp ebx, eax
        jne public_6ed6278
        public_6ed62f2 : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6ed6551
        test edi, edi
        je public_6ed6551
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        fadd dword ptr ds : [public_6fb621c]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x10]
        call public_6f481e0
        mov edx, dword ptr ds : [esi+0x18]
        test edx, edx
        mov ecx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [ecx+0x48]
        jne public_6ed6331
        xor ecx, ecx
        jmp public_6ed6339
        public_6ed6331 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        sub ecx, edx
        sar ecx, 2
        public_6ed6339 : nop
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+ecx*4-4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [public_6fd1c28]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [public_6fd1c24]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov dword ptr ss : [esp+0x14], edi
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x24], 0
        mov ebx, ecx
        jae public_6ed647b
        mov eax, dword ptr ds : [public_6fd1c20]
        test eax, eax
        je public_6ed63bc
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 1
        jbe public_6ed63bc
        mov ecx, offset public_6fd1c1c
        call public_6eedfe0
        mov esi, eax
        jmp public_6ed63c1
        public_6ed63bc : nop
        mov esi, 1
        public_6ed63c1 : nop
        mov ecx, offset public_6fd1c1c
        call public_6eedfe0
        mov edi, eax
        add edi, esi
        mov eax, edi
        jns public_6ed63d5
        xor eax, eax
        public_6ed63d5 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_6fd1c20]
        push esi
        push ebx
        push eax
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, offset public_6fd1c1c
        call public_6eee050
        mov edx, dword ptr ds : [public_6fd1c24]
        add ebp, 0x18
        push ebp
        push edx
        push ebx
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        mov eax, dword ptr ds : [public_6fd1c24]
        mov ecx, dword ptr ds : [public_6fd1c20]
        push eax
        push ecx
        mov ecx, offset public_6fd1c1c
        call public_6ea1490
        mov edx, dword ptr ds : [public_6fd1c20]
        push edx
        call public_6fa8fe0
        lea eax, ds:[edi+edi*2]
        lea ecx, ds:[esi+eax*8]
        mov dword ptr ds : [public_6fd1c28], ecx
        add esp, 4
        mov ecx, offset public_6fd1c1c
        call public_6eedfe0
        inc eax
        pop edi
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[esi+edx*8]
        mov dword ptr ds : [public_6fd1c20], esi
        pop esi
        pop ebp
        mov dword ptr ds : [public_6fd1c24], eax
        pop ebx
        add esp, 0x90
        ret 
        public_6ed647b : nop
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ed64fa
        lea edx, ds:[ebx+0x18]
        push edx
        push ecx
        push ebx
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        mov esi, dword ptr ds : [public_6fd1c24]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, offset public_6fd1c1c
        call public_6eee050
        mov edx, dword ptr ds : [public_6fd1c24]
        cmp ebx, edx
        mov eax, ebx
        je public_6ed654a
        public_6ed64e4 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6ed64e4
        jmp public_6ed654a
        public_6ed64fa : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFE8
        push ecx
        mov ecx, offset public_6fd1c1c
        call public_6eee010
        mov eax, dword ptr ds : [public_6fd1c24]
        mov edx, eax
        add eax, 0xFFFFFFE8
        cmp ebx, eax
        je public_6ed652d
        public_6ed6518 : nop
        sub eax, 0x18
        sub edx, 0x18
        cmp eax, ebx
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6ed6518
        public_6ed652d : nop
        lea edx, ds:[ebx+0x18]
        cmp ebx, edx
        mov eax, ebx
        je public_6ed654a
        public_6ed6536 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6ed6536
        public_6ed654a : nop
        add dword ptr ds : [public_6fd1c24], 0x18
        public_6ed6551 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6ed6200)
    }
}

#undef public_6ed6219
#undef public_6ed6221
#undef public_6ed6230
#undef public_6ed6240
#undef public_6ed6270
#undef public_6ed6278
#undef public_6ed62a5
#undef public_6ed62b1
#undef public_6ed62e6
#undef public_6ed62e8
#undef public_6ed62f2
#undef public_6ed6331
#undef public_6ed6339
#undef public_6ed63bc
#undef public_6ed63c1
#undef public_6ed63d5
#undef public_6ed647b
#undef public_6ed64e4
#undef public_6ed64fa
#undef public_6ed6518
#undef public_6ed652d
#undef public_6ed6536
#undef public_6ed654a
#undef public_6ed6551
