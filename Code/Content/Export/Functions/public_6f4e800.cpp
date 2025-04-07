#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e640);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4e818 _public_6f4e818
#define public_6f4e830 _public_6f4e830
#define public_6f4e83f _public_6f4e83f
#define public_6f4e852 _public_6f4e852
#define public_6f4e88c _public_6f4e88c
#define public_6f4e899 _public_6f4e899
#define public_6f4e8af _public_6f4e8af
#define public_6f4e8cf _public_6f4e8cf
#define public_6f4e8db _public_6f4e8db
#define public_6f4e8f0 _public_6f4e8f0
#define public_6f4e904 _public_6f4e904
#define public_6f4e920 _public_6f4e920
#define public_6f4e930 _public_6f4e930
#define public_6f4e93f _public_6f4e93f
#define public_6f4e94b _public_6f4e94b
#define public_6f4e95c _public_6f4e95c

PROC_DECLARE(0x6f4e800, internal_6f4e800, public_6f4e800);
extern "C" NAKED register_t __cdecl internal_6f4e800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_6f4e95c
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        public_6f4e818 : nop
        mov eax, dword ptr ds : [public_6fb32cc]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx-8]
        sub ebx, 0x10
        mov edi, eax
        sub esi, 0x10
        cmp ebp, edi
        jae public_6f4e830
        mov edi, ebp
        public_6f4e830 : nop
        cmp esi, ebx
        jne public_6f4e899
        cmp dword ptr ds : [esi+8], edi
        jae public_6f4e83f
        call dword ptr ds : [public_6fb32e4]
        public_6f4e83f : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_6f4e852
        mov ebp, eax
        public_6f4e852 : nop
        test ebp, ebp
        jbe public_6f4e88c
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6f4e640
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4e88c
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32d4]
        public_6f4e88c : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        jmp public_6f4e94b
        public_6f4e899 : nop
        xor ebp, ebp
        cmp edi, ebp
        jbe public_6f4e904
        cmp edi, eax
        jne public_6f4e904
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6f4e8af
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4e8af : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f4e904
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_6f4e8db
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4e8cf
        cmp cl, 0xFF
        je public_6f4e8cf
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4e8db
        public_6f4e8cf : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4e8db : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6f4e8f0
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4e8f0 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6f4e94b
        public_6f4e904 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4e94b
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6f4e920
        mov ecx, dword ptr ds : [public_6fb32c0]
        public_6f4e920 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6f4e93f
        mov edx, edi
        lea esp, ss:[esp]
        public_6f4e930 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6f4e930
        public_6f4e93f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6f4e94b : nop
        cmp ebx, dword ptr ss : [esp+0x14]
        jne public_6f4e818
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f4e95c : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4e800)
    }
}

#undef public_6f4e818
#undef public_6f4e830
#undef public_6f4e83f
#undef public_6f4e852
#undef public_6f4e88c
#undef public_6f4e899
#undef public_6f4e8af
#undef public_6f4e8cf
#undef public_6f4e8db
#undef public_6f4e8f0
#undef public_6f4e904
#undef public_6f4e920
#undef public_6f4e930
#undef public_6f4e93f
#undef public_6f4e94b
#undef public_6f4e95c
