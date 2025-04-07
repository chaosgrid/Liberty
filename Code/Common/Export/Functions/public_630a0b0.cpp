#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_6269e70);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630a0d0 _public_630a0d0
#define public_630a0e0 _public_630a0e0
#define public_630a0ec _public_630a0ec
#define public_630a103 _public_630a103
#define public_630a172 _public_630a172
#define public_630a18a _public_630a18a
#define public_630a19e _public_630a19e
#define public_630a1bb _public_630a1bb
#define public_630a1e4 _public_630a1e4
#define public_630a1e9 _public_630a1e9
#define public_630a1f1 _public_630a1f1
#define public_630a1f6 _public_630a1f6
#define public_630a201 _public_630a201
#define public_630a282 _public_630a282
#define public_630a2c1 _public_630a2c1
#define public_630a2e7 _public_630a2e7
#define public_630a300 _public_630a300
#define public_630a315 _public_630a315
#define public_630a322 _public_630a322
#define public_630a334 _public_630a334

PROC_DECLARE(0x630a0b0, internal_630a0b0, public_630a0b0);
extern "C" NAKED register_t __cdecl internal_630a0b0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        je public_630a1bb
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_639902c]
        lea esp, ss:[esp]
        public_630a0d0 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        cmp esi, eax
        mov ecx, dword ptr ds : [edi+4]
        je public_630a0ec
        lea ecx, ds:[ecx]
        public_630a0e0 : nop
        cmp dword ptr ds : [esi+4], ecx
        je public_630a103
        add esi, 0x20
        cmp esi, eax
        jne public_630a0e0
        public_630a0ec : nop
        mov ecx, dword ptr ds : [ebx+8]
        push edi
        push 1
        push ecx
        mov ecx, ebx
        call public_6269e70
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_630a103 : nop
        mov al, byte ptr ds : [esi+0x18]
        cmp al, byte ptr ds : [edi+0x18]
        jne public_630a0d0
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp ecx, dword ptr ds : [edi+0x1C]
        jne public_630a0d0
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_630a0d0
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_630a19e
        fld dword ptr ds : [edi+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ds : [esi+0x14]
        jp public_630a18a
        fld dword ptr ds : [esi+0x10]
        fadd dword ptr ds : [edi+0x10]
        mov edi, dword ptr ds : [edi+0x14]
        add edi, eax
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_630a172
        dec edi
        fstp dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x14], edi
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_630a172 : nop
        fsub dword ptr ds : [public_639a1d0]
        mov dword ptr ds : [esi+0x14], edi
        pop edi
        mov eax, 1
        fstp dword ptr ds : [esi+0x10]
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_630a18a : nop
        mov edx, dword ptr ds : [edi+0x14]
        add eax, edx
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_630a19e : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+0x14]
        add ecx, eax
        mov dword ptr ds : [esi+0x14], ecx
        fld dword ptr ds : [edi+0x10]
        pop edi
        fstp dword ptr ds : [esi+0x10]
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_630a1bb : nop
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, eax
        sar edx, 5
        cmp edx, 1
        mov ebp, eax
        jae public_630a282
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_630a1e4
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_630a1e9
        public_630a1e4 : nop
        mov ecx, 1
        public_630a1e9 : nop
        test edx, edx
        jne public_630a1f1
        xor eax, eax
        jmp public_630a1f6
        public_630a1f1 : nop
        sub eax, edx
        sar eax, 5
        public_630a1f6 : nop
        lea esi, ds:[eax+ecx]
        test esi, esi
        mov eax, esi
        jge public_630a201
        xor eax, eax
        public_630a201 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        push edi
        push ebp
        push eax
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push 1
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], eax
        call public_626a5b0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        add edx, 0x20
        push edx
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        shl esi, 5
        add esi, edi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], esi
        call public_62695c0
        inc eax
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [ebx+4], edi
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_630a282 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_630a2e7
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        push ebp
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_630a334
        public_630a2c1 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_630a2c1
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x20
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_630a2e7 : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_630a315
        lea esp, ss:[esp]
        public_630a300 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_630a300
        public_630a315 : nop
        lea edx, ss:[ebp+0x20]
        cmp ebp, edx
        mov eax, ebp
        je public_630a334
        mov ebp, dword ptr ss : [esp+0x14]
        public_630a322 : nop
        mov edi, eax
        add eax, 0x20
        cmp eax, edx
        mov ecx, 8
        mov esi, ebp
        rep movsd
        jne public_630a322
        public_630a334 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x20
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x630a0b0)
    }
}

#undef public_630a0d0
#undef public_630a0e0
#undef public_630a0ec
#undef public_630a103
#undef public_630a172
#undef public_630a18a
#undef public_630a19e
#undef public_630a1bb
#undef public_630a1e4
#undef public_630a1e9
#undef public_630a1f1
#undef public_630a1f6
#undef public_630a201
#undef public_630a282
#undef public_630a2c1
#undef public_630a2e7
#undef public_630a300
#undef public_630a315
#undef public_630a322
#undef public_630a334
