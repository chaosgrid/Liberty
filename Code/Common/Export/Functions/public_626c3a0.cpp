#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626c3cb _public_626c3cb
#define public_626c3d3 _public_626c3d3
#define public_626c3de _public_626c3de
#define public_626c3e6 _public_626c3e6
#define public_626c3f3 _public_626c3f3
#define public_626c40c _public_626c40c
#define public_626c425 _public_626c425
#define public_626c43d _public_626c43d
#define public_626c445 _public_626c445
#define public_626c44d _public_626c44d
#define public_626c455 _public_626c455
#define public_626c45d _public_626c45d
#define public_626c46d _public_626c46d
#define public_626c475 _public_626c475
#define public_626c482 _public_626c482
#define public_626c497 _public_626c497
#define public_626c4b0 _public_626c4b0
#define public_626c4c4 _public_626c4c4
#define public_626c4cf _public_626c4cf
#define public_626c4d7 _public_626c4d7
#define public_626c4eb _public_626c4eb
#define public_626c4ff _public_626c4ff
#define public_626c507 _public_626c507
#define public_626c50d _public_626c50d
#define public_626c532 _public_626c532
#define public_626c536 _public_626c536

PROC_DECLARE(0x626c3a0, internal_626c3a0, public_626c3a0);
extern "C" NAKED register_t __cdecl internal_626c3a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        add ebp, 4
        lea edi, ds:[ecx+4]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [ecx], eax
        je public_626c536
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_626c3cb
        xor ebx, ebx
        jmp public_626c3d3
        public_626c3cb : nop
        mov ebx, dword ptr ss : [ebp+8]
        sub ebx, eax
        sar ebx, 5
        public_626c3d3 : nop
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_626c3de
        xor edx, edx
        jmp public_626c3e6
        public_626c3de : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, esi
        sar edx, 5
        public_626c3e6 : nop
        cmp ebx, edx
        ja public_626c43d
        mov ebx, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov edx, esi
        je public_626c40c
        public_626c3f3 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_626c3f3
        mov ecx, dword ptr ss : [esp+0x10]
        public_626c40c : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_626c425
        mov edx, dword ptr ds : [ecx+8]
        xor eax, eax
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_626c536
        public_626c425 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, edx
        mov edx, dword ptr ds : [ecx+8]
        sar eax, 5
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_626c536
        public_626c43d : nop
        test eax, eax
        jne public_626c445
        xor edx, edx
        jmp public_626c44d
        public_626c445 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 5
        public_626c44d : nop
        test esi, esi
        jne public_626c455
        xor ecx, ecx
        jmp public_626c45d
        public_626c455 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, esi
        sar ecx, 5
        public_626c45d : nop
        cmp edx, ecx
        ja public_626c4eb
        test esi, esi
        jne public_626c46d
        xor ecx, ecx
        jmp public_626c475
        public_626c46d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, esi
        sar ecx, 5
        public_626c475 : nop
        shl ecx, 5
        add ecx, eax
        mov edx, ecx
        cmp eax, edx
        mov ebx, esi
        je public_626c497
        public_626c482 : nop
        mov esi, eax
        mov edi, ebx
        add eax, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp eax, edx
        rep movsd
        jne public_626c482
        public_626c497 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [ebp+8]
        cmp edx, ebx
        mov edi, dword ptr ds : [ecx+0xC]
        lea eax, ds:[ecx+4]
        mov esi, edx
        je public_626c4c4
        lea ebx, ds:[ebx]
        public_626c4b0 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_626c4b0
        public_626c4c4 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_626c4cf
        xor eax, eax
        jmp public_626c4d7
        public_626c4cf : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 5
        public_626c4d7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+4]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [ecx+8], eax
        jmp public_626c532
        public_626c4eb : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_626c4ff
        xor eax, eax
        jmp public_626c507
        public_626c4ff : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 5
        public_626c507 : nop
        test eax, eax
        jge public_626c50d
        xor eax, eax
        public_626c50d : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, edi
        call public_626a570
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        public_626c532 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_626c536 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dx, word ptr ds : [eax+0x14]
        pop edi
        pop esi
        pop ebp
        mov word ptr ds : [ecx+0x14], dx
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x626c3a0)
    }
}

#undef public_626c3cb
#undef public_626c3d3
#undef public_626c3de
#undef public_626c3e6
#undef public_626c3f3
#undef public_626c40c
#undef public_626c425
#undef public_626c43d
#undef public_626c445
#undef public_626c44d
#undef public_626c455
#undef public_626c45d
#undef public_626c46d
#undef public_626c475
#undef public_626c482
#undef public_626c497
#undef public_626c4b0
#undef public_626c4c4
#undef public_626c4cf
#undef public_626c4d7
#undef public_626c4eb
#undef public_626c4ff
#undef public_626c507
#undef public_626c50d
#undef public_626c532
#undef public_626c536
