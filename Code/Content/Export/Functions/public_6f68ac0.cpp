#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f68ae2 _public_6f68ae2
#define public_6f68afa _public_6f68afa
#define public_6f68b05 _public_6f68b05
#define public_6f68b1b _public_6f68b1b
#define public_6f68b30 _public_6f68b30
#define public_6f68b49 _public_6f68b49
#define public_6f68b54 _public_6f68b54
#define public_6f68b6a _public_6f68b6a
#define public_6f68b75 _public_6f68b75
#define public_6f68b7f _public_6f68b7f
#define public_6f68b87 _public_6f68b87
#define public_6f68b9f _public_6f68b9f
#define public_6f68ba7 _public_6f68ba7
#define public_6f68bbd _public_6f68bbd
#define public_6f68bcd _public_6f68bcd
#define public_6f68be3 _public_6f68be3
#define public_6f68bf0 _public_6f68bf0
#define public_6f68c05 _public_6f68c05
#define public_6f68c15 _public_6f68c15
#define public_6f68c2d _public_6f68c2d
#define public_6f68c4b _public_6f68c4b
#define public_6f68c76 _public_6f68c76
#define public_6f68c8a _public_6f68c8a
#define public_6f68ca0 _public_6f68ca0
#define public_6f68ca8 _public_6f68ca8
#define public_6f68cc3 _public_6f68cc3
#define public_6f68cd7 _public_6f68cd7

PROC_DECLARE(0x6f68ac0, internal_6f68ac0, public_6f68ac0);
extern "C" NAKED register_t __cdecl internal_6f68ac0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], edi
        je public_6f68b75
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        jne public_6f68ae2
        xor ebp, ebp
        jmp public_6f68afa
        public_6f68ae2 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6f68afa : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6f68b05
        xor edx, edx
        jmp public_6f68b1b
        public_6f68b05 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f68b1b : nop
        cmp ebp, edx
        ja public_6f68b7f
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, ebp
        mov edx, ecx
        je public_6f68b49
        lea ebx, ds:[ebx]
        public_6f68b30 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x44
        mov ecx, 0x11
        add edx, 0x44
        cmp eax, ebp
        rep movsd
        jne public_6f68b30
        mov edi, dword ptr ss : [esp+0x10]
        public_6f68b49 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f68b54
        xor edx, edx
        jmp public_6f68b6a
        public_6f68b54 : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x78787879
        imul ebx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f68b6a : nop
        mov eax, dword ptr ds : [edi+4]
        imul edx, 0x44
        add edx, eax
        mov dword ptr ds : [edi+8], edx
        public_6f68b75 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f68b7f : nop
        test esi, esi
        jne public_6f68b87
        xor ebp, ebp
        jmp public_6f68b9f
        public_6f68b87 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6f68b9f : nop
        test ecx, ecx
        jne public_6f68ba7
        xor edx, edx
        jmp public_6f68bbd
        public_6f68ba7 : nop
        mov edx, dword ptr ds : [edi+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f68bbd : nop
        cmp ebp, edx
        ja public_6f68c76
        test ecx, ecx
        jne public_6f68bcd
        xor edx, edx
        jmp public_6f68be3
        public_6f68bcd : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f68be3 : nop
        imul edx, 0x44
        add edx, esi
        mov eax, esi
        cmp eax, edx
        mov ebp, ecx
        je public_6f68c05
        public_6f68bf0 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x44
        mov ecx, 0x11
        add ebp, 0x44
        cmp eax, edx
        rep movsd
        jne public_6f68bf0
        public_6f68c05 : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp edx, ebp
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_6f68c2d
        public_6f68c15 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebp
        jne public_6f68c15
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f68c2d : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f68c4b
        mov eax, dword ptr ds : [ecx+4]
        xor edx, edx
        imul edx, 0x44
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_6f68c4b : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x78787879
        imul ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [ecx+4]
        imul edx, 0x44
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_6f68c76 : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_6f68c8a
        xor edx, edx
        jmp public_6f68ca0
        public_6f68c8a : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f68ca0 : nop
        test edx, edx
        mov eax, edx
        jge public_6f68ca8
        xor eax, eax
        public_6f68ca8 : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov edi, eax
        je public_6f68cd7
        public_6f68cc3 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebp
        jne public_6f68cc3
        public_6f68cd7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f68ac0)
    }
}

#undef public_6f68ae2
#undef public_6f68afa
#undef public_6f68b05
#undef public_6f68b1b
#undef public_6f68b30
#undef public_6f68b49
#undef public_6f68b54
#undef public_6f68b6a
#undef public_6f68b75
#undef public_6f68b7f
#undef public_6f68b87
#undef public_6f68b9f
#undef public_6f68ba7
#undef public_6f68bbd
#undef public_6f68bcd
#undef public_6f68be3
#undef public_6f68bf0
#undef public_6f68c05
#undef public_6f68c15
#undef public_6f68c2d
#undef public_6f68c4b
#undef public_6f68c76
#undef public_6f68c8a
#undef public_6f68ca0
#undef public_6f68ca8
#undef public_6f68cc3
#undef public_6f68cd7
