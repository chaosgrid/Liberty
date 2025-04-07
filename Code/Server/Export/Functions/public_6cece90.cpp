#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cece90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cecee4 _public_6cecee4
#define public_6cecee6 _public_6cecee6
#define public_6ceceee _public_6ceceee
#define public_6cecf01 _public_6cecf01
#define public_6cecf0e _public_6cecf0e
#define public_6cecf30 _public_6cecf30
#define public_6cecf47 _public_6cecf47
#define public_6cecf51 _public_6cecf51
#define public_6cecf60 _public_6cecf60
#define public_6cecf77 _public_6cecf77
#define public_6cecf7d _public_6cecf7d
#define public_6cecfa0 _public_6cecfa0
#define public_6cecfb7 _public_6cecfb7
#define public_6cecfc1 _public_6cecfc1
#define public_6cecffd _public_6cecffd
#define public_6ced02a _public_6ced02a
#define public_6ced060 _public_6ced060
#define public_6ced077 _public_6ced077
#define public_6ced081 _public_6ced081
#define public_6ced0a3 _public_6ced0a3
#define public_6ced0b6 _public_6ced0b6
#define public_6ced0bc _public_6ced0bc
#define public_6ced0c5 _public_6ced0c5
#define public_6ced0db _public_6ced0db
#define public_6ced0f1 _public_6ced0f1
#define public_6ced110 _public_6ced110
#define public_6ced127 _public_6ced127
#define public_6ced131 _public_6ced131
#define public_6ced140 _public_6ced140
#define public_6ced15d _public_6ced15d
#define public_6ced168 _public_6ced168
#define public_6ced182 _public_6ced182
#define public_6ced185 _public_6ced185

PROC_DECLARE(0x6cece90, internal_6cece90, public_6cece90);
extern "C" NAKED register_t __cdecl internal_6cece90()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_6ced02a
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6cecee4
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_6cecee6
        public_6cecee4 : nop
        mov ecx, esi
        public_6cecee6 : nop
        test ebp, ebp
        jne public_6ceceee
        xor edx, edx
        jmp public_6cecf01
        public_6ceceee : nop
        sub ebx, ebp
        mov eax, 0x4BDA12F7
        imul ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6cecf01 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6cecf0e
        xor eax, eax
        public_6cecf0e : nop
        imul eax, 0x6C
        push eax
        call public_6d60012
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6cecf51
        nop 
        lea esp, ss:[esp]
        public_6cecf30 : nop
        test edx, edx
        je public_6cecf47
        mov ecx, 0x1B
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6cecf47 : nop
        add eax, 0x6C
        add edx, 0x6C
        cmp eax, ebx
        jne public_6cecf30
        public_6cecf51 : nop
        test esi, esi
        mov eax, edx
        jbe public_6cecf7d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_6cecf60 : nop
        test eax, eax
        je public_6cecf77
        mov ecx, 0x1B
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6cecf77 : nop
        add eax, 0x6C
        dec ebx
        jne public_6cecf60
        public_6cecf7d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x6C
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6cecfc1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6cecfa0 : nop
        test ebx, ebx
        je public_6cecfb7
        mov ecx, 0x1B
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6cecfb7 : nop
        add eax, 0x6C
        add ebx, 0x6C
        cmp eax, ebp
        jne public_6cecfa0
        public_6cecfc1 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x6C
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6cecffd
        xor edx, edx
        mov edx, esi
        imul edx, 0x6C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6cecffd : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x6C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ced02a : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_6ced0f1
        mov ecx, esi
        imul ecx, 0x6C
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6ced081
        mov edx, eax
        sub edx, ecx
        nop 
        public_6ced060 : nop
        test eax, eax
        je public_6ced077
        mov ecx, 0x1B
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ced077 : nop
        add edx, 0x6C
        add eax, 0x6C
        cmp edx, ebx
        jne public_6ced060
        public_6ced081 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_6ced0bc
        mov eax, esi
        public_6ced0a3 : nop
        test ebx, ebx
        je public_6ced0b6
        mov ecx, 0x1B
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6ced0b6 : nop
        add ebx, 0x6C
        dec eax
        jne public_6ced0a3
        public_6ced0bc : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_6ced0db
        public_6ced0c5 : nop
        mov edi, eax
        add eax, 0x6C
        cmp eax, ebx
        mov ecx, 0x1B
        mov esi, edx
        rep movsd
        jne public_6ced0c5
        mov edi, dword ptr ss : [esp+0x10]
        public_6ced0db : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ced0f1 : nop
        test esi, esi
        jbe public_6ced185
        imul esi, 0x6C
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_6ced131
        lea ebx, ds:[ebx]
        public_6ced110 : nop
        test edx, edx
        je public_6ced127
        mov ecx, 0x1B
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6ced127 : nop
        add eax, 0x6C
        add edx, 0x6C
        cmp eax, ebx
        jne public_6ced110
        public_6ced131 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_6ced15d
        lea esp, ss:[esp]
        public_6ced140 : nop
        sub eax, 0x6C
        sub ebx, 0x6C
        cmp eax, ebp
        mov ecx, 0x1B
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_6ced140
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6ced15d : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_6ced182
        mov edx, dword ptr ss : [esp+0x28]
        public_6ced168 : nop
        mov edi, ebp
        add ebp, 0x6C
        cmp ebp, eax
        mov ecx, 0x1B
        mov esi, edx
        rep movsd
        jne public_6ced168
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6ced182 : nop
        add dword ptr ds : [edi+8], esi
        public_6ced185 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6cece90)
    }
}

#undef public_6cecee4
#undef public_6cecee6
#undef public_6ceceee
#undef public_6cecf01
#undef public_6cecf0e
#undef public_6cecf30
#undef public_6cecf47
#undef public_6cecf51
#undef public_6cecf60
#undef public_6cecf77
#undef public_6cecf7d
#undef public_6cecfa0
#undef public_6cecfb7
#undef public_6cecfc1
#undef public_6cecffd
#undef public_6ced02a
#undef public_6ced060
#undef public_6ced077
#undef public_6ced081
#undef public_6ced0a3
#undef public_6ced0b6
#undef public_6ced0bc
#undef public_6ced0c5
#undef public_6ced0db
#undef public_6ced0f1
#undef public_6ced110
#undef public_6ced127
#undef public_6ced131
#undef public_6ced140
#undef public_6ced15d
#undef public_6ced168
#undef public_6ced182
#undef public_6ced185
