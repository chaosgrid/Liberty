#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4390);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4550);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca0f0);

#define public_6aca147 _public_6aca147
#define public_6aca151 _public_6aca151
#define public_6aca15c _public_6aca15c
#define public_6aca1fa _public_6aca1fa
#define public_6aca215 _public_6aca215
#define public_6aca22e _public_6aca22e
#define public_6aca259 _public_6aca259
#define public_6aca26b _public_6aca26b
#define public_6aca279 _public_6aca279
#define public_6aca2b5 _public_6aca2b5
#define public_6aca2e9 _public_6aca2e9
#define public_6aca300 _public_6aca300
#define public_6aca316 _public_6aca316
#define public_6aca34a _public_6aca34a
#define public_6aca399 _public_6aca399
#define public_6aca3c4 _public_6aca3c4
#define public_6aca3e8 _public_6aca3e8
#define public_6aca41f _public_6aca41f
#define public_6aca430 _public_6aca430

PROC_DECLARE(0x6aca0f0, internal_6aca0f0, public_6aca0f0);
extern "C" NAKED register_t __cdecl internal_6aca0f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [eax+0x100]
        xor ecx, ecx
        mov eax, 1
        test edi, edi
        setne cl
        push 0x400
        mov dword ptr ss : [ebp-0x10], esi
        mov dword ptr ss : [ebp-0x18], ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp-0x1C], esi
        call public_6ac4f80
        mov ebx, eax
        test ebx, ebx
        jne public_6aca15c
        mov edx, dword ptr ss : [ebp+0x14]
        test edx, edx
        je public_6aca147
        mov ecx, esi
        mov edi, edx
        rep stosd
        mov edi, dword ptr ss : [ebp+0x10]
        public_6aca147 : nop
        test edi, edi
        je public_6aca151
        mov ecx, esi
        xor eax, eax
        rep stosd
        public_6aca151 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6aca15c : nop
        lea ecx, ds:[esi*4]
        mov esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, ecx
        lea edi, ds:[ebx+0x100]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [ebp+0xC]
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [edx+0x1140]
        lea esi, ds:[edx+0x1040]
        mov dword ptr ss : [ebp+8], eax
        mov edi, ebx
        lea ecx, ds:[eax*4]
        mov dword ptr ss : [ebp-0x20], ecx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ss : [ebp-0x20]
        sub ecx, eax
        xor eax, eax
        shl ecx, 2
        lea edi, ds:[esi+ebx]
        mov esi, ecx
        shr ecx, 2
        rep stosd
        mov ecx, esi
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [ebp-0x18]
        test eax, eax
        je public_6aca22e
        mov eax, dword ptr ds : [edx+0x110]
        test eax, eax
        jne public_6aca1fa
        mov ecx, dword ptr ss : [ebp-0x14]
        lea esi, ds:[edx+0x1144]
        mov eax, ecx
        lea edi, ds:[ebx+0x300]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        jmp public_6aca215
        public_6aca1fa : nop
        mov eax, dword ptr ss : [ebp-0x10]
        lea ecx, ds:[ebx+0x300]
        push edx
        push ecx
        add edx, 0x1144
        push eax
        push edx
        call public_6ac4e20
        mov edx, dword ptr ss : [ebp+0xC]
        public_6aca215 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        xor eax, eax
        mov esi, ecx
        lea edi, ds:[ebx+0x200]
        shr ecx, 2
        rep stosd
        mov ecx, esi
        and ecx, 3
        rep stosb
        public_6aca22e : nop
        mov eax, dword ptr ss : [ebp-0x10]
        test eax, eax
        je public_6aca41f
        mov ecx, dword ptr ds : [edx]
        not ecx
        test cl, 1
        jne public_6aca41f
        add edx, 0x1040
        mov edx, dword ptr ds : [edx]
        not edx
        test dl, 1
        jne public_6aca41f
        public_6aca259 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        shl eax, 8
        lea esi, ds:[eax+ebx]
        mov dword ptr ss : [ebp+8], esi
        mov eax, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp+8]
        public_6aca26b : nop
        test eax, eax
        je public_6aca279
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6aca26b
        inc eax
        public_6aca279 : nop
        test eax, eax
        je public_6aca399
        mov eax, dword ptr ds : [esi]
        mov ecx, eax
        not ecx
        test cl, 1
        je public_6aca2e9
        or eax, 0x80000000
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp+8]
        bsf eax, eax
        test al, 1
        je public_6aca2b5
        mov edx, dword ptr ss : [ebp-4]
        shl edx, 8
        mov ecx, dword ptr ds : [edx+ebx]
        inc ecx
        test cl, 4
        je public_6aca2b5
        mov edx, dword ptr ss : [ebp-8]
        neg edx
        mov dword ptr ss : [ebp-8], edx
        public_6aca2b5 : nop
        mov edi, eax
        mov eax, dword ptr ss : [ebp-0x10]
        neg edi
        push eax
        push esi
        push edi
        push esi
        call public_6ac8bd0
        mov eax, dword ptr ss : [ebp-0x18]
        test eax, eax
        je public_6aca259
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        add ecx, 2
        push edx
        shl ecx, 8
        lea eax, ds:[ecx+ebx]
        push eax
        push edi
        push eax
        call public_6ac4390
        jmp public_6aca259
        public_6aca2e9 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x20], esi
        shl eax, 8
        add eax, ebx
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        mov esi, dword ptr ss : [ebp-0x20]
        mov edi, dword ptr ss : [ebp+8]
        public_6aca300 : nop
        test eax, eax
        je public_6aca316
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6aca300
        sbb eax, eax
        or eax, 1
        public_6aca316 : nop
        test eax, eax
        jge public_6aca34a
        mov esi, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ebx+0x100]
        mov edi, dword ptr ss : [ebp-0xC]
        mov edx, 1
        sub edx, esi
        mov ecx, 1
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ds : [ebx]
        and eax, edx
        sub ecx, edi
        test al, 2
        mov dword ptr ss : [ebp-0xC], ecx
        je public_6aca34a
        mov ecx, dword ptr ss : [ebp-8]
        neg ecx
        mov dword ptr ss : [ebp-8], ecx
        public_6aca34a : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0x10]
        shl edx, 8
        push ecx
        lea eax, ds:[edx+ebx]
        mov edx, dword ptr ss : [ebp-4]
        shl edx, 8
        add edx, ebx
        push eax
        push edx
        push eax
        call public_6ac89d0
        mov eax, dword ptr ss : [ebp-0x18]
        test eax, eax
        je public_6aca259
        mov eax, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        add eax, 2
        add edx, 2
        push ecx
        shl eax, 8
        shl edx, 8
        add eax, ebx
        add edx, ebx
        push eax
        push edx
        push eax
        call public_6ac4550
        jmp public_6aca259
        public_6aca399 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-0x10]
        shl eax, 8
        lea ecx, ss:[ebp+0xC]
        push 1
        lea esi, ds:[eax+ebx]
        push ecx
        push edx
        push esi
        mov dword ptr ss : [ebp+0xC], 1
        call public_6ac8a90
        test eax, eax
        je public_6aca3c4
        mov dword ptr ss : [ebp-8], 0
        public_6aca3c4 : nop
        mov edi, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp-0x14]
        test edi, edi
        je public_6aca3e8
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        xor ecx, ecx
        xor eax, eax
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edi, ds:[edx+ecx]
        public_6aca3e8 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        test eax, eax
        je public_6aca430
        mov ecx, edx
        mov edx, dword ptr ss : [ebp-4]
        mov edi, dword ptr ss : [ebp+0x10]
        mov eax, ecx
        lea esi, ds:[edx+2]
        push ebx
        shl esi, 8
        add esi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        call public_6ac4fb0
        mov eax, dword ptr ss : [ebp-8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6aca41f : nop
        mov dword ptr ds : [public_6ae097c], 0x16
        mov dword ptr ss : [ebp-8], 0
        public_6aca430 : nop
        push ebx
        call public_6ac4fb0
        mov eax, dword ptr ss : [ebp-8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6aca0f0)
    }
}

#undef public_6aca147
#undef public_6aca151
#undef public_6aca15c
#undef public_6aca1fa
#undef public_6aca215
#undef public_6aca22e
#undef public_6aca259
#undef public_6aca26b
#undef public_6aca279
#undef public_6aca2b5
#undef public_6aca2e9
#undef public_6aca300
#undef public_6aca316
#undef public_6aca34a
#undef public_6aca399
#undef public_6aca3c4
#undef public_6aca3e8
#undef public_6aca41f
#undef public_6aca430
