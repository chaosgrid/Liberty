#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428de0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4cabd0);
CLANG_FORWARD_PROC_SYMBOL(public_4cd230);

#define public_4cabf0 _public_4cabf0
#define public_4cac02 _public_4cac02
#define public_4cac19 _public_4cac19
#define public_4cac31 _public_4cac31
#define public_4cac40 _public_4cac40
#define public_4cac55 _public_4cac55
#define public_4cac73 _public_4cac73
#define public_4cac7d _public_4cac7d
#define public_4cacad _public_4cacad
#define public_4cacb0 _public_4cacb0
#define public_4cace1 _public_4cace1

PROC_DECLARE(0x4cabd0, internal_4cabd0, public_4cabd0);
extern "C" NAKED register_t __cdecl internal_4cabd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+0x1BC]
        xor ebx, ebx
        cmp ebp, ebx
        je public_4cac19
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_4cac02
        lea esp, ss:[esp]
        public_4cabf0 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_4cabf0
        public_4cac02 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov dword ptr ds : [edi+0x1BC], ebx
        public_4cac19 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, ebx
        je public_4cac31
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0xC], ebx
        public_4cac31 : nop
        mov esi, dword ptr ds : [edi+0x28]
        cmp esi, dword ptr ds : [edi+0x2C]
        je public_4cac7d
        lea esp, ss:[esp]
        public_4cac40 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_4cac55
        cmp byte ptr ds : [esi+8], 1
        jne public_4cac55
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov byte ptr ds : [esi+8], bl
        public_4cac55 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_4cac73
        mov ecx, eax
        cmp ecx, ebx
        je public_4cac73
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4cac73 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        add esi, 0x10
        cmp esi, eax
        jne public_4cac40
        public_4cac7d : nop
        lea ecx, ds:[edi+0x24]
        call public_4cd230
        cmp byte ptr ds : [edi+0x14], bl
        je public_4cacb0
        call public_428de0
        dec dword ptr ds : [public_6735b0]
        jne public_4cacad
        mov edx, dword ptr ds : [public_6108f8]
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735ac], edx
        public_4cacad : nop
        mov byte ptr ds : [edi+0x14], bl
        public_4cacb0 : nop
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c645c]
        mov byte ptr ds : [edi+8], 1
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ds : [edi+0x15], bl
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov byte ptr ds : [edi+0x20], 1
        cmp dword ptr ds : [edi+0x170], ebx
        je public_4cace1
        mov dword ptr ds : [edi+0x170], ebx
        public_4cace1 : nop
        mov byte ptr ds : [edi+0x174], bl
        mov dword ptr ds : [edi+0x1C0], ebx
        mov dword ptr ds : [edi+0x1C4], ebx
        mov dword ptr ds : [edi+0x1C8], ebx
        mov dword ptr ds : [edi+0x1CC], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4cabd0)
    }
}

#undef public_4cabf0
#undef public_4cac02
#undef public_4cac19
#undef public_4cac31
#undef public_4cac40
#undef public_4cac55
#undef public_4cac73
#undef public_4cac7d
#undef public_4cacad
#undef public_4cacb0
#undef public_4cace1
