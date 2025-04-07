#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1d30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2830);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2d60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3290);
CLANG_FORWARD_PROC_SYMBOL(public_6ed32f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed1d9b _public_6ed1d9b
#define public_6ed1da0 _public_6ed1da0
#define public_6ed1da8 _public_6ed1da8
#define public_6ed1dbb _public_6ed1dbb
#define public_6ed1dc8 _public_6ed1dc8
#define public_6ed1de1 _public_6ed1de1
#define public_6ed1df5 _public_6ed1df5
#define public_6ed1e53 _public_6ed1e53
#define public_6ed1eb7 _public_6ed1eb7
#define public_6ed1ee4 _public_6ed1ee4
#define public_6ed1eea _public_6ed1eea

PROC_DECLARE(0x6ed1d30, internal_6ed1d30, public_6ed1d30);
extern "C" NAKED register_t __cdecl internal_6ed1d30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ed1e53
        test ebx, ebx
        je public_6ed1d9b
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6ed1da0
        public_6ed1d9b : nop
        mov ebp, 1
        public_6ed1da0 : nop
        test ebx, ebx
        jne public_6ed1da8
        xor edx, edx
        jmp public_6ed1dbb
        public_6ed1da8 : nop
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ed1dbb : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6ed1dc8
        xor eax, eax
        public_6ed1dc8 : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6ed1df5
        public_6ed1de1 : nop
        push ebx
        push ebp
        call public_6ed2d60
        add ebx, 0x34
        add esp, 8
        add ebp, 0x34
        cmp ebx, edi
        jne public_6ed1de1
        public_6ed1df5 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6ed2d60
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x34
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6f28e30
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x34
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6ed2800
        inc eax
        imul eax, 0x34
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6ed1eea
        public_6ed1e53 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ed1eb7
        lea edx, ds:[edi+0x34]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f28e30
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_6ed2830
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6ed3290
        add esp, 0xC
        jmp public_6ed1ee4
        public_6ed1eb7 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFCC
        push ecx
        mov ecx, esi
        call public_6f28e30
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFCC
        push eax
        push edi
        call public_6ed32f0
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x34]
        push ecx
        push edi
        call public_6ed3290
        add esp, 0x18
        public_6ed1ee4 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x34
        public_6ed1eea : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x34
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ed1d30)
    }
}

#undef public_6ed1d9b
#undef public_6ed1da0
#undef public_6ed1da8
#undef public_6ed1dbb
#undef public_6ed1dc8
#undef public_6ed1de1
#undef public_6ed1df5
#undef public_6ed1e53
#undef public_6ed1eb7
#undef public_6ed1ee4
#undef public_6ed1eea
