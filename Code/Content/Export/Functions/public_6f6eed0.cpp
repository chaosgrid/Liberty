#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f6eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6fa70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6ef3b _public_6f6ef3b
#define public_6f6ef40 _public_6f6ef40
#define public_6f6ef48 _public_6f6ef48
#define public_6f6ef5b _public_6f6ef5b
#define public_6f6ef68 _public_6f6ef68
#define public_6f6ef84 _public_6f6ef84
#define public_6f6ef98 _public_6f6ef98
#define public_6f6effb _public_6f6effb
#define public_6f6f056 _public_6f6f056
#define public_6f6f06c _public_6f6f06c
#define public_6f6f083 _public_6f6f083
#define public_6f6f098 _public_6f6f098
#define public_6f6f0a3 _public_6f6f0a3
#define public_6f6f0b5 _public_6f6f0b5
#define public_6f6f0b9 _public_6f6f0b9

PROC_DECLARE(0x6f6eed0, internal_6f6eed0, public_6f6eed0);
extern "C" NAKED register_t __cdecl internal_6f6eed0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        mov ecx, dword ptr ds : [ebx+8]
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        jae public_6f6effb
        test esi, esi
        je public_6f6ef3b
        mov edx, ecx
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_6f6ef40
        public_6f6ef3b : nop
        mov edi, 1
        public_6f6ef40 : nop
        test esi, esi
        jne public_6f6ef48
        xor edx, edx
        jmp public_6f6ef5b
        public_6f6ef48 : nop
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f6ef5b : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f6ef68
        xor eax, eax
        public_6f6ef68 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6fa912a
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6f6ef98
        public_6f6ef84 : nop
        push esi
        push edi
        call public_6f6fa70
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebp
        jne public_6f6ef84
        public_6f6ef98 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push edi
        call public_6f6fa70
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x14
        push edi
        push ecx
        push ebp
        mov ecx, ebx
        call public_6f6f7a0
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call public_6ea1490
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[esi+edx*4]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6f38a80
        inc eax
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+4], esi
        jmp public_6f6f0b9
        public_6f6effb : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f6f06c
        lea edx, ss:[ebp+0x14]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_6f6f7a0
        mov esi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebx
        call public_6f6f7e0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6f6f0b5
        public_6f6f056 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x14
        cmp ebp, eax
        mov ecx, 5
        rep movsd
        jne public_6f6f056
        jmp public_6f6f0b5
        public_6f6f06c : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFEC
        push ecx
        mov ecx, ebx
        call public_6f6f7a0
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x14]
        cmp ebp, eax
        je public_6f6f098
        public_6f6f083 : nop
        sub eax, 0x14
        sub edx, 0x14
        cmp eax, ebp
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6f6f083
        public_6f6f098 : nop
        lea eax, ss:[ebp+0x14]
        cmp ebp, eax
        je public_6f6f0b5
        mov edx, dword ptr ss : [esp+0x20]
        public_6f6f0a3 : nop
        mov edi, ebp
        add ebp, 0x14
        cmp ebp, eax
        mov ecx, 5
        mov esi, edx
        rep movsd
        jne public_6f6f0a3
        public_6f6f0b5 : nop
        add dword ptr ds : [ebx+8], 0x14
        public_6f6f0b9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        lea ecx, ds:[eax+eax*4]
        pop ebp
        lea eax, ds:[edx+ecx*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f6eed0)
    }
}

#undef public_6f6ef3b
#undef public_6f6ef40
#undef public_6f6ef48
#undef public_6f6ef5b
#undef public_6f6ef68
#undef public_6f6ef84
#undef public_6f6ef98
#undef public_6f6effb
#undef public_6f6f056
#undef public_6f6f06c
#undef public_6f6f083
#undef public_6f6f098
#undef public_6f6f0a3
#undef public_6f6f0b5
#undef public_6f6f0b9
