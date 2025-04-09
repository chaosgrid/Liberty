#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428de0);
CLANG_FORWARD_PROC_SYMBOL(public_4cbb40);

#define public_4cbb5e _public_4cbb5e
#define public_4cbb70 _public_4cbb70
#define public_4cbb85 _public_4cbb85
#define public_4cbba3 _public_4cbba3
#define public_4cbbad _public_4cbbad
#define public_4cbbc0 _public_4cbbc0
#define public_4cbbe7 _public_4cbbe7
#define public_4cbc13 _public_4cbc13
#define public_4cbc16 _public_4cbc16
#define public_4cbc23 _public_4cbc23

PROC_DECLARE(0x4cbb40, internal_4cbb40, public_4cbb40);
extern "C" NAKED register_t __cdecl internal_4cbb40()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xC]
        xor ebx, ebx
        cmp ecx, ebx
        je public_4cbb5e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0xC], ebx
        public_4cbb5e : nop
        mov eax, dword ptr ds : [edi+0x2C]
        push esi
        mov esi, dword ptr ds : [edi+0x28]
        cmp esi, eax
        je public_4cbbad
        lea esp, ss:[esp]
        public_4cbb70 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_4cbb85
        cmp byte ptr ds : [esi+8], 1
        jne public_4cbb85
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov byte ptr ds : [esi+8], bl
        public_4cbb85 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_4cbba3
        mov ecx, eax
        cmp ecx, ebx
        je public_4cbba3
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4cbba3 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        add esi, 0x10
        cmp esi, eax
        jne public_4cbb70
        public_4cbbad : nop
        mov edx, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edi+0x28]
        mov eax, edx
        cmp eax, edx
        je public_4cbbe7
        push ebp
        lea ebx, ds:[ebx]
        public_4cbbc0 : nop
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        mov dword ptr ds : [ebx+0xC], esi
        jne public_4cbbc0
        xor ebx, ebx
        pop ebp
        public_4cbbe7 : nop
        mov dword ptr ds : [edi+0x2C], ecx
        cmp byte ptr ds : [edi+0x14], bl
        pop esi
        je public_4cbc16
        call public_428de0
        dec dword ptr ds : [public_6735b0]
        jne public_4cbc13
        mov edx, dword ptr ds : [public_6108f8]
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735ac], edx
        public_4cbc13 : nop
        mov byte ptr ds : [edi+0x14], bl
        public_4cbc16 : nop
        cmp dword ptr ds : [edi], ebx
        je public_4cbc23
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4cbc23 : nop
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ds : [edi+0x15], bl
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov byte ptr ds : [edi+8], 1
        mov byte ptr ds : [edi+0x20], 1
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4cbb40)
    }
}

#undef public_4cbb5e
#undef public_4cbb70
#undef public_4cbb85
#undef public_4cbba3
#undef public_4cbbad
#undef public_4cbbc0
#undef public_4cbbe7
#undef public_4cbc13
#undef public_4cbc16
#undef public_4cbc23
