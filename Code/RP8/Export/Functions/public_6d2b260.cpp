#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b260);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2b284 _public_6d2b284
#define public_6d2b286 _public_6d2b286
#define public_6d2b2a6 _public_6d2b2a6
#define public_6d2b2cc _public_6d2b2cc
#define public_6d2b2e5 _public_6d2b2e5
#define public_6d2b315 _public_6d2b315
#define public_6d2b317 _public_6d2b317
#define public_6d2b337 _public_6d2b337
#define public_6d2b35d _public_6d2b35d
#define public_6d2b376 _public_6d2b376
#define public_6d2b3aa _public_6d2b3aa

PROC_DECLARE(0x6d2b260, internal_6d2b260, public_6d2b260);
extern "C" NAKED register_t __cdecl internal_6d2b260()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-0x18], ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x10
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, 1
        test ecx, ecx
        je public_6d2b284
        mov edx, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2b286
        public_6d2b284 : nop
        jmp public_6d2b2e5
        public_6d2b286 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d2b2a6
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d2b2cc
        public_6d2b2a6 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d2b2e5
        public_6d2b2cc : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x1C]
        mov byte ptr ds : [eax], dl
        public_6d2b2e5 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, 1
        test ecx, ecx
        je public_6d2b315
        mov edx, dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2b317
        public_6d2b315 : nop
        jmp public_6d2b376
        public_6d2b317 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d2b337
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d2b35d
        public_6d2b337 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d2b376
        public_6d2b35d : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x20]
        mov byte ptr ds : [eax], dl
        public_6d2b376 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        and ecx, 1
        test ecx, ecx
        je public_6d2b3aa
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d2b3aa : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2b260)
    }
}

#undef public_6d2b284
#undef public_6d2b286
#undef public_6d2b2a6
#undef public_6d2b2cc
#undef public_6d2b2e5
#undef public_6d2b315
#undef public_6d2b317
#undef public_6d2b337
#undef public_6d2b35d
#undef public_6d2b376
#undef public_6d2b3aa
