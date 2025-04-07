#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d16d61 _public_6d16d61
#define public_6d16ddd _public_6d16ddd

PROC_DECLARE(0x6d16d20, internal_6d16d20, public_6d16d20);
extern "C" NAKED register_t __cdecl internal_6d16d20()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov dword ptr ss : [ebp-0x28], ecx
        mov eax, dword ptr ss : [ebp+0x10]
        mov cl, byte ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x28]
        mov byte ptr ds : [edx], cl
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x28]
        mov byte ptr ds : [edx+1], cl
        mov eax, dword ptr ss : [ebp-0x28]
        mov cl, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ss : [ebp-0xC], 0x28
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], edx
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d16d61
        mov dword ptr ss : [ebp-8], 0
        public_6d16d61 : nop
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax+0x25], 0
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+0x25], 1
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x20], edx
        mov dword ptr ss : [ebp-0x1C], 0x28
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d16ddd
        mov dword ptr ss : [ebp-0x18], 0
        public_6d16ddd : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x14], eax
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [edx+0x25], 0
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x28]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d16d20)
    }
}

#undef public_6d16d61
#undef public_6d16ddd
