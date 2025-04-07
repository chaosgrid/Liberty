#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1040);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2760);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2790);
CLANG_FORWARD_PROC_SYMBOL(public_6ed27d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2f90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed10b1 _public_6ed10b1
#define public_6ed10b6 _public_6ed10b6
#define public_6ed10be _public_6ed10be
#define public_6ed10d3 _public_6ed10d3
#define public_6ed10e0 _public_6ed10e0
#define public_6ed1100 _public_6ed1100
#define public_6ed1114 _public_6ed1114
#define public_6ed1172 _public_6ed1172
#define public_6ed11da _public_6ed11da
#define public_6ed1207 _public_6ed1207
#define public_6ed120d _public_6ed120d

PROC_DECLARE(0x6ed1040, internal_6ed1040, public_6ed1040);
extern "C" NAKED register_t __cdecl internal_6ed1040()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebp
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        sub ebx, ecx
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ed1172
        test ebp, ebp
        je public_6ed10b1
        mov ebx, ecx
        sub ebx, ebp
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, edx
        ja public_6ed10b6
        public_6ed10b1 : nop
        mov ebx, 1
        public_6ed10b6 : nop
        test ebp, ebp
        jne public_6ed10be
        xor edx, edx
        jmp public_6ed10d3
        public_6ed10be : nop
        sub ecx, ebp
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ed10d3 : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6ed10e0
        xor eax, eax
        public_6ed10e0 : nop
        imul eax, 0x3C
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6ed1114
        lea esp, ss:[esp]
        public_6ed1100 : nop
        push ebx
        push ebp
        call public_6ed3350
        add ebx, 0x3C
        add esp, 8
        add ebp, 0x3C
        cmp ebx, edi
        jne public_6ed1100
        public_6ed1114 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6ed3350
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x3C
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6ed2790
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ed1230
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x3C
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6ed2760
        inc eax
        imul eax, 0x3C
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6ed120d
        public_6ed1172 : nop
        mov ebx, ecx
        sub ebx, edi
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ed11da
        lea edx, ds:[edi+0x3C]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6ed2790
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
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
        call public_6ed27d0
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6ed2de0
        add esp, 0xC
        jmp public_6ed1207
        public_6ed11da : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFC4
        push ecx
        mov ecx, esi
        call public_6ed2790
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFC4
        push eax
        push edi
        call public_6ed2f90
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x3C]
        push ecx
        push edi
        call public_6ed2de0
        add esp, 0x18
        public_6ed1207 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x3C
        public_6ed120d : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x3C
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ed1040)
    }
}

#undef public_6ed10b1
#undef public_6ed10b6
#undef public_6ed10be
#undef public_6ed10d3
#undef public_6ed10e0
#undef public_6ed1100
#undef public_6ed1114
#undef public_6ed1172
#undef public_6ed11da
#undef public_6ed1207
#undef public_6ed120d
