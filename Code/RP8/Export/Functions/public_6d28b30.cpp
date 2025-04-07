#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d28b54 _public_6d28b54
#define public_6d28b56 _public_6d28b56
#define public_6d28b76 _public_6d28b76
#define public_6d28b9c _public_6d28b9c
#define public_6d28bb5 _public_6d28bb5
#define public_6d28be5 _public_6d28be5
#define public_6d28be7 _public_6d28be7
#define public_6d28c07 _public_6d28c07
#define public_6d28c2d _public_6d28c2d
#define public_6d28c46 _public_6d28c46

PROC_DECLARE(0x6d28b30, internal_6d28b30, public_6d28b30);
extern "C" NAKED register_t __cdecl internal_6d28b30()
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
        je public_6d28b54
        mov edx, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d28b56
        public_6d28b54 : nop
        jmp public_6d28bb5
        public_6d28b56 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d28b76
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d28b9c
        public_6d28b76 : nop
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
        jmp public_6d28bb5
        public_6d28b9c : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x1C]
        mov byte ptr ds : [eax], dl
        public_6d28bb5 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, 1
        test ecx, ecx
        je public_6d28be5
        mov edx, dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d28be7
        public_6d28be5 : nop
        jmp public_6d28c46
        public_6d28be7 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d28c07
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d28c2d
        public_6d28c07 : nop
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
        jmp public_6d28c46
        public_6d28c2d : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x20]
        mov byte ptr ds : [eax], dl
        public_6d28c46 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+0xC], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d28b30)
    }
}

#undef public_6d28b54
#undef public_6d28b56
#undef public_6d28b76
#undef public_6d28b9c
#undef public_6d28bb5
#undef public_6d28be5
#undef public_6d28be7
#undef public_6d28c07
#undef public_6d28c2d
#undef public_6d28c46
