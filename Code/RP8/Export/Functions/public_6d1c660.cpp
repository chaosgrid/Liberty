#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1c660);

#define public_6d1c67c _public_6d1c67c
#define public_6d1c691 _public_6d1c691
#define public_6d1c6ef _public_6d1c6ef
#define public_6d1c703 _public_6d1c703
#define public_6d1c74f _public_6d1c74f
#define public_6d1c766 _public_6d1c766
#define public_6d1c769 _public_6d1c769

PROC_DECLARE(0x6d1c660, internal_6d1c660, public_6d1c660);
extern "C" NAKED register_t __cdecl internal_6d1c660()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-0x14], ecx
        mov eax, dword ptr ss : [ebp-0x14]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d1c67c
        mov eax, 0x80004005
        jmp public_6d1c769
        public_6d1c67c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx+0x18]
        jbe public_6d1c691
        mov eax, 0x80004005
        jmp public_6d1c769
        public_6d1c691 : nop
        movzx eax, byte ptr ss : [ebp+0x18]
        neg eax
        sbb eax, eax
        and eax, 0xFFFFF800
        add eax, 0x800
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        and edx, 0x200
        neg edx
        sbb edx, edx
        neg edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d1c703
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+0x14]
        add edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ds : [eax+0x18]
        jbe public_6d1c6ef
        mov ecx, dword ptr ss : [ebp-4]
        or ecx, 0x2000
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+0x14], 0
        mov dword ptr ss : [ebp+8], 0
        jmp public_6d1c703
        public_6d1c6ef : nop
        mov eax, dword ptr ss : [ebp-4]
        or eax, 0x1000
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [ebp+8], edx
        public_6d1c703 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 1
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+8]
        shl ecx, 1
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 8
        push eax
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jl public_6d1c766
        cmp dword ptr ss : [ebp+0x14], 0
        je public_6d1c74f
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx], eax
        public_6d1c74f : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+0x14], ecx
        public_6d1c766 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d1c769 : nop
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d1c660)
    }
}

#undef public_6d1c67c
#undef public_6d1c691
#undef public_6d1c6ef
#undef public_6d1c703
#undef public_6d1c74f
#undef public_6d1c766
#undef public_6d1c769
