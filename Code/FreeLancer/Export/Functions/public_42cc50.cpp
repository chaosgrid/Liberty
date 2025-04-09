#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_42d1d0);

#define public_42cc80 _public_42cc80
#define public_42cc98 _public_42cc98
#define public_42cc9b _public_42cc9b
#define public_42ccc8 _public_42ccc8
#define public_42cce0 _public_42cce0

PROC_DECLARE(0x42cc50, internal_42cc50, public_42cc50);
extern "C" NAKED register_t __cdecl internal_42cc50()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp al, bl
        je public_42cc9b
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_42d1d0
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_42cc80
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+8], ebx
        public_42cc80 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_42cc98
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+0xC], ebx
        public_42cc98 : nop
        mov byte ptr ds : [esi+0x10], bl
        public_42cc9b : nop
        push edi
        mov edi, dword ptr ds : [public_5c60c8]
        push esi
        call edi
        lea ebp, ds:[esi+4]
        push ebp
        call edi
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ebx
        pop edi
        je public_42ccc8
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+8], ebx
        public_42ccc8 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_42cce0
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi+0xC], ebx
        public_42cce0 : nop
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x10], bl
        pop esi
        mov dword ptr ss : [ebp], ebx
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x42cc50)
    }
}

#undef public_42cc80
#undef public_42cc98
#undef public_42cc9b
#undef public_42ccc8
#undef public_42cce0
