#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7310);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7e756 _public_6f7e756
#define public_6f7e789 _public_6f7e789
#define public_6f7e7a7 _public_6f7e7a7
#define public_6f7e7c7 _public_6f7e7c7
#define public_6f7e7e6 _public_6f7e7e6
#define public_6f7e7ee _public_6f7e7ee
#define public_6f7e7f9 _public_6f7e7f9
#define public_6f7e801 _public_6f7e801
#define public_6f7e816 _public_6f7e816
#define public_6f7e844 _public_6f7e844
#define public_6f7e862 _public_6f7e862
#define public_6f7e87f _public_6f7e87f
#define public_6f7e887 _public_6f7e887
#define public_6f7e88f _public_6f7e88f
#define public_6f7e897 _public_6f7e897
#define public_6f7e89f _public_6f7e89f
#define public_6f7e8af _public_6f7e8af
#define public_6f7e8b7 _public_6f7e8b7
#define public_6f7e8c4 _public_6f7e8c4
#define public_6f7e8ee _public_6f7e8ee
#define public_6f7e900 _public_6f7e900
#define public_6f7e918 _public_6f7e918
#define public_6f7e936 _public_6f7e936
#define public_6f7e95b _public_6f7e95b
#define public_6f7e980 _public_6f7e980

PROC_DECLARE(0x6f7e720, internal_6f7e720, public_6f7e720);
extern "C" NAKED register_t __cdecl internal_6f7e720()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ss : [ebp+0x10]
        push esi
        mov edx, ebp
        mov dword ptr ds : [ebx+0x10], eax
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        lea eax, ds:[ebx+0x14]
        sub edx, ebx
        mov dword ptr ss : [esp+0x18], 8
        public_6f7e756 : nop
        lea esi, ds:[edx+eax]
        mov edi, eax
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x18
        dec ecx
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6f7e756
        lea esi, ss:[ebp+0xD8]
        test esi, esi
        jne public_6f7e789
        mov dword ptr ds : [ebx+0xD4], esi
        mov byte ptr ds : [ebx+0xD8], 0
        jmp public_6f7e7c7
        public_6f7e789 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ds:[ebx+0xD8]
        jb public_6f7e7a7
        mov eax, 0x2F
        public_6f7e7a7 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0xD8], 0
        mov dword ptr ds : [ebx+0xD4], eax
        public_6f7e7c7 : nop
        add ebp, 0x108
        lea esi, ds:[ebx+0x108]
        cmp esi, ebp
        je public_6f7e980
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f7e7e6
        xor edi, edi
        jmp public_6f7e7ee
        public_6f7e7e6 : nop
        mov edi, dword ptr ss : [ebp+8]
        sub edi, ecx
        sar edi, 4
        public_6f7e7ee : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6f7e7f9
        xor eax, eax
        jmp public_6f7e801
        public_6f7e7f9 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 4
        public_6f7e801 : nop
        cmp edi, eax
        ja public_6f7e87f
        mov edi, dword ptr ss : [ebp+8]
        mov eax, ecx
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], edx
        je public_6f7e844
        public_6f7e816 : nop
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        add edx, 0x10
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6f7e816
        public_6f7e844 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f7e862
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        shl eax, 4
        add eax, ecx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f7e862 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+4]
        sar eax, 4
        shl eax, 4
        add eax, ecx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f7e87f : nop
        test ecx, ecx
        jne public_6f7e887
        xor edi, edi
        jmp public_6f7e88f
        public_6f7e887 : nop
        mov edi, dword ptr ss : [ebp+8]
        sub edi, ecx
        sar edi, 4
        public_6f7e88f : nop
        test edx, edx
        jne public_6f7e897
        xor eax, eax
        jmp public_6f7e89f
        public_6f7e897 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, edx
        sar eax, 4
        public_6f7e89f : nop
        cmp edi, eax
        ja public_6f7e936
        test edx, edx
        jne public_6f7e8af
        xor eax, eax
        jmp public_6f7e8b7
        public_6f7e8af : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 4
        public_6f7e8b7 : nop
        shl eax, 4
        add eax, ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], edx
        je public_6f7e8ee
        public_6f7e8c4 : nop
        mov edi, ecx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ebx
        mov ebx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edx+0xC], edi
        mov edx, dword ptr ss : [esp+0x18]
        add edx, 0x10
        add ecx, 0x10
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], edx
        jne public_6f7e8c4
        public_6f7e8ee : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov edi, eax
        je public_6f7e918
        mov edi, edi
        public_6f7e900 : nop
        push edi
        push ebx
        call public_6f6a670
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 0x10
        add esp, 8
        add ebx, 0x10
        cmp edi, eax
        jne public_6f7e900
        public_6f7e918 : nop
        mov ecx, ebp
        call public_6ead810
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, ecx
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7e936 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edx
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebp
        call public_6ead810
        test eax, eax
        jge public_6f7e95b
        xor eax, eax
        public_6f7e95b : nop
        shl eax, 4
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6eb7310
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_6f7e980 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f7e720)
    }
}

#undef public_6f7e756
#undef public_6f7e789
#undef public_6f7e7a7
#undef public_6f7e7c7
#undef public_6f7e7e6
#undef public_6f7e7ee
#undef public_6f7e7f9
#undef public_6f7e801
#undef public_6f7e816
#undef public_6f7e844
#undef public_6f7e862
#undef public_6f7e87f
#undef public_6f7e887
#undef public_6f7e88f
#undef public_6f7e897
#undef public_6f7e89f
#undef public_6f7e8af
#undef public_6f7e8b7
#undef public_6f7e8c4
#undef public_6f7e8ee
#undef public_6f7e900
#undef public_6f7e918
#undef public_6f7e936
#undef public_6f7e95b
#undef public_6f7e980
