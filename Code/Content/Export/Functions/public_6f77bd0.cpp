#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f77bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f77c04 _public_6f77c04
#define public_6f77c0c _public_6f77c0c
#define public_6f77c36 _public_6f77c36
#define public_6f77c4e _public_6f77c4e
#define public_6f77c59 _public_6f77c59
#define public_6f77c6f _public_6f77c6f
#define public_6f77c82 _public_6f77c82
#define public_6f77c9b _public_6f77c9b
#define public_6f77cb9 _public_6f77cb9
#define public_6f77ce4 _public_6f77ce4
#define public_6f77cec _public_6f77cec
#define public_6f77d04 _public_6f77d04
#define public_6f77d0c _public_6f77d0c
#define public_6f77d22 _public_6f77d22
#define public_6f77d2e _public_6f77d2e
#define public_6f77d44 _public_6f77d44
#define public_6f77d57 _public_6f77d57
#define public_6f77d72 _public_6f77d72
#define public_6f77d9e _public_6f77d9e
#define public_6f77dc3 _public_6f77dc3
#define public_6f77df2 _public_6f77df2
#define public_6f77df4 _public_6f77df4

PROC_DECLARE(0x6f77bd0, internal_6f77bd0, public_6f77bd0);
extern "C" NAKED register_t __cdecl internal_6f77bd0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0xF8]
        push ebp
        mov ecx, esi
        xor bl, bl
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6f77c04
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f77c04
        lea eax, ss:[esp+0x18]
        jmp public_6f77c0c
        public_6f77c04 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6f77c0c : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edi+0xFC]
        je public_6f77df2
        mov ebx, dword ptr ds : [ecx+0x10]
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp ebp, ebx
        mov al, 1
        je public_6f77df4
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        jne public_6f77c36
        xor edi, edi
        jmp public_6f77c4e
        public_6f77c36 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f77c4e : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f77c59
        xor edx, edx
        jmp public_6f77c6f
        public_6f77c59 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f77c6f : nop
        cmp edi, edx
        ja public_6f77ce4
        mov edi, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        mov edx, ecx
        je public_6f77c9b
        public_6f77c82 : nop
        mov esi, eax
        mov edi, edx
        mov ecx, 0x11
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x44
        add edx, 0x44
        cmp eax, ecx
        jne public_6f77c82
        public_6f77c9b : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f77cb9
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        imul edx, 0x44
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f77cb9 : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x78787879
        imul ebx
        mov eax, dword ptr ss : [ebp+4]
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x44
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f77ce4 : nop
        test esi, esi
        jne public_6f77cec
        xor edi, edi
        jmp public_6f77d04
        public_6f77cec : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f77d04 : nop
        test ecx, ecx
        jne public_6f77d0c
        xor edx, edx
        jmp public_6f77d22
        public_6f77d0c : nop
        mov edx, dword ptr ss : [ebp+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f77d22 : nop
        cmp edi, edx
        ja public_6f77d9e
        test ecx, ecx
        jne public_6f77d2e
        xor edx, edx
        jmp public_6f77d44
        public_6f77d2e : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f77d44 : nop
        imul edx, 0x44
        add edx, esi
        mov edi, edx
        mov eax, esi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        mov edx, ecx
        je public_6f77d72
        public_6f77d57 : nop
        mov esi, eax
        mov edi, edx
        mov ecx, 0x11
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x44
        add edx, 0x44
        cmp eax, ecx
        jne public_6f77d57
        mov edi, ecx
        public_6f77d72 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ebx+8]
        push ecx
        push edx
        push edi
        mov ecx, ebp
        call public_6f30960
        mov ecx, ebx
        call public_6f2fb70
        imul eax, 0x44
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        add eax, ecx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f77d9e : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push ecx
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebx
        call public_6f2fb70
        test eax, eax
        jge public_6f77dc3
        xor eax, eax
        public_6f77dc3 : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6f30960
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f77df2 : nop
        mov al, bl
        public_6f77df4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f77bd0)
    }
}

#undef public_6f77c04
#undef public_6f77c0c
#undef public_6f77c36
#undef public_6f77c4e
#undef public_6f77c59
#undef public_6f77c6f
#undef public_6f77c82
#undef public_6f77c9b
#undef public_6f77cb9
#undef public_6f77ce4
#undef public_6f77cec
#undef public_6f77d04
#undef public_6f77d0c
#undef public_6f77d22
#undef public_6f77d2e
#undef public_6f77d44
#undef public_6f77d57
#undef public_6f77d72
#undef public_6f77d9e
#undef public_6f77dc3
#undef public_6f77df2
#undef public_6f77df4
