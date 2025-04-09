#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4df420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4df436 _public_4df436
#define public_4df46c _public_4df46c
#define public_4df480 _public_4df480
#define public_4df496 _public_4df496
#define public_4df4cd _public_4df4cd
#define public_4df4da _public_4df4da
#define public_4df4ee _public_4df4ee
#define public_4df50e _public_4df50e
#define public_4df517 _public_4df517
#define public_4df52e _public_4df52e
#define public_4df542 _public_4df542
#define public_4df563 _public_4df563
#define public_4df580 _public_4df580
#define public_4df584 _public_4df584
#define public_4df5a8 _public_4df5a8

PROC_DECLARE(0x4df420, internal_4df420, public_4df420);
extern "C" NAKED register_t __cdecl internal_4df420()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ss : [esp+0xC]
        je public_4df5a8
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+0x14]
        public_4df436 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov cx, word ptr ds : [edi]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp-0xC], eax
        mov cl, byte ptr ds : [edi+0xC]
        mov byte ptr ss : [ebp-8], cl
        mov edx, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [edx]
        lea esi, ds:[edi+0x10]
        mov ebx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], esi
        jae public_4df46c
        mov ebx, eax
        public_4df46c : nop
        lea edx, ss:[ebp-4]
        cmp edx, esi
        jne public_4df4da
        mov esi, eax
        cmp dword ptr ss : [ebp+4], ebx
        jae public_4df480
        call dword ptr ds : [public_5c7064]
        public_4df480 : nop
        lea edi, ss:[ebp-4]
        mov ecx, edi
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+4]
        sub eax, ebx
        cmp eax, esi
        jae public_4df496
        mov esi, eax
        public_4df496 : nop
        test esi, esi
        jbe public_4df4cd
        mov ecx, dword ptr ss : [ebp]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+4]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4df4cd
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c706c]
        public_4df4cd : nop
        mov ecx, edi
        call dword ptr ds : [public_5c7068]
        jmp public_4df580
        public_4df4da : nop
        test ebx, ebx
        jbe public_4df542
        cmp ebx, ecx
        jne public_4df542
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4df4ee
        mov eax, dword ptr ds : [public_5c7078]
        public_4df4ee : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4df542
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_4df517
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4df50e
        cmp cl, 0xFF
        je public_4df50e
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4df517
        public_4df50e : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4df517 : nop
        xor ecx, ecx
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        jne public_4df52e
        mov eax, dword ptr ds : [public_5c7078]
        public_4df52e : nop
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_4df584
        public_4df542 : nop
        push 1
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4df584
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        jne public_4df563
        mov esi, dword ptr ds : [public_5c7078]
        public_4df563 : nop
        mov edi, dword ptr ss : [ebp]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_4df580 : nop
        mov edi, dword ptr ss : [esp+0x20]
        public_4df584 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x24
        add ebp, 0x24
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_4df436
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_4df5a8 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4df420)
    }
}

#undef public_4df436
#undef public_4df46c
#undef public_4df480
#undef public_4df496
#undef public_4df4cd
#undef public_4df4da
#undef public_4df4ee
#undef public_4df50e
#undef public_4df517
#undef public_4df52e
#undef public_4df542
#undef public_4df563
#undef public_4df580
#undef public_4df584
#undef public_4df5a8
