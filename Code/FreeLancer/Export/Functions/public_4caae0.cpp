#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4caae0);

#define public_4caaf0 _public_4caaf0
#define public_4cab05 _public_4cab05
#define public_4cab23 _public_4cab23
#define public_4cab2d _public_4cab2d
#define public_4cab40 _public_4cab40
#define public_4cab65 _public_4cab65

PROC_DECLARE(0x4caae0, internal_4caae0, public_4caae0);
extern "C" NAKED register_t __cdecl internal_4caae0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x28]
        cmp esi, dword ptr ds : [edi+0x2C]
        je public_4cab2d
        xor ebx, ebx
        nop 
        public_4caaf0 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_4cab05
        cmp byte ptr ds : [esi+8], 1
        jne public_4cab05
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov byte ptr ds : [esi+8], bl
        public_4cab05 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_4cab23
        mov ecx, eax
        cmp ecx, ebx
        je public_4cab23
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4cab23 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        add esi, 0x10
        cmp esi, eax
        jne public_4caaf0
        public_4cab2d : nop
        mov edx, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edi+0x28]
        mov eax, edx
        cmp eax, edx
        je public_4cab65
        push ebp
        lea ebx, ds:[ebx]
        public_4cab40 : nop
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
        jne public_4cab40
        pop ebp
        public_4cab65 : nop
        mov dword ptr ds : [edi+0x2C], ecx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4caae0)
    }
}

#undef public_4caaf0
#undef public_4cab05
#undef public_4cab23
#undef public_4cab2d
#undef public_4cab40
#undef public_4cab65
