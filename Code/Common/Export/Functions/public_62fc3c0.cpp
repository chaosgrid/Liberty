#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c930);
CLANG_FORWARD_PROC_SYMBOL(public_62fb540);
CLANG_FORWARD_PROC_SYMBOL(public_62fc3c0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd330);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fc416 _public_62fc416
#define public_62fc418 _public_62fc418
#define public_62fc420 _public_62fc420
#define public_62fc435 _public_62fc435
#define public_62fc442 _public_62fc442
#define public_62fc463 _public_62fc463
#define public_62fc47b _public_62fc47b
#define public_62fc485 _public_62fc485
#define public_62fc4a5 _public_62fc4a5
#define public_62fc4be _public_62fc4be
#define public_62fc4c2 _public_62fc4c2
#define public_62fc4d5 _public_62fc4d5
#define public_62fc4e0 _public_62fc4e0
#define public_62fc4ee _public_62fc4ee
#define public_62fc52a _public_62fc52a
#define public_62fc559 _public_62fc559
#define public_62fc595 _public_62fc595
#define public_62fc5a0 _public_62fc5a0
#define public_62fc5b7 _public_62fc5b7
#define public_62fc5e0 _public_62fc5e0
#define public_62fc5f0 _public_62fc5f0
#define public_62fc605 _public_62fc605
#define public_62fc632 _public_62fc632
#define public_62fc648 _public_62fc648
#define public_62fc660 _public_62fc660
#define public_62fc684 _public_62fc684
#define public_62fc690 _public_62fc690
#define public_62fc6bd _public_62fc6bd
#define public_62fc6d0 _public_62fc6d0
#define public_62fc700 _public_62fc700
#define public_62fc703 _public_62fc703

PROC_DECLARE(0x62fc3c0, internal_62fc3c0, public_62fc3c0);
extern "C" NAKED register_t __cdecl internal_62fc3c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        sub edi, esi
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_62fc559
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_62fc416
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_62fc418
        public_62fc416 : nop
        mov ecx, ebp
        public_62fc418 : nop
        test edi, edi
        jne public_62fc420
        xor edx, edx
        jmp public_62fc435
        public_62fc420 : nop
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62fc435 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62fc442
        xor eax, eax
        public_62fc442 : nop
        imul eax, 0x1C
        push eax
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_62fc47b
        public_62fc463 : nop
        push esi
        push ebx
        call public_62fd330
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x1C
        add esp, 8
        add ebx, 0x1C
        cmp esi, eax
        jne public_62fc463
        public_62fc47b : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_62fc4a5
        mov dword ptr ss : [esp+0x24], ebp
        public_62fc485 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_62fd330
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x1C
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_62fc485
        mov eax, dword ptr ss : [esp+0x20]
        public_62fc4a5 : nop
        mov edx, ebp
        imul edx, 0x1C
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_62fc4d5
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_62fc4c2
        public_62fc4be : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_62fc4c2 : nop
        add ecx, esi
        push esi
        push ecx
        call public_62fd330
        add esi, 0x1C
        add esp, 8
        cmp esi, ebx
        jne public_62fc4be
        public_62fc4d5 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_62fc4ee
        nop 
        public_62fc4e0 : nop
        mov ecx, esi
        call public_626c930
        add esi, 0x1C
        cmp esi, ebx
        jne public_62fc4e0
        public_62fc4ee : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x1C
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_62fc52a
        xor edx, edx
        mov edx, ebp
        imul edx, 0x1C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62fc52a : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add edx, ebp
        imul edx, 0x1C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62fc559 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, esi
        sub ebx, edi
        mov eax, 0x92492493
        imul ebx
        add edx, ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_62fc648
        mov eax, ebp
        imul eax, 0x1C
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_62fc5b7
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_62fc5a0
        public_62fc595 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_62fc5a0 : nop
        add eax, ebx
        push ebx
        push eax
        call public_62fd330
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        jne public_62fc595
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc5b7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_62fc5f0
        lea esp, ss:[esp]
        public_62fc5e0 : nop
        push ebx
        push esi
        call public_62fd330
        add esp, 8
        add esi, 0x1C
        dec ebp
        jne public_62fc5e0
        public_62fc5f0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_62fc632
        lea ebp, ds:[ebx+0xC]
        lea esi, ds:[edi+8]
        public_62fc605 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi-8], edx
        mov ax, word ptr ds : [ebx+4]
        mov word ptr ds : [esi-4], ax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi], ecx
        push ebp
        lea ecx, ds:[esi+4]
        call public_62fb540
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x1C
        lea edx, ds:[esi-8]
        cmp edx, eax
        jne public_62fc605
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc632 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62fc648 : nop
        test ebp, ebp
        jbe public_62fc703
        imul ebp, 0x1C
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_62fc684
        nop 
        public_62fc660 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        push ecx
        call public_62fd330
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x1C
        add ebx, 0x1C
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_62fc660
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc684 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_62fc6bd
        nop 
        public_62fc690 : nop
        mov edx, dword ptr ds : [esi-0x1C]
        sub esi, 0x1C
        sub ebx, 0x1C
        mov dword ptr ds : [ebx], edx
        mov ax, word ptr ds : [esi+4]
        mov word ptr ds : [ebx+4], ax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[esi+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        lea ecx, ds:[ebx+0xC]
        call public_62fb540
        cmp esi, edi
        jne public_62fc690
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc6bd : nop
        lea eax, ds:[edi+ebp]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_62fc700
        mov ebx, dword ptr ss : [esp+0x28]
        lea esi, ds:[edi+8]
        nop 
        public_62fc6d0 : nop
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [esi-8], eax
        mov cx, word ptr ds : [ebx+4]
        mov word ptr ds : [esi-4], cx
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[ebx+0xC]
        push eax
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], edx
        call public_62fb540
        mov ecx, dword ptr ss : [esp+0x20]
        add esi, 0x1C
        lea eax, ds:[esi-8]
        cmp eax, ecx
        jne public_62fc6d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fc700 : nop
        add dword ptr ds : [ecx+8], ebp
        public_62fc703 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62fc3c0)
    }
}

#undef public_62fc416
#undef public_62fc418
#undef public_62fc420
#undef public_62fc435
#undef public_62fc442
#undef public_62fc463
#undef public_62fc47b
#undef public_62fc485
#undef public_62fc4a5
#undef public_62fc4be
#undef public_62fc4c2
#undef public_62fc4d5
#undef public_62fc4e0
#undef public_62fc4ee
#undef public_62fc52a
#undef public_62fc559
#undef public_62fc595
#undef public_62fc5a0
#undef public_62fc5b7
#undef public_62fc5e0
#undef public_62fc5f0
#undef public_62fc605
#undef public_62fc632
#undef public_62fc648
#undef public_62fc660
#undef public_62fc684
#undef public_62fc690
#undef public_62fc6bd
#undef public_62fc6d0
#undef public_62fc700
#undef public_62fc703
