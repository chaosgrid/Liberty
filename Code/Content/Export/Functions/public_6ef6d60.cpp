#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6330);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6d60);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8330);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef6db6 _public_6ef6db6
#define public_6ef6db8 _public_6ef6db8
#define public_6ef6dc0 _public_6ef6dc0
#define public_6ef6dd5 _public_6ef6dd5
#define public_6ef6de2 _public_6ef6de2
#define public_6ef6e03 _public_6ef6e03
#define public_6ef6e1b _public_6ef6e1b
#define public_6ef6e25 _public_6ef6e25
#define public_6ef6e45 _public_6ef6e45
#define public_6ef6e5e _public_6ef6e5e
#define public_6ef6e62 _public_6ef6e62
#define public_6ef6e75 _public_6ef6e75
#define public_6ef6e80 _public_6ef6e80
#define public_6ef6e8e _public_6ef6e8e
#define public_6ef6eca _public_6ef6eca
#define public_6ef6ef9 _public_6ef6ef9
#define public_6ef6f35 _public_6ef6f35
#define public_6ef6f40 _public_6ef6f40
#define public_6ef6f57 _public_6ef6f57
#define public_6ef6f80 _public_6ef6f80
#define public_6ef6f90 _public_6ef6f90
#define public_6ef6fa0 _public_6ef6fa0
#define public_6ef6faf _public_6ef6faf
#define public_6ef6fc5 _public_6ef6fc5
#define public_6ef6fe0 _public_6ef6fe0
#define public_6ef7004 _public_6ef7004
#define public_6ef7010 _public_6ef7010
#define public_6ef7056 _public_6ef7056
#define public_6ef7068 _public_6ef7068
#define public_6ef70b2 _public_6ef70b2
#define public_6ef70b5 _public_6ef70b5

PROC_DECLARE(0x6ef6d60, internal_6ef6d60, public_6ef6d60);
extern "C" NAKED register_t __cdecl internal_6ef6d60()
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
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6ef6ef9
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_6ef6db6
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6ef6db8
        public_6ef6db6 : nop
        mov ecx, ebp
        public_6ef6db8 : nop
        test edi, edi
        jne public_6ef6dc0
        xor edx, edx
        jmp public_6ef6dd5
        public_6ef6dc0 : nop
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ef6dd5 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ef6de2
        xor eax, eax
        public_6ef6de2 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6ef6e1b
        public_6ef6e03 : nop
        push esi
        push ebx
        call public_6ef7f40
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x38
        add esp, 8
        add ebx, 0x38
        cmp esi, eax
        jne public_6ef6e03
        public_6ef6e1b : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6ef6e45
        mov dword ptr ss : [esp+0x24], ebp
        public_6ef6e25 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6ef7f40
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x38
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6ef6e25
        mov eax, dword ptr ss : [esp+0x20]
        public_6ef6e45 : nop
        mov edx, ebp
        imul edx, 0x38
        lea ecx, ds:[edx+ebx]
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6ef6e75
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6ef6e62
        public_6ef6e5e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6ef6e62 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6ef7f40
        add esi, 0x38
        add esp, 8
        cmp esi, ebx
        jne public_6ef6e5e
        public_6ef6e75 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6ef6e8e
        nop 
        public_6ef6e80 : nop
        mov ecx, esi
        call public_6ef6330
        add esi, 0x38
        cmp esi, ebx
        jne public_6ef6e80
        public_6ef6e8e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x38
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6ef6eca
        xor edx, edx
        mov edx, ebp
        imul edx, 0x38
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ef6eca : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add edx, ebp
        imul edx, 0x38
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ef6ef9 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, esi
        sub edi, ebx
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6ef6fc5
        mov eax, ebp
        imul eax, 0x38
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_6ef6f57
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6ef6f40
        public_6ef6f35 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6ef6f40 : nop
        add eax, edi
        push edi
        push eax
        call public_6ef7f40
        add edi, 0x38
        add esp, 8
        cmp edi, esi
        jne public_6ef6f35
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef6f57 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6ef6f90
        lea esp, ss:[esp]
        public_6ef6f80 : nop
        push edi
        push esi
        call public_6ef7f40
        add esp, 8
        add esi, 0x38
        dec ebp
        jne public_6ef6f80
        public_6ef6f90 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        je public_6ef6faf
        nop 
        lea esp, ss:[esp]
        public_6ef6fa0 : nop
        push edi
        mov ecx, ebx
        call public_6ef8330
        add ebx, 0x38
        cmp ebx, esi
        jne public_6ef6fa0
        public_6ef6faf : nop
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
        public_6ef6fc5 : nop
        test ebp, ebp
        jbe public_6ef70b5
        imul ebp, 0x38
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6ef7004
        lea esp, ss:[esp]
        public_6ef6fe0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_6ef7f40
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x38
        add edi, 0x38
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6ef6fe0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef7004 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6ef7056
        nop 
        public_6ef7010 : nop
        sub esi, 0x38
        sub edi, 0x38
        push esi
        mov ecx, edi
        call public_6f971e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], ecx
        mov edx, dword ptr ds : [esi+0x20]
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ds:[edi+0x24]
        mov dword ptr ds : [edi+0x20], edx
        call public_6f971e0
        cmp esi, ebx
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x34], ecx
        jne public_6ef7010
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef7056 : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6ef70b2
        mov edi, dword ptr ss : [esp+0x28]
        lea esi, ds:[ebx+0x14]
        public_6ef7068 : nop
        push edi
        lea ecx, ds:[esi-0x14]
        call public_6f971e0
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi-4], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0xC], eax
        lea eax, ds:[edi+0x24]
        push eax
        lea ecx, ds:[esi+0x10]
        call public_6f971e0
        mov ecx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        add esi, 0x38
        lea edx, ds:[esi-0x14]
        cmp edx, eax
        jne public_6ef7068
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef70b2 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6ef70b5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ef6d60)
    }
}

#undef public_6ef6db6
#undef public_6ef6db8
#undef public_6ef6dc0
#undef public_6ef6dd5
#undef public_6ef6de2
#undef public_6ef6e03
#undef public_6ef6e1b
#undef public_6ef6e25
#undef public_6ef6e45
#undef public_6ef6e5e
#undef public_6ef6e62
#undef public_6ef6e75
#undef public_6ef6e80
#undef public_6ef6e8e
#undef public_6ef6eca
#undef public_6ef6ef9
#undef public_6ef6f35
#undef public_6ef6f40
#undef public_6ef6f57
#undef public_6ef6f80
#undef public_6ef6f90
#undef public_6ef6fa0
#undef public_6ef6faf
#undef public_6ef6fc5
#undef public_6ef6fe0
#undef public_6ef7004
#undef public_6ef7010
#undef public_6ef7056
#undef public_6ef7068
#undef public_6ef70b2
#undef public_6ef70b5
