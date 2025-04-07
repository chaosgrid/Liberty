#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ae030);
CLANG_FORWARD_PROC_SYMBOL(public_4b2b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4ae08c _public_4ae08c
#define public_4ae092 _public_4ae092
#define public_4ae0b5 _public_4ae0b5
#define public_4ae0c9 _public_4ae0c9
#define public_4ae0d9 _public_4ae0d9
#define public_4ae107 _public_4ae107
#define public_4ae10d _public_4ae10d
#define public_4ae132 _public_4ae132
#define public_4ae141 _public_4ae141
#define public_4ae15b _public_4ae15b
#define public_4ae189 _public_4ae189
#define public_4ae18f _public_4ae18f
#define public_4ae1b4 _public_4ae1b4
#define public_4ae1c3 _public_4ae1c3
#define public_4ae1dd _public_4ae1dd
#define public_4ae20b _public_4ae20b
#define public_4ae211 _public_4ae211
#define public_4ae232 _public_4ae232
#define public_4ae241 _public_4ae241
#define public_4ae24b _public_4ae24b

PROC_DECLARE(0x4ae030, internal_4ae030, public_4ae030);
extern "C" NAKED register_t __cdecl internal_4ae030()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x838]
        sub eax, 0
        push edi
        mov dword ptr ss : [esp+0x10], 0
        je public_4ae1dd
        dec eax
        je public_4ae15b
        dec eax
        je public_4ae0d9
        mov al, byte ptr ds : [public_6721c0]
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [public_6721c4]
        test eax, eax
        je public_4ae08c
        mov ecx, dword ptr ds : [public_6721c8]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_4ae08c : nop
        test eax, eax
        jge public_4ae092
        xor eax, eax
        public_4ae092 : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [public_6721c8]
        mov esi, dword ptr ds : [public_6721c4]
        add esp, 4
        cmp esi, ecx
        mov ebx, ecx
        mov edi, eax
        je public_4ae0c9
        public_4ae0b5 : nop
        push esi
        push edi
        call public_4b2b50
        add esi, 0x2C
        add esp, 8
        add edi, 0x2C
        cmp esi, ebx
        jne public_4ae0b5
        public_4ae0c9 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_4ae0d9 : nop
        mov dl, byte ptr ds : [esi+0x81C]
        mov byte ptr ss : [ebp], dl
        mov eax, dword ptr ds : [esi+0x820]
        test eax, eax
        je public_4ae107
        mov ecx, dword ptr ds : [esi+0x824]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_4ae107 : nop
        test eax, eax
        jge public_4ae10d
        xor eax, eax
        public_4ae10d : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+0x824]
        mov edx, eax
        mov eax, dword ptr ds : [esi+0x820]
        add esp, 4
        cmp eax, ebx
        je public_4ae24b
        public_4ae132 : nop
        test edx, edx
        je public_4ae141
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        public_4ae141 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_4ae132
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_4ae15b : nop
        mov cl, byte ptr ds : [esi+0x80C]
        mov byte ptr ss : [ebp], cl
        mov eax, dword ptr ds : [esi+0x810]
        test eax, eax
        je public_4ae189
        mov ecx, dword ptr ds : [esi+0x814]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_4ae189 : nop
        test eax, eax
        jge public_4ae18f
        xor eax, eax
        public_4ae18f : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+0x814]
        mov edx, eax
        mov eax, dword ptr ds : [esi+0x810]
        add esp, 4
        cmp eax, ebx
        je public_4ae24b
        public_4ae1b4 : nop
        test edx, edx
        je public_4ae1c3
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        public_4ae1c3 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_4ae1b4
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_4ae1dd : nop
        mov cl, byte ptr ds : [esi+0x7FC]
        mov byte ptr ss : [ebp], cl
        mov eax, dword ptr ds : [esi+0x800]
        test eax, eax
        je public_4ae20b
        mov ecx, dword ptr ds : [esi+0x804]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_4ae20b : nop
        test eax, eax
        jge public_4ae211
        xor eax, eax
        public_4ae211 : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+0x804]
        mov edx, eax
        mov eax, dword ptr ds : [esi+0x800]
        add esp, 4
        cmp eax, ebx
        je public_4ae24b
        public_4ae232 : nop
        test edx, edx
        je public_4ae241
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        public_4ae241 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_4ae232
        public_4ae24b : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4ae030)
    }
}

#undef public_4ae08c
#undef public_4ae092
#undef public_4ae0b5
#undef public_4ae0c9
#undef public_4ae0d9
#undef public_4ae107
#undef public_4ae10d
#undef public_4ae132
#undef public_4ae141
#undef public_4ae15b
#undef public_4ae189
#undef public_4ae18f
#undef public_4ae1b4
#undef public_4ae1c3
#undef public_4ae1dd
#undef public_4ae20b
#undef public_4ae211
#undef public_4ae232
#undef public_4ae241
#undef public_4ae24b
