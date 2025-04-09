#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542410);

#define public_542427 _public_542427
#define public_542430 _public_542430
#define public_542439 _public_542439
#define public_54243b _public_54243b
#define public_542446 _public_542446
#define public_54245c _public_54245c
#define public_542461 _public_542461
#define public_542474 _public_542474
#define public_542480 _public_542480
#define public_54249c _public_54249c
#define public_5424a4 _public_5424a4

PROC_DECLARE(0x542410, internal_542410, public_542410);
extern "C" NAKED register_t __cdecl internal_542410()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_5424a4
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push edi
        public_542427 : nop
        cmp ebp, ebx
        mov edi, dword ptr ds : [eax+0x14]
        je public_542446
        xor ecx, ecx
        public_542430 : nop
        cmp ecx, ebx
        jne public_542439
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_54243b
        public_542439 : nop
        mov ecx, dword ptr ds : [ecx]
        public_54243b : nop
        cmp ecx, ebx
        je public_542446
        cmp dword ptr ds : [ecx+8], eax
        jne public_542430
        jmp public_54249c
        public_542446 : nop
        mov ecx, dword ptr ds : [eax+0x18]
        cmp ecx, ebx
        jne public_542461
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, ebx
        mov dword ptr ds : [esi+4], ecx
        je public_54245c
        mov dword ptr ds : [ecx+0x18], ebx
        jmp public_542480
        public_54245c : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_542480
        public_542461 : nop
        mov edx, dword ptr ds : [eax+0x14]
        cmp edx, ebx
        jne public_542474
        cmp ecx, ebx
        mov dword ptr ds : [esi+8], ecx
        je public_542480
        mov dword ptr ds : [ecx+0x14], ebx
        jmp public_542480
        public_542474 : nop
        mov dword ptr ds : [ecx+0x14], edx
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [ecx+0x18], edx
        public_542480 : nop
        mov cl, byte ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov edx, dword ptr ds : [esi]
        dec edx
        cmp cl, bl
        mov dword ptr ds : [esi], edx
        je public_54249c
        lea ecx, ds:[eax+0xC]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_54249c : nop
        cmp edi, ebx
        mov eax, edi
        jne public_542427
        pop edi
        pop ebp
        public_5424a4 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x542410)
    }
}

#undef public_542427
#undef public_542430
#undef public_542439
#undef public_54243b
#undef public_542446
#undef public_54245c
#undef public_542461
#undef public_542474
#undef public_542480
#undef public_54249c
#undef public_5424a4
