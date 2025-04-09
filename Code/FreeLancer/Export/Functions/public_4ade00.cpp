#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ade00);
CLANG_FORWARD_PROC_SYMBOL(public_4b2b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4ade56 _public_4ade56
#define public_4ade5c _public_4ade5c
#define public_4ade80 _public_4ade80
#define public_4ade94 _public_4ade94
#define public_4adea4 _public_4adea4
#define public_4aded2 _public_4aded2
#define public_4aded8 _public_4aded8
#define public_4adf00 _public_4adf00
#define public_4adf0f _public_4adf0f
#define public_4adf29 _public_4adf29
#define public_4adf57 _public_4adf57
#define public_4adf5d _public_4adf5d
#define public_4adf82 _public_4adf82
#define public_4adf91 _public_4adf91
#define public_4adfab _public_4adfab
#define public_4adfd9 _public_4adfd9
#define public_4adfdf _public_4adfdf
#define public_4ae000 _public_4ae000
#define public_4ae00f _public_4ae00f
#define public_4ae019 _public_4ae019

PROC_DECLARE(0x4ade00, internal_4ade00, public_4ade00);
extern "C" NAKED register_t __cdecl internal_4ade00()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        sub eax, 0
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_4adfab
        dec eax
        je public_4adf29
        dec eax
        je public_4adea4
        mov al, byte ptr ds : [public_6721c0]
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [public_6721c4]
        test eax, eax
        je public_4ade56
        mov ecx, dword ptr ds : [public_6721c8]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_4ade56 : nop
        test eax, eax
        jge public_4ade5c
        xor eax, eax
        public_4ade5c : nop
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
        je public_4ade94
        nop 
        public_4ade80 : nop
        push esi
        push edi
        call public_4b2b50
        add esi, 0x2C
        add esp, 8
        add edi, 0x2C
        cmp esi, ebx
        jne public_4ade80
        public_4ade94 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_4adea4 : nop
        mov dl, byte ptr ds : [esi+0x81C]
        mov byte ptr ss : [ebp], dl
        mov eax, dword ptr ds : [esi+0x820]
        test eax, eax
        je public_4aded2
        mov ecx, dword ptr ds : [esi+0x824]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_4aded2 : nop
        test eax, eax
        jge public_4aded8
        xor eax, eax
        public_4aded8 : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+0x824]
        mov edx, eax
        mov eax, dword ptr ds : [esi+0x820]
        add esp, 4
        cmp eax, ebx
        je public_4ae019
        lea ecx, ds:[ecx]
        public_4adf00 : nop
        test edx, edx
        je public_4adf0f
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        public_4adf0f : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_4adf00
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_4adf29 : nop
        mov cl, byte ptr ds : [esi+0x80C]
        mov byte ptr ss : [ebp], cl
        mov eax, dword ptr ds : [esi+0x810]
        test eax, eax
        je public_4adf57
        mov ecx, dword ptr ds : [esi+0x814]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_4adf57 : nop
        test eax, eax
        jge public_4adf5d
        xor eax, eax
        public_4adf5d : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+0x814]
        mov edx, eax
        mov eax, dword ptr ds : [esi+0x810]
        add esp, 4
        cmp eax, ebx
        je public_4ae019
        public_4adf82 : nop
        test edx, edx
        je public_4adf91
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        public_4adf91 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_4adf82
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_4adfab : nop
        mov cl, byte ptr ds : [esi+0x7FC]
        mov byte ptr ss : [ebp], cl
        mov eax, dword ptr ds : [esi+0x800]
        test eax, eax
        je public_4adfd9
        mov ecx, dword ptr ds : [esi+0x804]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_4adfd9 : nop
        test eax, eax
        jge public_4adfdf
        xor eax, eax
        public_4adfdf : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+0x804]
        mov edx, eax
        mov eax, dword ptr ds : [esi+0x800]
        add esp, 4
        cmp eax, ebx
        je public_4ae019
        public_4ae000 : nop
        test edx, edx
        je public_4ae00f
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        public_4ae00f : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_4ae000
        public_4ae019 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4ade00)
    }
}

#undef public_4ade56
#undef public_4ade5c
#undef public_4ade80
#undef public_4ade94
#undef public_4adea4
#undef public_4aded2
#undef public_4aded8
#undef public_4adf00
#undef public_4adf0f
#undef public_4adf29
#undef public_4adf57
#undef public_4adf5d
#undef public_4adf82
#undef public_4adf91
#undef public_4adfab
#undef public_4adfd9
#undef public_4adfdf
#undef public_4ae000
#undef public_4ae00f
#undef public_4ae019
