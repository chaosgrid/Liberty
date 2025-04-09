#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4af5c0);
CLANG_FORWARD_PROC_SYMBOL(public_4b2ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4b2b20);
CLANG_FORWARD_PROC_SYMBOL(public_5126f0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_577e80);
CLANG_FORWARD_PROC_SYMBOL(public_577ea0);
CLANG_FORWARD_PROC_SYMBOL(public_577ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4af627 _public_4af627
#define public_4af62f _public_4af62f
#define public_4af664 _public_4af664
#define public_4af667 _public_4af667
#define public_4af691 _public_4af691
#define public_4af694 _public_4af694
#define public_4af6a2 _public_4af6a2
#define public_4af6aa _public_4af6aa
#define public_4af719 _public_4af719
#define public_4af71e _public_4af71e
#define public_4af726 _public_4af726
#define public_4af739 _public_4af739
#define public_4af744 _public_4af744
#define public_4af7c8 _public_4af7c8
#define public_4af7f4 _public_4af7f4
#define public_4af850 _public_4af850
#define public_4af864 _public_4af864
#define public_4af877 _public_4af877
#define public_4af890 _public_4af890
#define public_4af8a5 _public_4af8a5
#define public_4af8b0 _public_4af8b0
#define public_4af8c4 _public_4af8c4
#define public_4af8d7 _public_4af8d7
#define public_4af8df _public_4af8df
#define public_4af8e5 _public_4af8e5
#define public_4af8f5 _public_4af8f5

PROC_DECLARE(0x4af5c0, internal_4af5c0, public_4af5c0);
extern "C" NAKED register_t __cdecl internal_4af5c0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        xor edx, edx
        cmp eax, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jl public_4af8f5
        cmp eax, 3
        jg public_4af8f5
        mov esi, dword ptr ss : [esp+0x44]
        or ebp, 0xFFFFFFFF
        or ebx, 0xFFFFFFFF
        cmp esi, edx
        mov byte ptr ss : [esp+0x3C], 1
        jl public_4af6a2
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call public_577e80
        add esp, 8
        test al, al
        je public_4af627
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        call public_577ea0
        xor edx, edx
        add esp, 8
        test al, al
        setne dl
        inc edx
        mov dword ptr ss : [esp+0x38], edx
        jmp public_4af62f
        public_4af627 : nop
        mov dword ptr ss : [esp+0x38], 3
        public_4af62f : nop
        push esi
        call public_577ec0
        add esp, 4
        test eax, eax
        je public_4af694
        push esi
        call public_577ec0
        mov ecx, dword ptr ds : [eax+4]
        add esp, 4
        test ecx, ecx
        je public_4af664
        push esi
        call public_577ec0
        mov ebp, dword ptr ds : [eax+4]
        add esp, 4
        cmp esi, 0x14
        jne public_4af667
        mov byte ptr ss : [esp+0x3C], 0
        jmp public_4af667
        public_4af664 : nop
        or ebp, 0xFFFFFFFF
        public_4af667 : nop
        push esi
        call public_577ec0
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        test ecx, ecx
        je public_4af691
        push esi
        call public_577ec0
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x34], esi
        jmp public_4af6aa
        public_4af691 : nop
        or ebx, 0xFFFFFFFF
        public_4af694 : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], esi
        jmp public_4af6aa
        public_4af6a2 : nop
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x34], edx
        public_4af6aa : nop
        sub eax, 0
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebx
        je public_4af8df
        dec eax
        je public_4af8d7
        dec eax
        jne public_4af8f5
        mov edx, dword ptr ds : [ecx+0x828]
        lea ebp, ds:[ecx+0x81C]
        mov ecx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x2E8BA2E9
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, ecx
        jae public_4af7f4
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        je public_4af719
        mov edx, ecx
        sub edx, esi
        mov eax, 0x2E8BA2E9
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_4af71e
        public_4af719 : nop
        mov edi, 1
        public_4af71e : nop
        test esi, esi
        jne public_4af726
        xor edx, edx
        jmp public_4af739
        public_4af726 : nop
        sub ecx, esi
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_4af739 : nop
        lea esi, ds:[edx+edi]
        test esi, esi
        mov eax, esi
        jge public_4af744
        xor eax, eax
        public_4af744 : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov edx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edi, eax
        push edi
        push ebx
        push edx
        mov ecx, ebp
        call public_4b2ae0
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x54], eax
        call public_4b2b20
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [ebp+8]
        add edx, 0x2C
        push edx
        push eax
        push ebx
        mov ecx, ebp
        call public_4b2ae0
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_53aaa0
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        imul esi, 0x2C
        mov eax, dword ptr ss : [ebp+4]
        add esi, edi
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+0xC], esi
        jne public_4af7c8
        xor edx, edx
        inc edx
        imul edx, 0x2C
        add edx, edi
        mov dword ptr ss : [ebp+4], edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_4af7c8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        inc edx
        imul edx, 0x2C
        add edx, edi
        mov dword ptr ss : [ebp+4], edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_4af7f4 : nop
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2E8BA2E9
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_4af877
        lea edx, ds:[ebx+0x2C]
        push edx
        push ecx
        push ebx
        mov ecx, ebp
        call public_4b2ae0
        mov esi, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebp
        call public_4b2b20
        mov eax, dword ptr ss : [ebp+8]
        cmp ebx, eax
        je public_4af864
        nop 
        public_4af850 : nop
        mov edi, ebx
        add ebx, 0x2C
        cmp ebx, eax
        mov ecx, 0xB
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_4af850
        public_4af864 : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        add eax, 0x2C
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_4af877 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFD4
        push ecx
        mov ecx, ebp
        call public_4b2ae0
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[edx-0x2C]
        cmp ebx, eax
        je public_4af8a5
        mov edi, edi
        public_4af890 : nop
        sub eax, 0x2C
        sub edx, 0x2C
        cmp eax, ebx
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_4af890
        public_4af8a5 : nop
        lea edx, ds:[ebx+0x2C]
        cmp ebx, edx
        mov eax, ebx
        je public_4af8c4
        mov edi, edi
        public_4af8b0 : nop
        mov edi, eax
        add eax, 0x2C
        cmp eax, edx
        mov ecx, 0xB
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_4af8b0
        public_4af8c4 : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        add eax, 0x2C
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_4af8d7 : nop
        add ecx, 0x80C
        jmp public_4af8e5
        public_4af8df : nop
        add ecx, 0x7FC
        public_4af8e5 : nop
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        push eax
        call public_5126f0
        public_4af8f5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x4af5c0)
    }
}

#undef public_4af627
#undef public_4af62f
#undef public_4af664
#undef public_4af667
#undef public_4af691
#undef public_4af694
#undef public_4af6a2
#undef public_4af6aa
#undef public_4af719
#undef public_4af71e
#undef public_4af726
#undef public_4af739
#undef public_4af744
#undef public_4af7c8
#undef public_4af7f4
#undef public_4af850
#undef public_4af864
#undef public_4af877
#undef public_4af890
#undef public_4af8a5
#undef public_4af8b0
#undef public_4af8c4
#undef public_4af8d7
#undef public_4af8df
#undef public_4af8e5
#undef public_4af8f5
