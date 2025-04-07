#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7bd18 _public_6f7bd18
#define public_6f7bd1a _public_6f7bd1a
#define public_6f7bd22 _public_6f7bd22
#define public_6f7bd37 _public_6f7bd37
#define public_6f7bd44 _public_6f7bd44
#define public_6f7bd61 _public_6f7bd61
#define public_6f7bd78 _public_6f7bd78
#define public_6f7bd82 _public_6f7bd82
#define public_6f7bd90 _public_6f7bd90
#define public_6f7bda7 _public_6f7bda7
#define public_6f7bdad _public_6f7bdad
#define public_6f7bdd0 _public_6f7bdd0
#define public_6f7bde7 _public_6f7bde7
#define public_6f7bdf1 _public_6f7bdf1
#define public_6f7be2d _public_6f7be2d
#define public_6f7be5c _public_6f7be5c
#define public_6f7be93 _public_6f7be93
#define public_6f7beaa _public_6f7beaa
#define public_6f7beb4 _public_6f7beb4
#define public_6f7bed8 _public_6f7bed8
#define public_6f7beeb _public_6f7beeb
#define public_6f7bef1 _public_6f7bef1
#define public_6f7bf00 _public_6f7bf00
#define public_6f7bf16 _public_6f7bf16
#define public_6f7bf2c _public_6f7bf2c
#define public_6f7bf45 _public_6f7bf45
#define public_6f7bf5c _public_6f7bf5c
#define public_6f7bf66 _public_6f7bf66
#define public_6f7bf71 _public_6f7bf71
#define public_6f7bf8e _public_6f7bf8e
#define public_6f7bfa0 _public_6f7bfa0
#define public_6f7bfba _public_6f7bfba
#define public_6f7bfbd _public_6f7bfbd

PROC_DECLARE(0x6f7bcc0, internal_6f7bcc0, public_6f7bcc0);
extern "C" NAKED register_t __cdecl internal_6f7bcc0()
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
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_6f7be5c
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6f7bd18
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_6f7bd1a
        public_6f7bd18 : nop
        mov ecx, esi
        public_6f7bd1a : nop
        test ebp, ebp
        jne public_6f7bd22
        xor edx, edx
        jmp public_6f7bd37
        public_6f7bd22 : nop
        sub ebx, ebp
        mov eax, 0x92492493
        imul ebx
        add edx, ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7bd37 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f7bd44
        xor eax, eax
        public_6f7bd44 : nop
        imul eax, 0x1C
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f7bd82
        public_6f7bd61 : nop
        test edx, edx
        je public_6f7bd78
        mov ecx, 7
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f7bd78 : nop
        add eax, 0x1C
        add edx, 0x1C
        cmp eax, ebx
        jne public_6f7bd61
        public_6f7bd82 : nop
        test esi, esi
        mov eax, edx
        jbe public_6f7bdad
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        mov edi, edi
        public_6f7bd90 : nop
        test eax, eax
        je public_6f7bda7
        mov ecx, 7
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f7bda7 : nop
        add eax, 0x1C
        dec ebx
        jne public_6f7bd90
        public_6f7bdad : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x1C
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6f7bdf1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6f7bdd0 : nop
        test ebx, ebx
        je public_6f7bde7
        mov ecx, 7
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f7bde7 : nop
        add eax, 0x1C
        add ebx, 0x1C
        cmp eax, ebp
        jne public_6f7bdd0
        public_6f7bdf1 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x1C
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6f7be2d
        xor edx, edx
        mov edx, esi
        imul edx, 0x1C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7be2d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x1C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7be5c : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_6f7bf2c
        mov ecx, esi
        imul ecx, 0x1C
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6f7beb4
        mov edx, eax
        sub edx, ecx
        public_6f7be93 : nop
        test eax, eax
        je public_6f7beaa
        mov ecx, 7
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6f7beaa : nop
        add edx, 0x1C
        add eax, 0x1C
        cmp edx, ebx
        jne public_6f7be93
        public_6f7beb4 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_6f7bef1
        mov eax, esi
        public_6f7bed8 : nop
        test ebx, ebx
        je public_6f7beeb
        mov ecx, 7
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6f7beeb : nop
        add ebx, 0x1C
        dec eax
        jne public_6f7bed8
        public_6f7bef1 : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_6f7bf16
        lea ebx, ds:[ebx]
        public_6f7bf00 : nop
        mov edi, eax
        add eax, 0x1C
        cmp eax, ebx
        mov ecx, 7
        mov esi, edx
        rep movsd
        jne public_6f7bf00
        mov edi, dword ptr ss : [esp+0x10]
        public_6f7bf16 : nop
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
        public_6f7bf2c : nop
        test esi, esi
        jbe public_6f7bfbd
        imul esi, 0x1C
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_6f7bf66
        public_6f7bf45 : nop
        test edx, edx
        je public_6f7bf5c
        mov ecx, 7
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6f7bf5c : nop
        add eax, 0x1C
        add edx, 0x1C
        cmp eax, ebx
        jne public_6f7bf45
        public_6f7bf66 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_6f7bf8e
        public_6f7bf71 : nop
        sub eax, 0x1C
        sub ebx, 0x1C
        cmp eax, ebp
        mov ecx, 7
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_6f7bf71
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6f7bf8e : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_6f7bfba
        mov edx, dword ptr ss : [esp+0x28]
        lea esp, ss:[esp]
        public_6f7bfa0 : nop
        mov edi, ebp
        add ebp, 0x1C
        cmp ebp, eax
        mov ecx, 7
        mov esi, edx
        rep movsd
        jne public_6f7bfa0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6f7bfba : nop
        add dword ptr ds : [edi+8], esi
        public_6f7bfbd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f7bcc0)
    }
}

#undef public_6f7bd18
#undef public_6f7bd1a
#undef public_6f7bd22
#undef public_6f7bd37
#undef public_6f7bd44
#undef public_6f7bd61
#undef public_6f7bd78
#undef public_6f7bd82
#undef public_6f7bd90
#undef public_6f7bda7
#undef public_6f7bdad
#undef public_6f7bdd0
#undef public_6f7bde7
#undef public_6f7bdf1
#undef public_6f7be2d
#undef public_6f7be5c
#undef public_6f7be93
#undef public_6f7beaa
#undef public_6f7beb4
#undef public_6f7bed8
#undef public_6f7beeb
#undef public_6f7bef1
#undef public_6f7bf00
#undef public_6f7bf16
#undef public_6f7bf2c
#undef public_6f7bf45
#undef public_6f7bf5c
#undef public_6f7bf66
#undef public_6f7bf71
#undef public_6f7bf8e
#undef public_6f7bfa0
#undef public_6f7bfba
#undef public_6f7bfbd
