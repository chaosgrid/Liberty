#include "RP8-PCH.h"


#define public_6d1e88c _public_6d1e88c
#define public_6d1e8c0 _public_6d1e8c0
#define public_6d1e8c9 _public_6d1e8c9
#define public_6d1e8d1 _public_6d1e8d1
#define public_6d1e8e4 _public_6d1e8e4
#define public_6d1e8fa _public_6d1e8fa

PROC_DECLARE(0x6d1e870, internal_6d1e870, public_6d1e870);
extern "C" NAKED register_t __cdecl internal_6d1e870()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], 0
        mov dword ptr ss : [ebp-4], offset public_6d6b83c
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        public_6d1e88c : nop
        mov edx, dword ptr ss : [ebp-8]
        mov al, byte ptr ds : [edx]
        mov byte ptr ss : [ebp-9], al
        mov ecx, dword ptr ss : [ebp-4]
        cmp al, byte ptr ds : [ecx]
        jne public_6d1e8c9
        cmp byte ptr ss : [ebp-9], 0
        je public_6d1e8c0
        mov edx, dword ptr ss : [ebp-8]
        mov al, byte ptr ds : [edx+1]
        mov byte ptr ss : [ebp-0xA], al
        mov ecx, dword ptr ss : [ebp-4]
        cmp al, byte ptr ds : [ecx+1]
        jne public_6d1e8c9
        add dword ptr ss : [ebp-8], 2
        add dword ptr ss : [ebp-4], 2
        cmp byte ptr ss : [ebp-0xA], 0
        jne public_6d1e88c
        public_6d1e8c0 : nop
        mov dword ptr ss : [ebp-0x10], 0
        jmp public_6d1e8d1
        public_6d1e8c9 : nop
        sbb edx, edx
        sbb edx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x10], edx
        public_6d1e8d1 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x14], eax
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d1e8e4
        mov eax, 0xFFFFFFFD
        jmp public_6d1e8fa
        public_6d1e8e4 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [ecx+4]
        xor eax, eax
        public_6d1e8fa : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1e870)
    }
}

#undef public_6d1e88c
#undef public_6d1e8c0
#undef public_6d1e8c9
#undef public_6d1e8d1
#undef public_6d1e8e4
#undef public_6d1e8fa
