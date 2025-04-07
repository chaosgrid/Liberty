#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01143);
CLANG_FORWARD_PROC_SYMBOL(public_6d01689);
CLANG_FORWARD_PROC_SYMBOL(public_6d01a06);

#define public_6d1e9b4 _public_6d1e9b4
#define public_6d1e9e8 _public_6d1e9e8
#define public_6d1e9f1 _public_6d1e9f1
#define public_6d1e9f9 _public_6d1e9f9
#define public_6d1ea05 _public_6d1ea05
#define public_6d1ea11 _public_6d1ea11
#define public_6d1eadc _public_6d1eadc
#define public_6d1eaec _public_6d1eaec
#define public_6d1eaf4 _public_6d1eaf4
#define public_6d1eafb _public_6d1eafb
#define public_6d1eb10 _public_6d1eb10
#define public_6d1eb3a _public_6d1eb3a
#define public_6d1eb6d _public_6d1eb6d
#define public_6d1eb75 _public_6d1eb75
#define public_6d1eb7c _public_6d1eb7c
#define public_6d1eb83 _public_6d1eb83

PROC_DECLARE(0x6d1e980, internal_6d1e980, public_6d1e980);
extern "C" NAKED register_t __cdecl internal_6d1e980()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x38
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [ecx], 0x14
        jne public_6d1ea05
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x24], edx
        public_6d1e9b4 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        mov cl, byte ptr ds : [eax]
        mov byte ptr ss : [ebp-0x25], cl
        mov edx, dword ptr ss : [ebp-0x20]
        cmp cl, byte ptr ds : [edx]
        jne public_6d1e9f1
        cmp byte ptr ss : [ebp-0x25], 0
        je public_6d1e9e8
        mov eax, dword ptr ss : [ebp-0x24]
        mov cl, byte ptr ds : [eax+1]
        mov byte ptr ss : [ebp-0x26], cl
        mov edx, dword ptr ss : [ebp-0x20]
        cmp cl, byte ptr ds : [edx+1]
        jne public_6d1e9f1
        add dword ptr ss : [ebp-0x24], 2
        add dword ptr ss : [ebp-0x20], 2
        cmp byte ptr ss : [ebp-0x26], 0
        jne public_6d1e9b4
        public_6d1e9e8 : nop
        mov dword ptr ss : [ebp-0x2C], 0
        jmp public_6d1e9f9
        public_6d1e9f1 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x2C], eax
        public_6d1e9f9 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x30], ecx
        cmp dword ptr ss : [ebp-0x30], 0
        je public_6d1ea11
        public_6d1ea05 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFD
        jmp public_6d1eb83
        public_6d1ea11 : nop
        push 1
        push 0x230C
        call dword ptr ds : [public_6d5e140]
        add esp, 8
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6d1eaf4
        mov ecx, dword ptr ss : [ebp-0x10]
        call public_6d01143
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 0x2300
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax], offset public_6d5e72c
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [ecx+4], 1
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], offset public_6d5e5f8
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+4], offset public_6d5e5d4
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+8], offset public_6d5e5c4
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+0xC], offset public_6d5e594
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0x10], offset public_6d5e560
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x14], offset public_6d5e540
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+0x18], offset public_6d5e520
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0x1C], offset public_6d5e510
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x22FC], edx
        mov eax, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [eax+0x22FC], 0
        jne public_6d1eadc
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2300
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0x22FC], ecx
        jmp public_6d1eaec
        public_6d1eadc : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x2300
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx], eax
        public_6d1eaec : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x34], eax
        jmp public_6d1eafb
        public_6d1eaf4 : nop
        mov dword ptr ss : [ebp-0x34], 0
        public_6d1eafb : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-8], ecx
        cmp dword ptr ss : [ebp-8], 0
        jne public_6d1eb10
        mov dword ptr ss : [ebp-4], 0xFFFFFFFC
        jmp public_6d1eb83
        public_6d1eb10 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d01a06
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1eb83
        mov eax, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [eax+0xC], 0
        je public_6d1eb3a
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx], 0
        public_6d1eb3a : nop
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x14], ecx
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d1eb75
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d01689
        mov edx, 1
        and edx, 1
        test edx, edx
        je public_6d1eb6d
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call dword ptr ds : [public_6d5e11c]
        add esp, 4
        public_6d1eb6d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x38], ecx
        jmp public_6d1eb7c
        public_6d1eb75 : nop
        mov dword ptr ss : [ebp-0x38], 0
        public_6d1eb7c : nop
        mov dword ptr ss : [ebp-8], 0
        public_6d1eb83 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1e980)
    }
}

#undef public_6d1e9b4
#undef public_6d1e9e8
#undef public_6d1e9f1
#undef public_6d1e9f9
#undef public_6d1ea05
#undef public_6d1ea11
#undef public_6d1eadc
#undef public_6d1eaec
#undef public_6d1eaf4
#undef public_6d1eafb
#undef public_6d1eb10
#undef public_6d1eb3a
#undef public_6d1eb6d
#undef public_6d1eb75
#undef public_6d1eb7c
#undef public_6d1eb83
