#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b500);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c190);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3b530 _public_6b3b530
#define public_6b3b538 _public_6b3b538
#define public_6b3b55e _public_6b3b55e
#define public_6b3b571 _public_6b3b571
#define public_6b3b584 _public_6b3b584
#define public_6b3b5bb _public_6b3b5bb
#define public_6b3b5cf _public_6b3b5cf
#define public_6b3b5e5 _public_6b3b5e5
#define public_6b3b605 _public_6b3b605
#define public_6b3b60e _public_6b3b60e
#define public_6b3b623 _public_6b3b623
#define public_6b3b646 _public_6b3b646
#define public_6b3b664 _public_6b3b664
#define public_6b3b680 _public_6b3b680
#define public_6b3b68c _public_6b3b68c

PROC_DECLARE(0x6b3b500, internal_6b3b500, public_6b3b500);
extern "C" NAKED register_t __cdecl internal_6b3b500()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        call public_6b3c190
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6b3b530
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6b3b530
        lea eax, ss:[esp+8]
        jmp public_6b3b538
        public_6b3b530 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6b3b538 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        je public_6b3b68c
        mov edi, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [public_6b6b128]
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [edx]
        add edi, 4
        push ebx
        mov ebx, eax
        cmp esi, ebx
        push ebp
        jae public_6b3b55e
        mov ebx, esi
        public_6b3b55e : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp ebp, edi
        jne public_6b3b5cf
        cmp dword ptr ss : [ebp+8], ebx
        jae public_6b3b571
        call dword ptr ds : [public_6b6b124]
        public_6b3b571 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6b6b130]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6b3b584
        mov esi, eax
        public_6b3b584 : nop
        test esi, esi
        jbe public_6b3b5bb
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, ebx
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call dword ptr ds : [public_6b6b1c4]
        mov edi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6b6b194]
        test al, al
        je public_6b3b5bb
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6b6b150]
        public_6b3b5bb : nop
        mov ecx, ebp
        call dword ptr ds : [public_6b6b130]
        pop ebp
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 8
        public_6b3b5cf : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_6b3b646
        cmp ebx, eax
        jne public_6b3b646
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6b3b5e5
        mov eax, dword ptr ds : [public_6b6b14c]
        public_6b3b5e5 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6b3b646
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6b3b60e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6b3b605
        cmp cl, 0xFF
        je public_6b3b605
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6b3b60e
        public_6b3b605 : nop
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3b60e : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6b3b623
        mov eax, dword ptr ds : [public_6b6b14c]
        public_6b3b623 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop ebp
        pop ebx
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        xor eax, eax
        pop esi
        add esp, 8
        ret 8
        public_6b3b646 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6b6b194]
        test al, al
        je public_6b3b680
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_6b6b14c]
        je public_6b3b664
        mov esi, edi
        public_6b3b664 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6b6b150]
        public_6b3b680 : nop
        pop ebp
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 8
        public_6b3b68c : nop
        pop edi
        mov eax, 4
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6b3b500)
    }
}

#undef public_6b3b530
#undef public_6b3b538
#undef public_6b3b55e
#undef public_6b3b571
#undef public_6b3b584
#undef public_6b3b5bb
#undef public_6b3b5cf
#undef public_6b3b5e5
#undef public_6b3b605
#undef public_6b3b60e
#undef public_6b3b623
#undef public_6b3b646
#undef public_6b3b664
#undef public_6b3b680
#undef public_6b3b68c
