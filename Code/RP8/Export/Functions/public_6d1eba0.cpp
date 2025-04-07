#include "RP8-PCH.h"


#define public_6d1ebb6 _public_6d1ebb6
#define public_6d1ebbf _public_6d1ebbf
#define public_6d1ebe1 _public_6d1ebe1
#define public_6d1ec15 _public_6d1ec15
#define public_6d1ec1e _public_6d1ec1e
#define public_6d1ec26 _public_6d1ec26
#define public_6d1ec64 _public_6d1ec64
#define public_6d1ec77 _public_6d1ec77
#define public_6d1ec8f _public_6d1ec8f
#define public_6d1ec94 _public_6d1ec94
#define public_6d1eca2 _public_6d1eca2

PROC_DECLARE(0x6d1eba0, internal_6d1eba0, public_6d1eba0);
extern "C" NAKED register_t __cdecl internal_6d1eba0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-4], offset public_6d5e4c8
        mov dword ptr ss : [ebp-8], 0
        jmp public_6d1ebbf
        public_6d1ebb6 : nop
        mov eax, dword ptr ss : [ebp-8]
        add eax, 1
        mov dword ptr ss : [ebp-8], eax
        public_6d1ebbf : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+ecx*8], 0
        je public_6d1ec94
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov dword ptr ss : [ebp-0x14], eax
        public_6d1ebe1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ss : [ebp-0x15], dl
        mov eax, dword ptr ss : [ebp-0x10]
        cmp dl, byte ptr ds : [eax]
        jne public_6d1ec1e
        cmp byte ptr ss : [ebp-0x15], 0
        je public_6d1ec15
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dl, byte ptr ds : [ecx+1]
        mov byte ptr ss : [ebp-0x16], dl
        mov eax, dword ptr ss : [ebp-0x10]
        cmp dl, byte ptr ds : [eax+1]
        jne public_6d1ec1e
        add dword ptr ss : [ebp-0x14], 2
        add dword ptr ss : [ebp-0x10], 2
        cmp byte ptr ss : [ebp-0x16], 0
        jne public_6d1ebe1
        public_6d1ec15 : nop
        mov dword ptr ss : [ebp-0x1C], 0
        jmp public_6d1ec26
        public_6d1ec1e : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x1C], ecx
        public_6d1ec26 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x20], edx
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6d1ec8f
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8+4]
        and edx, 0x80000000
        test edx, edx
        je public_6d1ec64
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8+4]
        and edx, 0x7FFFFFFF
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edx+ecx]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d1ec77
        public_6d1ec64 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-4]
        add ecx, dword ptr ds : [eax+edx*8+4]
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d1ec77 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx], edx
        xor eax, eax
        jmp public_6d1eca2
        public_6d1ec8f : nop
        jmp public_6d1ebb6
        public_6d1ec94 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], 0
        mov eax, 0xFFFFFFFD
        public_6d1eca2 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1eba0)
    }
}

#undef public_6d1ebb6
#undef public_6d1ebbf
#undef public_6d1ebe1
#undef public_6d1ec15
#undef public_6d1ec1e
#undef public_6d1ec26
#undef public_6d1ec64
#undef public_6d1ec77
#undef public_6d1ec8f
#undef public_6d1ec94
#undef public_6d1eca2
