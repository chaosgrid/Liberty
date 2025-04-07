#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f202f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f20348 _public_6f20348
#define public_6f2034a _public_6f2034a
#define public_6f20352 _public_6f20352
#define public_6f20367 _public_6f20367
#define public_6f20374 _public_6f20374
#define public_6f20391 _public_6f20391
#define public_6f203a8 _public_6f203a8
#define public_6f203b2 _public_6f203b2
#define public_6f203c0 _public_6f203c0
#define public_6f203d7 _public_6f203d7
#define public_6f203dd _public_6f203dd
#define public_6f20400 _public_6f20400
#define public_6f20417 _public_6f20417
#define public_6f20421 _public_6f20421
#define public_6f2045d _public_6f2045d
#define public_6f2048c _public_6f2048c
#define public_6f204c3 _public_6f204c3
#define public_6f204da _public_6f204da
#define public_6f204e4 _public_6f204e4
#define public_6f20510 _public_6f20510
#define public_6f20523 _public_6f20523
#define public_6f20529 _public_6f20529
#define public_6f20530 _public_6f20530
#define public_6f2053f _public_6f2053f
#define public_6f20555 _public_6f20555
#define public_6f20570 _public_6f20570
#define public_6f20583 _public_6f20583
#define public_6f2058d _public_6f2058d
#define public_6f205a0 _public_6f205a0
#define public_6f205b2 _public_6f205b2
#define public_6f205c0 _public_6f205c0
#define public_6f205cf _public_6f205cf
#define public_6f205d6 _public_6f205d6

PROC_DECLARE(0x6f202f0, internal_6f202f0, public_6f202f0);
extern "C" NAKED register_t __cdecl internal_6f202f0()
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
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_6f2048c
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6f20348
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_6f2034a
        public_6f20348 : nop
        mov ecx, esi
        public_6f2034a : nop
        test ebp, ebp
        jne public_6f20352
        xor edx, edx
        jmp public_6f20367
        public_6f20352 : nop
        sub ebx, ebp
        mov eax, 0x8D3DCB09
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f20367 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f20374
        xor eax, eax
        public_6f20374 : nop
        imul eax, 0x74
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f203b2
        public_6f20391 : nop
        test edx, edx
        je public_6f203a8
        mov ecx, 0x1D
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f203a8 : nop
        add eax, 0x74
        add edx, 0x74
        cmp eax, ebx
        jne public_6f20391
        public_6f203b2 : nop
        test esi, esi
        mov eax, edx
        jbe public_6f203dd
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        mov edi, edi
        public_6f203c0 : nop
        test eax, eax
        je public_6f203d7
        mov ecx, 0x1D
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f203d7 : nop
        add eax, 0x74
        dec ebx
        jne public_6f203c0
        public_6f203dd : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x74
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6f20421
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6f20400 : nop
        test ebx, ebx
        je public_6f20417
        mov ecx, 0x1D
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f20417 : nop
        add eax, 0x74
        add ebx, 0x74
        cmp eax, ebp
        jne public_6f20400
        public_6f20421 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x74
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6f2045d
        xor edx, edx
        mov edx, esi
        imul edx, 0x74
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f2045d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x74
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f2048c : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_6f20555
        mov ecx, esi
        imul ecx, 0x74
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6f204e4
        mov edx, eax
        sub edx, ecx
        public_6f204c3 : nop
        test eax, eax
        je public_6f204da
        mov ecx, 0x1D
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f204da : nop
        add edx, 0x74
        add eax, 0x74
        cmp edx, ebx
        jne public_6f204c3
        public_6f204e4 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov eax, ebx
        mov ebx, dword ptr ss : [esp+0x28]
        je public_6f20529
        mov edx, esi
        lea ebx, ds:[ebx]
        public_6f20510 : nop
        test eax, eax
        je public_6f20523
        mov ecx, 0x1D
        mov esi, ebx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6f20523 : nop
        add eax, 0x74
        dec edx
        jne public_6f20510
        public_6f20529 : nop
        mov esi, dword ptr ds : [edi+8]
        cmp ebp, esi
        je public_6f2053f
        public_6f20530 : nop
        push ebx
        mov ecx, ebp
        call public_6f22800
        add ebp, 0x74
        cmp ebp, esi
        jne public_6f20530
        public_6f2053f : nop
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
        public_6f20555 : nop
        test esi, esi
        jbe public_6f205d6
        mov edi, esi
        imul edi, 0x74
        mov eax, ebx
        sub eax, edi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], edi
        je public_6f2058d
        lea esp, ss:[esp]
        public_6f20570 : nop
        test edx, edx
        je public_6f20583
        mov ecx, 0x1D
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x20]
        public_6f20583 : nop
        add eax, 0x74
        add edx, 0x74
        cmp eax, ebx
        jne public_6f20570
        public_6f2058d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        mov esi, ebx
        sub esi, edi
        cmp ebp, esi
        je public_6f205b2
        lea esp, ss:[esp]
        public_6f205a0 : nop
        sub esi, 0x74
        sub ebx, 0x74
        push esi
        mov ecx, ebx
        call public_6f22800
        cmp esi, ebp
        jne public_6f205a0
        public_6f205b2 : nop
        lea esi, ds:[edi+ebp]
        cmp ebp, esi
        je public_6f205cf
        mov ebx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ecx]
        public_6f205c0 : nop
        push ebx
        mov ecx, ebp
        call public_6f22800
        add ebp, 0x74
        cmp ebp, esi
        jne public_6f205c0
        public_6f205cf : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_6f205d6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f202f0)
    }
}

#undef public_6f20348
#undef public_6f2034a
#undef public_6f20352
#undef public_6f20367
#undef public_6f20374
#undef public_6f20391
#undef public_6f203a8
#undef public_6f203b2
#undef public_6f203c0
#undef public_6f203d7
#undef public_6f203dd
#undef public_6f20400
#undef public_6f20417
#undef public_6f20421
#undef public_6f2045d
#undef public_6f2048c
#undef public_6f204c3
#undef public_6f204da
#undef public_6f204e4
#undef public_6f20510
#undef public_6f20523
#undef public_6f20529
#undef public_6f20530
#undef public_6f2053f
#undef public_6f20555
#undef public_6f20570
#undef public_6f20583
#undef public_6f2058d
#undef public_6f205a0
#undef public_6f205b2
#undef public_6f205c0
#undef public_6f205cf
#undef public_6f205d6
