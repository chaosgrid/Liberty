#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2830);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2d60);
CLANG_FORWARD_PROC_SYMBOL(public_6efd1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efd25b _public_6efd25b
#define public_6efd260 _public_6efd260
#define public_6efd268 _public_6efd268
#define public_6efd27b _public_6efd27b
#define public_6efd288 _public_6efd288
#define public_6efd2a1 _public_6efd2a1
#define public_6efd2b5 _public_6efd2b5
#define public_6efd313 _public_6efd313
#define public_6efd370 _public_6efd370
#define public_6efd386 _public_6efd386
#define public_6efd3a0 _public_6efd3a0
#define public_6efd3b5 _public_6efd3b5
#define public_6efd3c0 _public_6efd3c0
#define public_6efd3d2 _public_6efd3d2
#define public_6efd3d8 _public_6efd3d8

PROC_DECLARE(0x6efd1f0, internal_6efd1f0, public_6efd1f0);
extern "C" NAKED register_t __cdecl internal_6efd1f0()
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
        mov eax, 0x4EC4EC4F
        imul ecx
        mov ecx, dword ptr ds : [ebx+8]
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        jae public_6efd313
        test esi, esi
        je public_6efd25b
        mov edx, ecx
        sub edx, esi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_6efd260
        public_6efd25b : nop
        mov edi, 1
        public_6efd260 : nop
        test esi, esi
        jne public_6efd268
        xor edx, edx
        jmp public_6efd27b
        public_6efd268 : nop
        sub ecx, esi
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6efd27b : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6efd288
        xor eax, eax
        public_6efd288 : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6efd2b5
        public_6efd2a1 : nop
        push esi
        push edi
        call public_6ed2d60
        add esi, 0x34
        add esp, 8
        add edi, 0x34
        cmp esi, ebp
        jne public_6efd2a1
        public_6efd2b5 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_6ed2d60
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x34
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_6f28e30
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_6ea1490
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        imul eax, 0x34
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6ed2800
        inc eax
        imul eax, 0x34
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_6efd3d8
        public_6efd313 : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6efd386
        lea edx, ss:[ebp+0x34]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_6f28e30
        mov esi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebx
        call public_6ed2830
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6efd3d2
        mov edi, edi
        public_6efd370 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x34
        cmp ebp, eax
        mov ecx, 0xD
        rep movsd
        jne public_6efd370
        jmp public_6efd3d2
        public_6efd386 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFCC
        push ecx
        mov ecx, ebx
        call public_6f28e30
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x34]
        cmp ebp, eax
        je public_6efd3b5
        lea ecx, ds:[ecx]
        public_6efd3a0 : nop
        sub eax, 0x34
        sub edx, 0x34
        cmp eax, ebp
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6efd3a0
        public_6efd3b5 : nop
        lea eax, ss:[ebp+0x34]
        cmp ebp, eax
        je public_6efd3d2
        mov edx, dword ptr ss : [esp+0x20]
        public_6efd3c0 : nop
        mov edi, ebp
        add ebp, 0x34
        cmp ebp, eax
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_6efd3c0
        public_6efd3d2 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x34
        public_6efd3d8 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x34
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6efd1f0)
    }
}

#undef public_6efd25b
#undef public_6efd260
#undef public_6efd268
#undef public_6efd27b
#undef public_6efd288
#undef public_6efd2a1
#undef public_6efd2b5
#undef public_6efd313
#undef public_6efd370
#undef public_6efd386
#undef public_6efd3a0
#undef public_6efd3b5
#undef public_6efd3c0
#undef public_6efd3d2
#undef public_6efd3d8
