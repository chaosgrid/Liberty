#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d11e1a _public_6d11e1a
#define public_6d11e80 _public_6d11e80
#define public_6d11ea2 _public_6d11ea2
#define public_6d11eb1 _public_6d11eb1
#define public_6d11ec8 _public_6d11ec8
#define public_6d11ed7 _public_6d11ed7
#define public_6d11f26 _public_6d11f26
#define public_6d11f42 _public_6d11f42
#define public_6d11f5a _public_6d11f5a
#define public_6d11f62 _public_6d11f62
#define public_6d11f69 _public_6d11f69
#define public_6d11f70 _public_6d11f70
#define public_6d11f72 _public_6d11f72

PROC_DECLARE(0x6d11db3, internal_6d11db3, public_6d11db3);
extern "C" NAKED register_t __cdecl internal_6d11db3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x120], 0
        jne public_6d11e1a
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
/*FIXUP push offset public_6d69438 @0x6d11df0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69438
        push 0xFF1
/*FIXUP push offset public_6d69468 @0x6d11dfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69468
/*FIXUP push offset public_6d694b4 @0x6d11dff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d694b4
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d11f72
        public_6d11e1a : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_6d11f70
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], 0
        cmp dword ptr ss : [ebp-8], 0
        je public_6d11f70
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        and eax, 0x200
        neg eax
        sbb eax, eax
        neg eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d11f69
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ds : [edx+0x12C]
        jne public_6d11e80
        push 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+0x28]
        public_6d11e80 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x22D4
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+0x18], 0
        jne public_6d11ea2
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax], edx
        jmp public_6d11eb1
        public_6d11ea2 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [ecx+0x14], eax
        public_6d11eb1 : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+0x14], 0
        jne public_6d11ec8
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d11ed7
        public_6d11ec8 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        public_6d11ed7 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, 1
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], ecx
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6d11f62
        mov edx, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [edx+0x20], 0
        je public_6d11f42
        mov eax, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [eax+0x10], 0
        je public_6d11f26
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x30]
        public_6d11f26 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x20], 0
        public_6d11f42 : nop
        mov ecx, 1
        and ecx, 1
        test ecx, ecx
        je public_6d11f5a
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d11f5a : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_6d11f69
        public_6d11f62 : nop
        mov dword ptr ss : [ebp-0x1C], 0
        public_6d11f69 : nop
        mov dword ptr ss : [ebp-4], 0
        public_6d11f70 : nop
        xor eax, eax
        public_6d11f72 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d11db3)
    }
}

#undef public_6d11e1a
#undef public_6d11e80
#undef public_6d11ea2
#undef public_6d11eb1
#undef public_6d11ec8
#undef public_6d11ed7
#undef public_6d11f26
#undef public_6d11f42
#undef public_6d11f5a
#undef public_6d11f62
#undef public_6d11f69
#undef public_6d11f70
#undef public_6d11f72
