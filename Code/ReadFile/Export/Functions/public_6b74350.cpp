#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74350);
CLANG_FORWARD_PROC_SYMBOL(public_6b766f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76c40);
CLANG_FORWARD_PROC_SYMBOL(public_6b76f50);
CLANG_FORWARD_PROC_SYMBOL(public_6b76fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b77200);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b74364 _public_6b74364
#define public_6b74382 _public_6b74382
#define public_6b74391 _public_6b74391
#define public_6b74397 _public_6b74397
#define public_6b743b8 _public_6b743b8
#define public_6b743c0 _public_6b743c0
#define public_6b743ca _public_6b743ca
#define public_6b743cf _public_6b743cf
#define public_6b743d1 _public_6b743d1
#define public_6b743d6 _public_6b743d6
#define public_6b743f8 _public_6b743f8
#define public_6b74420 _public_6b74420
#define public_6b7443f _public_6b7443f
#define public_6b74443 _public_6b74443
#define public_6b74463 _public_6b74463

PROC_DECLARE(0x6b74350, internal_6b74350, public_6b74350);
extern "C" NAKED register_t __cdecl internal_6b74350()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        xor ebx, ebx
        push edi
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6b743d6
        public_6b74364 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_6b74391
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_6b74382
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_6b74382 : nop
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [public_6b79014]
        mov dword ptr ds : [esi+0x14], ebx
        jmp public_6b74397
        public_6b74391 : nop
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_6b74397 : nop
        push edi
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_6b79014]
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x25], bl
        jne public_6b743b8
        push eax
        call public_6b76f50
        add esp, 4
        jmp public_6b743cf
        public_6b743b8 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b743ca
        public_6b743c0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6b743c0
        public_6b743ca : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6b743d1
        public_6b743cf : nop
        mov esi, eax
        public_6b743d1 : nop
        cmp esi, dword ptr ss : [ebp+4]
        jne public_6b74364
        public_6b743d6 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, ebx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        je public_6b7443f
        mov ecx, eax
        cmp eax, ecx
        jne public_6b7443f
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        cmp edi, eax
        mov esi, edi
        je public_6b74420
        public_6b743f8 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, ebp
        call public_6b76c40
        mov esi, dword ptr ds : [esi]
        push ebx
        lea ecx, ds:[edi+0xC]
        call public_6b77200
        push edi
        call public_6b782a0
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6b743f8
        public_6b74420 : nop
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        pop esi
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov ebp, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6b7443f : nop
        cmp eax, esi
        je public_6b74463
        public_6b74443 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_6b76fd0
        lea ecx, ss:[esp+0x14]
        push edi
        push ecx
        mov ecx, ebp
        call public_6b766f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        jne public_6b74443
        public_6b74463 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6b74350)
    }
}

#undef public_6b74364
#undef public_6b74382
#undef public_6b74391
#undef public_6b74397
#undef public_6b743b8
#undef public_6b743c0
#undef public_6b743ca
#undef public_6b743cf
#undef public_6b743d1
#undef public_6b743d6
#undef public_6b743f8
#undef public_6b74420
#undef public_6b7443f
#undef public_6b74443
#undef public_6b74463
