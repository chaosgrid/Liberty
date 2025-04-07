#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b741b0);
CLANG_FORWARD_PROC_SYMBOL(public_6b74a10);
CLANG_FORWARD_PROC_SYMBOL(public_6b74b20);

#define public_6b7449c _public_6b7449c
#define public_6b744c7 _public_6b744c7
#define public_6b744f4 _public_6b744f4
#define public_6b74507 _public_6b74507
#define public_6b74514 _public_6b74514
#define public_6b74528 _public_6b74528
#define public_6b74549 _public_6b74549
#define public_6b74552 _public_6b74552
#define public_6b74566 _public_6b74566
#define public_6b7457d _public_6b7457d
#define public_6b74581 _public_6b74581
#define public_6b74594 _public_6b74594
#define public_6b74597 _public_6b74597
#define public_6b7459b _public_6b7459b
#define public_6b745b4 _public_6b745b4
#define public_6b745cd _public_6b745cd
#define public_6b745dc _public_6b745dc
#define public_6b745e1 _public_6b745e1
#define public_6b745ee _public_6b745ee
#define public_6b74601 _public_6b74601
#define public_6b74605 _public_6b74605
#define public_6b74629 _public_6b74629
#define public_6b7462c _public_6b7462c
#define public_6b74633 _public_6b74633
#define public_6b7464e _public_6b7464e
#define public_6b746a7 _public_6b746a7
#define public_6b746d7 _public_6b746d7
#define public_6b746de _public_6b746de
#define public_6b746f9 _public_6b746f9
#define public_6b7470a _public_6b7470a
#define public_6b74758 _public_6b74758
#define public_6b7475a _public_6b7475a
#define public_6b747ae _public_6b747ae
#define public_6b747cf _public_6b747cf
#define public_6b747e8 _public_6b747e8
#define public_6b7480c _public_6b7480c
#define public_6b7483f _public_6b7483f
#define public_6b74841 _public_6b74841
#define public_6b7486c _public_6b7486c
#define public_6b74878 _public_6b74878
#define public_6b748c5 _public_6b748c5
#define public_6b7490a _public_6b7490a
#define public_6b74936 _public_6b74936
#define public_6b7493d _public_6b7493d
#define public_6b74958 _public_6b74958
#define public_6b749a8 _public_6b749a8
#define public_6b749c1 _public_6b749c1
#define public_6b749db _public_6b749db
#define public_6b749e3 _public_6b749e3

PROC_DECLARE(0x6b74470, internal_6b74470, public_6b74470);
extern "C" NAKED register_t __cdecl internal_6b74470()
{
    __asm
    {
        sub esp, 0x10C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x11C]
        xor ebx, ebx
        push esi
        push edi
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x14], ebx
        cmp eax, 0x34
        mov dword ptr ss : [esp+0x10], ebx
        je public_6b7449c
        cmp eax, 0x30
        jne public_6b749db
        public_6b7449c : nop
        mov esi, dword ptr ss : [ebp+4]
        mov edi, offset public_6b7a028
        mov ecx, 0xB
        xor eax, eax
        repe cmpsb
        jne public_6b749db
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, ebx
        jne public_6b744c7
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jmp public_6b749e3
        public_6b744c7 : nop
        cmp dword ptr ss : [ebp+0x10], 0x80000000
        jne public_6b74507
        cmp dword ptr ss : [ebp+0x1C], 3
        jne public_6b74507
        mov ebx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [ebx+0x128]
        test eax, eax
        je public_6b744f4
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jmp public_6b749e3
        public_6b744f4 : nop
        cmp ebx, dword ptr ds : [public_6b7a224]
        je public_6b7480c
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        je public_6b74514
        public_6b74507 : nop
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jmp public_6b749e3
        public_6b74514 : nop
        mov al, byte ptr ds : [edx]
        test al, al
        je public_6b74549
        cmp al, 0x5C
        je public_6b74528
        cmp al, 0x2F
        je public_6b74528
        cmp byte ptr ds : [edx+1], 0x3A
        jne public_6b74549
        public_6b74528 : nop
        push 0x104
        lea ecx, ss:[esp+0x1C]
        push edx
        push ecx
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ss : [esp+0x11B], 0
        jmp public_6b74633
        public_6b74549 : nop
        mov cl, byte ptr ds : [ebx+0xD]
        xor eax, eax
        test cl, cl
        je public_6b74566
        public_6b74552 : nop
        cmp eax, 0x103
        jge public_6b74507
        mov byte ptr ss : [esp+eax+0x18], cl
        mov cl, byte ptr ds : [ebx+eax+0xE]
        inc eax
        test cl, cl
        jne public_6b74552
        public_6b74566 : nop
        lea ecx, ss:[esp+eax+0x18]
        lea eax, ss:[esp+0x18]
        cmp ecx, eax
        je public_6b7457d
        mov al, byte ptr ds : [ecx-1]
        cmp al, 0x5C
        je public_6b74581
        cmp al, 0x2F
        je public_6b74581
        public_6b7457d : nop
        mov byte ptr ds : [ecx], 0x5C
        inc ecx
        public_6b74581 : nop
        mov al, byte ptr ds : [edx]
        mov bl, 0x2E
        cmp al, bl
        jne public_6b745ee
        mov al, byte ptr ds : [edx+1]
        cmp al, 0x5C
        je public_6b74594
        cmp al, 0x2F
        jne public_6b74597
        public_6b74594 : nop
        add edx, 2
        public_6b74597 : nop
        cmp byte ptr ds : [edx], bl
        jne public_6b745ee
        public_6b7459b : nop
        cmp byte ptr ds : [edx+1], bl
        jne public_6b745ee
        mov eax, ecx
        lea esi, ss:[esp+0x18]
        sub eax, esi
        cmp eax, 2
        jle public_6b74507
        sub ecx, 2
        public_6b745b4 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x5C
        je public_6b745cd
        cmp al, 0x2F
        je public_6b745cd
        lea eax, ss:[esp+0x18]
        cmp ecx, eax
        je public_6b74507
        dec ecx
        jmp public_6b745b4
        public_6b745cd : nop
        mov al, byte ptr ds : [edx+2]
        cmp al, 0x5C
        je public_6b745dc
        cmp al, 0x2F
        je public_6b745dc
        xor eax, eax
        jmp public_6b745e1
        public_6b745dc : nop
        mov eax, 1
        public_6b745e1 : nop
        and eax, 0xFF
        lea edx, ds:[edx+eax+2]
        cmp byte ptr ds : [edx], bl
        je public_6b7459b
        public_6b745ee : nop
        lea eax, ss:[esp+0x18]
        cmp ecx, eax
        je public_6b74601
        mov al, byte ptr ds : [ecx-1]
        cmp al, 0x5C
        je public_6b74605
        cmp al, 0x2F
        je public_6b74605
        public_6b74601 : nop
        mov byte ptr ds : [ecx], 0x5C
        inc ecx
        public_6b74605 : nop
        lea eax, ss:[esp+0x11C]
        sub eax, ecx
        cmp eax, 1
        jle public_6b74629
        push eax
        push edx
        push ecx
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ss : [esp+0x11B], 0
        jmp public_6b7462c
        public_6b74629 : nop
        mov byte ptr ds : [ecx], 0
        public_6b7462c : nop
        mov ebx, dword ptr ss : [esp+0x120]
        public_6b74633 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_6b7903c]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        jne public_6b7464e
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6b749e3
        public_6b7464e : nop
        test al, 0x10
        je public_6b7470a
        push 1
        push 0x170
        call dword ptr ds : [public_6b7906c]
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        je public_6b746f9
        mov ecx, ebp
        call public_6b74b20
        lea edi, ss:[esp+0x18]
        mov ecx, esi
        xor eax, eax
        mov dword ptr ss : [ebp], offset public_6b79218
        mov dword ptr ss : [ebp+0x16C], 1
        mov dword ptr ss : [esp+0x10], ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x108
        jb public_6b746a7
        mov eax, 0x107
        public_6b746a7 : nop
        lea ecx, ds:[eax+1]
        lea esi, ss:[esp+0x18]
        mov edx, ecx
        lea edi, ss:[ebp+0xD]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        test eax, eax
        mov dword ptr ss : [ebp+0x12C], eax
        jle public_6b746de
        mov cl, byte ptr ds : [eax+ebp+0xC]
        cmp cl, 0x5C
        je public_6b746d7
        cmp cl, 0x2F
        jne public_6b746de
        public_6b746d7 : nop
        dec eax
        mov dword ptr ss : [ebp+0x12C], eax
        public_6b746de : nop
        mov eax, dword ptr ss : [ebp+0x12C]
        mov byte ptr ds : [eax+ebp+0xD], 0x5C
        mov ecx, dword ptr ss : [ebp+0x12C]
        mov byte ptr ds : [ecx+ebp+0xE], 0
        jmp public_6b749e3
        public_6b746f9 : nop
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6b749e3
        public_6b7470a : nop
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_6b747e8
        mov edi, offset public_6b7a1d8
        mov ecx, 4
        xor edx, edx
        repe cmpsb
        jne public_6b747e8
        mov edi, 1
        push edi
        push 0x170
        call dword ptr ds : [public_6b7906c]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6b74758
        mov ecx, esi
        call public_6b74b20
        mov dword ptr ds : [esi], offset public_6b79218
        mov dword ptr ds : [esi+0x16C], edi
        jmp public_6b7475a
        public_6b74758 : nop
        xor esi, esi
        public_6b7475a : nop
        lea eax, ss:[esp+0x18]
        push ebp
        push eax
        lea ecx, ds:[esi+0x134]
        mov dword ptr ss : [esp+0x18], esi
        call public_6b74a10
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x130], eax
        je public_6b747ae
        mov ecx, dword ptr ss : [ebp+0xC]
        push 0x108
        lea edx, ds:[esi+0xD]
        push ecx
        push edx
        call dword ptr ds : [public_6b79074]
        mov dword ptr ds : [esi+0x12C], 0
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 0xC
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ds : [esi+0x128], edi
        jmp public_6b749e3
        public_6b747ae : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFA
        test ecx, ecx
        mov esi, ecx
        je public_6b747cf
        call public_6b741b0
        push esi
        call dword ptr ds : [public_6b79070]
        add esp, 4
        public_6b747cf : nop
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [ebx+0x11C], eax
        jmp public_6b749e3
        public_6b747e8 : nop
        mov dword ptr ss : [ebp+0x28], ebx
        mov eax, dword ptr ds : [public_6b7a220]
        lea edx, ss:[esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp+0x28], 0
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6b749e3
        public_6b7480c : nop
        push 1
        push 0x170
        call dword ptr ds : [public_6b7906c]
        mov esi, eax
        xor edi, edi
        add esp, 8
        cmp esi, edi
        je public_6b7483f
        mov ecx, esi
        call public_6b74b20
        mov dword ptr ds : [esi], offset public_6b79218
        mov dword ptr ds : [esi+0x16C], 1
        mov eax, esi
        jmp public_6b74841
        public_6b7483f : nop
        xor eax, eax
        public_6b74841 : nop
        mov esi, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [esp+0x10], eax
        cmp esi, edi
        je public_6b748c5
        lea edi, ds:[eax+0x120]
        mov eax, dword ptr ds : [eax+0x120]
        cmp eax, esi
        je public_6b74878
        test eax, eax
        je public_6b7486c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6b7486c : nop
        test esi, esi
        mov dword ptr ds : [edi], esi
        je public_6b74878
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6b74878 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x2C]
        push 0x108
        mov dword ptr ds : [ecx+0x130], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x128], 1
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx+0x118], eax
        mov edx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[ebx+0xD]
        push edx
        push eax
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov dword ptr ds : [ebx+0x12C], 0
        jmp public_6b749e3
        public_6b748c5 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call dword ptr ds : [public_6b7903c]
        cmp eax, 0xFFFFFFFF
        je public_6b749a8
        test al, 0x10
        je public_6b74958
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x118], edx
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, esi
        xor eax, eax
        repne scasb
        mov edx, dword ptr ss : [esp+0x10]
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x108
        jb public_6b7490a
        mov eax, 0x107
        public_6b7490a : nop
        lea ecx, ds:[eax+1]
        lea edi, ds:[edx+0xD]
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        test eax, eax
        mov dword ptr ds : [edx+0x12C], eax
        jle public_6b7493d
        mov cl, byte ptr ds : [eax+edx+0xC]
        cmp cl, 0x5C
        je public_6b74936
        cmp cl, 0x2F
        jne public_6b7493d
        public_6b74936 : nop
        dec eax
        mov dword ptr ds : [edx+0x12C], eax
        public_6b7493d : nop
        mov ecx, dword ptr ds : [edx+0x12C]
        mov byte ptr ds : [ecx+edx+0xD], 0x5C
        mov eax, dword ptr ds : [edx+0x12C]
        mov byte ptr ds : [eax+edx+0xE], 0
        jmp public_6b749e3
        public_6b74958 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        push ebp
        push eax
        lea ecx, ds:[esi+0x134]
        call public_6b74a10
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x130], eax
        je public_6b749a8
        mov ecx, dword ptr ss : [ebp+0xC]
        push 0x108
        lea edx, ds:[esi+0xD]
        push ecx
        push edx
        call dword ptr ds : [public_6b79074]
        mov dword ptr ds : [esi+0x12C], edi
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 0xC
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ds : [esi+0x128], 1
        jmp public_6b749e3
        public_6b749a8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        mov esi, ecx
        je public_6b749c1
        call public_6b741b0
        push esi
        call dword ptr ds : [public_6b79070]
        add esp, 4
        public_6b749c1 : nop
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [ebx+0x11C], eax
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFA
        jmp public_6b749e3
        public_6b749db : nop
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFD
        public_6b749e3 : nop
        mov ecx, dword ptr ss : [esp+0x128]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], edx
        pop ebx
        add esp, 0x10C
        ret 0xC
        UNREACHABLE_TRAP(0x6b74470)
    }
}

#undef public_6b7449c
#undef public_6b744c7
#undef public_6b744f4
#undef public_6b74507
#undef public_6b74514
#undef public_6b74528
#undef public_6b74549
#undef public_6b74552
#undef public_6b74566
#undef public_6b7457d
#undef public_6b74581
#undef public_6b74594
#undef public_6b74597
#undef public_6b7459b
#undef public_6b745b4
#undef public_6b745cd
#undef public_6b745dc
#undef public_6b745e1
#undef public_6b745ee
#undef public_6b74601
#undef public_6b74605
#undef public_6b74629
#undef public_6b7462c
#undef public_6b74633
#undef public_6b7464e
#undef public_6b746a7
#undef public_6b746d7
#undef public_6b746de
#undef public_6b746f9
#undef public_6b7470a
#undef public_6b74758
#undef public_6b7475a
#undef public_6b747ae
#undef public_6b747cf
#undef public_6b747e8
#undef public_6b7480c
#undef public_6b7483f
#undef public_6b74841
#undef public_6b7486c
#undef public_6b74878
#undef public_6b748c5
#undef public_6b7490a
#undef public_6b74936
#undef public_6b7493d
#undef public_6b74958
#undef public_6b749a8
#undef public_6b749c1
#undef public_6b749db
#undef public_6b749e3
