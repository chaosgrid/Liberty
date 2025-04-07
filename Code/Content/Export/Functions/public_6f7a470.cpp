#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f300e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a470);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a730);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7a4db _public_6f7a4db
#define public_6f7a4e0 _public_6f7a4e0
#define public_6f7a4e8 _public_6f7a4e8
#define public_6f7a4fb _public_6f7a4fb
#define public_6f7a508 _public_6f7a508
#define public_6f7a521 _public_6f7a521
#define public_6f7a535 _public_6f7a535
#define public_6f7a593 _public_6f7a593
#define public_6f7a5f7 _public_6f7a5f7
#define public_6f7a624 _public_6f7a624
#define public_6f7a62a _public_6f7a62a

PROC_DECLARE(0x6f7a470, internal_6f7a470, public_6f7a470);
extern "C" NAKED register_t __cdecl internal_6f7a470()
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
        mov eax, 0x78787879
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f7a593
        test ebx, ebx
        je public_6f7a4db
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6f7a4e0
        public_6f7a4db : nop
        mov ebp, 1
        public_6f7a4e0 : nop
        test ebx, ebx
        jne public_6f7a4e8
        xor edx, edx
        jmp public_6f7a4fb
        public_6f7a4e8 : nop
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7a4fb : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f7a508
        xor eax, eax
        public_6f7a508 : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f7a535
        public_6f7a521 : nop
        push ebx
        push ebp
        call public_6f300e0
        add ebx, 0x44
        add esp, 8
        add ebp, 0x44
        cmp ebx, edi
        jne public_6f7a521
        public_6f7a535 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6f300e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x44
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6f2fba0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f7a730
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x44
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f2fb70
        inc eax
        imul eax, 0x44
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6f7a62a
        public_6f7a593 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f7a5f7
        lea edx, ds:[edi+0x44]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f2fba0
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_6f7c9b0
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6f7d2a0
        add esp, 0xC
        jmp public_6f7a624
        public_6f7a5f7 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFBC
        push ecx
        mov ecx, esi
        call public_6f2fba0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFBC
        push eax
        push edi
        call public_6f7d4c0
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x44]
        push ecx
        push edi
        call public_6f7d2a0
        add esp, 0x18
        public_6f7a624 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x44
        public_6f7a62a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x44
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f7a470)
    }
}

#undef public_6f7a4db
#undef public_6f7a4e0
#undef public_6f7a4e8
#undef public_6f7a4fb
#undef public_6f7a508
#undef public_6f7a521
#undef public_6f7a535
#undef public_6f7a593
#undef public_6f7a5f7
#undef public_6f7a624
#undef public_6f7a62a
