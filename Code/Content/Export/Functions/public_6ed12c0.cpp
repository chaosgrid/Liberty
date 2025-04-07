#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed12c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed1312 _public_6ed1312
#define public_6ed1314 _public_6ed1314
#define public_6ed131c _public_6ed131c
#define public_6ed132f _public_6ed132f
#define public_6ed133c _public_6ed133c
#define public_6ed1360 _public_6ed1360
#define public_6ed137e _public_6ed137e
#define public_6ed1388 _public_6ed1388
#define public_6ed13ab _public_6ed13ab
#define public_6ed13c6 _public_6ed13c6
#define public_6ed13d0 _public_6ed13d0
#define public_6ed13e6 _public_6ed13e6
#define public_6ed13f0 _public_6ed13f0
#define public_6ed1402 _public_6ed1402
#define public_6ed142c _public_6ed142c
#define public_6ed1442 _public_6ed1442
#define public_6ed145c _public_6ed145c
#define public_6ed1499 _public_6ed1499
#define public_6ed14a0 _public_6ed14a0
#define public_6ed14ba _public_6ed14ba
#define public_6ed14e0 _public_6ed14e0
#define public_6ed14f3 _public_6ed14f3
#define public_6ed1500 _public_6ed1500
#define public_6ed1512 _public_6ed1512
#define public_6ed1528 _public_6ed1528
#define public_6ed1546 _public_6ed1546
#define public_6ed1570 _public_6ed1570
#define public_6ed1580 _public_6ed1580
#define public_6ed159c _public_6ed159c
#define public_6ed15b5 _public_6ed15b5
#define public_6ed1616 _public_6ed1616
#define public_6ed1657 _public_6ed1657
#define public_6ed165a _public_6ed165a

PROC_DECLARE(0x6ed12c0, internal_6ed12c0, public_6ed12c0);
extern "C" NAKED register_t __cdecl internal_6ed12c0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6ed145c
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6ed1312
        mov edx, esi
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        mov edi, edx
        jb public_6ed1314
        public_6ed1312 : nop
        mov edi, ebp
        public_6ed1314 : nop
        test ecx, ecx
        jne public_6ed131c
        xor edx, edx
        jmp public_6ed132f
        public_6ed131c : nop
        sub esi, ecx
        mov eax, 0x78787879
        imul esi
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ed132f : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ed133c
        xor eax, eax
        public_6ed133c : nop
        imul eax, 0x88
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6ed137e
        public_6ed1360 : nop
        push esi
        push edi
        call public_6ed2a60
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x88
        add esp, 8
        add edi, 0x88
        cmp esi, eax
        jne public_6ed1360
        public_6ed137e : nop
        test ebp, ebp
        mov esi, edi
        jbe public_6ed13ab
        mov dword ptr ss : [esp+0x24], ebp
        public_6ed1388 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6ed2a60
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x88
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6ed1388
        mov eax, dword ptr ss : [esp+0x20]
        public_6ed13ab : nop
        mov ecx, ebp
        imul ecx, 0x88
        add ecx, edi
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_6ed13e6
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6ed13d0
        public_6ed13c6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6ed13d0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6ed2a60
        add esi, 0x88
        add esp, 8
        cmp esi, edi
        jne public_6ed13c6
        public_6ed13e6 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_6ed1402
        public_6ed13f0 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0x88
        cmp esi, edi
        jne public_6ed13f0
        public_6ed1402 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x88
        add eax, esi
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_6ed142c
        xor edx, edx
        jmp public_6ed1442
        public_6ed142c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ed1442 : nop
        add edx, ebp
        imul edx, 0x88
        pop edi
        add edx, esi
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ed145c : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6ed1528
        mov eax, ebp
        imul eax, 0x88
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_6ed14ba
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6ed14a0
        public_6ed1499 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_6ed14a0 : nop
        add eax, edi
        push edi
        push eax
        call public_6ed2a60
        add edi, 0x88
        add esp, 8
        cmp edi, esi
        jne public_6ed1499
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed14ba : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6ed14f3
        lea ebx, ds:[ebx]
        public_6ed14e0 : nop
        push edi
        push esi
        call public_6ed2a60
        add esp, 8
        add esi, 0x88
        dec ebp
        jne public_6ed14e0
        public_6ed14f3 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        je public_6ed1512
        mov edi, edi
        public_6ed1500 : nop
        push edi
        mov ecx, ebx
        call public_6ed34e0
        add ebx, 0x88
        cmp ebx, esi
        jne public_6ed1500
        public_6ed1512 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        add eax, edx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ed1528 : nop
        test ebp, ebp
        jbe public_6ed165a
        imul ebp, 0x88
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], ebp
        je public_6ed1570
        public_6ed1546 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_6ed2a60
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x88
        add edi, 0x88
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6ed1546
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed1570 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6ed159c
        nop 
        lea esp, ss:[esp]
        public_6ed1580 : nop
        sub esi, 0x88
        sub edi, 0x88
        push esi
        mov ecx, edi
        call public_6ed34e0
        cmp esi, ebx
        jne public_6ed1580
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed159c : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6ed1657
        mov edi, dword ptr ss : [esp+0x28]
        lea ebp, ds:[edi+8]
        lea esi, ds:[ebx+0x38]
        public_6ed15b5 : nop
        push ebp
        lea ecx, ds:[esi-0x34]
        call public_6ed0160
        mov ecx, dword ptr ds : [edi+0x38]
        lea eax, ds:[edi+0x3C]
        mov dword ptr ds : [esi], ecx
        push eax
        lea ecx, ds:[esi+4]
        call public_6f93490
        mov dl, byte ptr ds : [edi+0x48]
        mov byte ptr ds : [esi+0x10], dl
        mov al, byte ptr ds : [edi+0x49]
        mov byte ptr ds : [esi+0x11], al
        mov ecx, dword ptr ds : [edi+0x4C]
        mov dword ptr ds : [esi+0x14], ecx
        mov dl, byte ptr ds : [edi+0x50]
        mov byte ptr ds : [esi+0x18], dl
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x1C], eax
        lea eax, ds:[edi+0x58]
        push eax
        lea ecx, ds:[esi+0x20]
        call public_6f20230
        mov ecx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x2C], ecx
        lea ebx, ds:[esi+0x30]
        mov ecx, ebx
        call public_6f28e10
        mov ecx, dword ptr ds : [edi+0x68]
        test ecx, ecx
        mov dword ptr ds : [ebx], ecx
        je public_6ed1616
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6ed1616 : nop
        lea eax, ds:[edi+0x6C]
        push eax
        lea ecx, ds:[esi+0x34]
        call public_6ef8910
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x44], eax
        mov ecx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x48], ecx
        mov edx, dword ptr ds : [edi+0x84]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x4C], edx
        add esi, 0x88
        lea eax, ds:[esi-0x38]
        cmp eax, ecx
        jne public_6ed15b5
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x24]
        public_6ed1657 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6ed165a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ed12c0)
    }
}

#undef public_6ed1312
#undef public_6ed1314
#undef public_6ed131c
#undef public_6ed132f
#undef public_6ed133c
#undef public_6ed1360
#undef public_6ed137e
#undef public_6ed1388
#undef public_6ed13ab
#undef public_6ed13c6
#undef public_6ed13d0
#undef public_6ed13e6
#undef public_6ed13f0
#undef public_6ed1402
#undef public_6ed142c
#undef public_6ed1442
#undef public_6ed145c
#undef public_6ed1499
#undef public_6ed14a0
#undef public_6ed14ba
#undef public_6ed14e0
#undef public_6ed14f3
#undef public_6ed1500
#undef public_6ed1512
#undef public_6ed1528
#undef public_6ed1546
#undef public_6ed1570
#undef public_6ed1580
#undef public_6ed159c
#undef public_6ed15b5
#undef public_6ed1616
#undef public_6ed1657
#undef public_6ed165a
