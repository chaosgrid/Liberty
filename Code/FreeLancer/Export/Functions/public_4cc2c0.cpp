#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428de0);
CLANG_FORWARD_PROC_SYMBOL(public_4cc2c0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);

#define public_4cc2f1 _public_4cc2f1
#define public_4cc2ff _public_4cc2ff
#define public_4cc32e _public_4cc32e
#define public_4cc346 _public_4cc346
#define public_4cc352 _public_4cc352
#define public_4cc367 _public_4cc367
#define public_4cc385 _public_4cc385
#define public_4cc38f _public_4cc38f
#define public_4cc3a0 _public_4cc3a0
#define public_4cc3ca _public_4cc3ca
#define public_4cc403 _public_4cc403
#define public_4cc406 _public_4cc406
#define public_4cc413 _public_4cc413

PROC_DECLARE(0x4cc2c0, internal_4cc2c0, public_4cc2c0);
extern "C" NAKED register_t __cdecl internal_4cc2c0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x38]
        xor ebx, ebx
        cmp al, bl
        je public_4cc2ff
        cmp byte ptr ds : [esi+0x85], bl
        jne public_4cc2ff
        mov byte ptr ds : [esi+0x84], bl
        mov byte ptr ds : [esi+0x85], 1
        cmp dword ptr ds : [esi+0x170], ebx
        je public_4cc2f1
        mov dword ptr ds : [esi+0x170], ebx
        public_4cc2f1 : nop
        mov eax, dword ptr ds : [esi+0x1BC]
        cmp eax, ebx
        je public_4cc2ff
        and byte ptr ds : [eax+0x6C], 0xFC
        public_4cc2ff : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4cc32e
        mov edx, dword ptr ds : [esi+0x1CC]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push 2
        push edx
        mov edx, dword ptr ds : [esi+0x1C8]
        push edx
        mov edx, dword ptr ds : [esi+0x1C4]
        push edx
        call dword ptr ds : [eax+0xFC]
        public_4cc32e : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_4cc346
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4cc346 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+0x28]
        cmp edi, eax
        je public_4cc38f
        public_4cc352 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_4cc367
        cmp byte ptr ds : [edi+8], 1
        jne public_4cc367
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov byte ptr ds : [edi+8], bl
        public_4cc367 : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_4cc385
        mov ecx, eax
        cmp ecx, ebx
        je public_4cc385
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0xC], ebx
        public_4cc385 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        add edi, 0x10
        cmp edi, eax
        jne public_4cc352
        public_4cc38f : nop
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, eax
        mov edi, dword ptr ds : [esi+0x28]
        lea ebp, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x10], eax
        je public_4cc3ca
        public_4cc3a0 : nop
        mov edx, eax
        mov ebx, dword ptr ds : [edx]
        mov ecx, edi
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 0x10
        add edi, 0x10
        cmp eax, ecx
        jne public_4cc3a0
        xor ebx, ebx
        public_4cc3ca : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push edi
        mov ecx, ebp
        call public_53aaa0
        mov dword ptr ss : [ebp+8], edi
        cmp byte ptr ds : [esi+0x14], bl
        pop edi
        pop ebp
        je public_4cc406
        call public_428de0
        dec dword ptr ds : [public_6735b0]
        jne public_4cc403
        mov ecx, dword ptr ds : [public_6108f8]
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735ac], ecx
        public_4cc403 : nop
        mov byte ptr ds : [esi+0x14], bl
        public_4cc406 : nop
        cmp dword ptr ds : [esi], ebx
        je public_4cc413
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4cc413 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], bl
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+8], 1
        mov byte ptr ds : [esi+0x20], 1
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cc2c0)
    }
}

#undef public_4cc2f1
#undef public_4cc2ff
#undef public_4cc32e
#undef public_4cc346
#undef public_4cc352
#undef public_4cc367
#undef public_4cc385
#undef public_4cc38f
#undef public_4cc3a0
#undef public_4cc3ca
#undef public_4cc403
#undef public_4cc406
#undef public_4cc413
