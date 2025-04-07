#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f302a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7e40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8750);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8a80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa87a6 _public_6fa87a6
#define public_6fa87a8 _public_6fa87a8
#define public_6fa87b0 _public_6fa87b0
#define public_6fa87c5 _public_6fa87c5
#define public_6fa87d2 _public_6fa87d2
#define public_6fa87f3 _public_6fa87f3
#define public_6fa880b _public_6fa880b
#define public_6fa8815 _public_6fa8815
#define public_6fa8835 _public_6fa8835
#define public_6fa884e _public_6fa884e
#define public_6fa8852 _public_6fa8852
#define public_6fa8865 _public_6fa8865
#define public_6fa8870 _public_6fa8870
#define public_6fa887e _public_6fa887e
#define public_6fa88ba _public_6fa88ba
#define public_6fa88e9 _public_6fa88e9
#define public_6fa8925 _public_6fa8925
#define public_6fa8930 _public_6fa8930
#define public_6fa8947 _public_6fa8947
#define public_6fa8970 _public_6fa8970
#define public_6fa8980 _public_6fa8980
#define public_6fa8990 _public_6fa8990
#define public_6fa899f _public_6fa899f
#define public_6fa89b5 _public_6fa89b5
#define public_6fa89d0 _public_6fa89d0
#define public_6fa89f4 _public_6fa89f4
#define public_6fa8a00 _public_6fa8a00
#define public_6fa8a49 _public_6fa8a49
#define public_6fa8a54 _public_6fa8a54
#define public_6fa8a67 _public_6fa8a67
#define public_6fa8a6a _public_6fa8a6a

PROC_DECLARE(0x6fa8750, internal_6fa8750, public_6fa8750);
extern "C" NAKED register_t __cdecl internal_6fa8750()
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
        mov eax, 0xB21642C9
        imul edi
        add edx, edi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa88e9
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_6fa87a6
        mov ecx, esi
        sub ecx, edi
        mov eax, 0xB21642C9
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6fa87a8
        public_6fa87a6 : nop
        mov ecx, ebp
        public_6fa87a8 : nop
        test edi, edi
        jne public_6fa87b0
        xor edx, edx
        jmp public_6fa87c5
        public_6fa87b0 : nop
        sub esi, edi
        mov eax, 0xB21642C9
        imul esi
        add edx, esi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa87c5 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa87d2
        xor eax, eax
        public_6fa87d2 : nop
        imul eax, 0x5C
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa880b
        public_6fa87f3 : nop
        push esi
        push ebx
        call public_6f302a0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x5C
        add esp, 8
        add ebx, 0x5C
        cmp esi, eax
        jne public_6fa87f3
        public_6fa880b : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6fa8835
        mov dword ptr ss : [esp+0x24], ebp
        public_6fa8815 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6f302a0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x5C
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa8815
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa8835 : nop
        mov edx, ebp
        imul edx, 0x5C
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6fa8865
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa8852
        public_6fa884e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6fa8852 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f302a0
        add esi, 0x5C
        add esp, 8
        cmp esi, ebx
        jne public_6fa884e
        public_6fa8865 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6fa887e
        nop 
        public_6fa8870 : nop
        mov ecx, esi
        call public_6f30830
        add esi, 0x5C
        cmp esi, ebx
        jne public_6fa8870
        public_6fa887e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x5C
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6fa88ba
        xor edx, edx
        mov edx, ebp
        imul edx, 0x5C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa88ba : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0xB21642C9
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add edx, ebp
        imul edx, 0x5C
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa88e9 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, esi
        sub edi, ebx
        mov eax, 0xB21642C9
        imul edi
        add edx, edi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6fa89b5
        mov eax, ebp
        imul eax, 0x5C
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_6fa8947
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6fa8930
        public_6fa8925 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6fa8930 : nop
        add eax, edi
        push edi
        push eax
        call public_6f302a0
        add edi, 0x5C
        add esp, 8
        cmp edi, esi
        jne public_6fa8925
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa8947 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0xB21642C9
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6fa8980
        lea esp, ss:[esp]
        public_6fa8970 : nop
        push edi
        push esi
        call public_6f302a0
        add esp, 8
        add esi, 0x5C
        dec ebp
        jne public_6fa8970
        public_6fa8980 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        je public_6fa899f
        nop 
        lea esp, ss:[esp]
        public_6fa8990 : nop
        push edi
        mov ecx, ebx
        call public_6fa7e40
        add ebx, 0x5C
        cmp ebx, esi
        jne public_6fa8990
        public_6fa899f : nop
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
        public_6fa89b5 : nop
        test ebp, ebp
        jbe public_6fa8a6a
        imul ebp, 0x5C
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6fa89f4
        lea esp, ss:[esp]
        public_6fa89d0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_6f302a0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x5C
        add edi, 0x5C
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6fa89d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa89f4 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6fa8a49
        nop 
        public_6fa8a00 : nop
        mov ecx, dword ptr ds : [esi-0x5C]
        sub esi, 0x5C
        sub edi, 0x5C
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], ecx
        mov dl, byte ptr ds : [esi+0x11]
        mov byte ptr ds : [edi+0x11], dl
        mov al, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0x10], al
        mov cl, byte ptr ds : [esi+0x12]
        mov byte ptr ds : [edi+0x12], cl
        mov dl, byte ptr ds : [esi+0x13]
        lea eax, ds:[esi+0x18]
        push eax
        lea ecx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x13], dl
        call public_6fa8a80
        cmp esi, ebx
        jne public_6fa8a00
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa8a49 : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_6fa8a67
        mov edi, dword ptr ss : [esp+0x28]
        public_6fa8a54 : nop
        push edi
        mov ecx, ebx
        call public_6fa7e40
        add ebx, 0x5C
        cmp ebx, esi
        jne public_6fa8a54
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa8a67 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6fa8a6a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa8750)
    }
}

#undef public_6fa87a6
#undef public_6fa87a8
#undef public_6fa87b0
#undef public_6fa87c5
#undef public_6fa87d2
#undef public_6fa87f3
#undef public_6fa880b
#undef public_6fa8815
#undef public_6fa8835
#undef public_6fa884e
#undef public_6fa8852
#undef public_6fa8865
#undef public_6fa8870
#undef public_6fa887e
#undef public_6fa88ba
#undef public_6fa88e9
#undef public_6fa8925
#undef public_6fa8930
#undef public_6fa8947
#undef public_6fa8970
#undef public_6fa8980
#undef public_6fa8990
#undef public_6fa899f
#undef public_6fa89b5
#undef public_6fa89d0
#undef public_6fa89f4
#undef public_6fa8a00
#undef public_6fa8a49
#undef public_6fa8a54
#undef public_6fa8a67
#undef public_6fa8a6a
