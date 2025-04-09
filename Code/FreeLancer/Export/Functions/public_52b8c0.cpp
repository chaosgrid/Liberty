#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c490);
CLANG_FORWARD_PROC_SYMBOL(public_52c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_52b8fa _public_52b8fa
#define public_52b912 _public_52b912
#define public_52b91d _public_52b91d
#define public_52b933 _public_52b933
#define public_52b946 _public_52b946
#define public_52b95f _public_52b95f
#define public_52b97a _public_52b97a
#define public_52b9a2 _public_52b9a2
#define public_52b9aa _public_52b9aa
#define public_52b9c2 _public_52b9c2
#define public_52b9ca _public_52b9ca
#define public_52b9e0 _public_52b9e0
#define public_52b9f0 _public_52b9f0
#define public_52ba06 _public_52ba06
#define public_52ba13 _public_52ba13
#define public_52ba28 _public_52ba28
#define public_52ba38 _public_52ba38
#define public_52ba50 _public_52ba50
#define public_52ba6b _public_52ba6b
#define public_52ba93 _public_52ba93
#define public_52baa7 _public_52baa7
#define public_52babd _public_52babd
#define public_52bac5 _public_52bac5
#define public_52baea _public_52baea

PROC_DECLARE(0x52b8c0, internal_52b8c0, public_52b8c0);
extern "C" NAKED register_t __cdecl internal_52b8c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        push ebx
        mov esi, ecx
        call dword ptr ds : [public_5c6858]
        mov eax, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [esi+0x28], eax
        mov cl, byte ptr ds : [ebx+0x2C]
        lea ebp, ds:[esi+0x30]
        add ebx, 0x30
        cmp ebp, ebx
        mov byte ptr ds : [esi+0x2C], cl
        mov dword ptr ss : [esp+0x14], ebp
        je public_52baea
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        jne public_52b8fa
        xor edi, edi
        jmp public_52b912
        public_52b8fa : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, esi
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_52b912 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_52b91d
        xor edx, edx
        jmp public_52b933
        public_52b91d : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_52b933 : nop
        cmp edi, edx
        ja public_52b9a2
        mov edi, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        mov edx, ecx
        je public_52b95f
        public_52b946 : nop
        mov esi, eax
        mov edi, edx
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0x34
        add edx, 0x34
        cmp eax, ecx
        jne public_52b946
        public_52b95f : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_52b97a
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        imul edx, 0x34
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        ret 4
        public_52b97a : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x4EC4EC4F
        imul ebx
        mov eax, dword ptr ss : [ebp+4]
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x34
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        ret 4
        public_52b9a2 : nop
        test esi, esi
        jne public_52b9aa
        xor edi, edi
        jmp public_52b9c2
        public_52b9aa : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_52b9c2 : nop
        test ecx, ecx
        jne public_52b9ca
        xor edx, edx
        jmp public_52b9e0
        public_52b9ca : nop
        mov edx, dword ptr ss : [ebp+0xC]
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_52b9e0 : nop
        cmp edi, edx
        ja public_52ba93
        test ecx, ecx
        jne public_52b9f0
        xor edx, edx
        jmp public_52ba06
        public_52b9f0 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_52ba06 : nop
        imul edx, 0x34
        add edx, esi
        mov eax, esi
        cmp eax, edx
        mov ebp, ecx
        je public_52ba28
        public_52ba13 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x34
        mov ecx, 0xD
        add ebp, 0x34
        cmp eax, edx
        rep movsd
        jne public_52ba13
        public_52ba28 : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp edx, ebp
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_52ba50
        public_52ba38 : nop
        push esi
        push edi
        call public_52c7d0
        add esi, 0x34
        add esp, 8
        add edi, 0x34
        cmp esi, ebp
        jne public_52ba38
        mov ecx, dword ptr ss : [esp+0x14]
        public_52ba50 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_52ba6b
        mov eax, dword ptr ds : [ecx+4]
        xor edx, edx
        imul edx, 0x34
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        ret 4
        public_52ba6b : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x4EC4EC4F
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [ecx+4]
        imul edx, 0x34
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        ret 4
        public_52ba93 : nop
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_52baa7
        xor edx, edx
        jmp public_52babd
        public_52baa7 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_52babd : nop
        test edx, edx
        mov eax, edx
        jge public_52bac5
        xor eax, eax
        public_52bac5 : nop
        imul eax, 0x34
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_52c490
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_52baea : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x52b8c0)
    }
}

#undef public_52b8fa
#undef public_52b912
#undef public_52b91d
#undef public_52b933
#undef public_52b946
#undef public_52b95f
#undef public_52b97a
#undef public_52b9a2
#undef public_52b9aa
#undef public_52b9c2
#undef public_52b9ca
#undef public_52b9e0
#undef public_52b9f0
#undef public_52ba06
#undef public_52ba13
#undef public_52ba28
#undef public_52ba38
#undef public_52ba50
#undef public_52ba6b
#undef public_52ba93
#undef public_52baa7
#undef public_52babd
#undef public_52bac5
#undef public_52baea
