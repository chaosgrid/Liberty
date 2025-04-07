#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d280f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2810d _public_6d2810d
#define public_6d28116 _public_6d28116
#define public_6d2813d _public_6d2813d
#define public_6d2813f _public_6d2813f
#define public_6d2815f _public_6d2815f
#define public_6d28185 _public_6d28185
#define public_6d2819e _public_6d2819e
#define public_6d281ce _public_6d281ce
#define public_6d281d0 _public_6d281d0
#define public_6d281f0 _public_6d281f0
#define public_6d28216 _public_6d28216
#define public_6d2822f _public_6d2822f
#define public_6d28262 _public_6d28262
#define public_6d28267 _public_6d28267

PROC_DECLARE(0x6d280f0, internal_6d280f0, public_6d280f0);
extern "C" NAKED register_t __cdecl internal_6d280f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x30
        mov dword ptr ss : [ebp-0x28], ecx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d28116
        public_6d2810d : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x20
        mov dword ptr ss : [ebp-0x18], ecx
        public_6d28116 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ss : [ebp-0x1C]
        je public_6d28267
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x10
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, 1
        test ecx, ecx
        je public_6d2813d
        mov edx, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2813f
        public_6d2813d : nop
        jmp public_6d2819e
        public_6d2813f : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d2815f
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d28185
        public_6d2815f : nop
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
        jmp public_6d2819e
        public_6d28185 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x2C]
        mov byte ptr ds : [eax], dl
        public_6d2819e : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, 1
        test ecx, ecx
        je public_6d281ce
        mov edx, dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d281d0
        public_6d281ce : nop
        jmp public_6d2822f
        public_6d281d0 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d281f0
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d28216
        public_6d281f0 : nop
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
        jmp public_6d2822f
        public_6d28216 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [eax], dl
        public_6d2822f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+0xC], 0
        xor ecx, ecx
        and ecx, 1
        test ecx, ecx
        je public_6d28262
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d28262 : nop
        jmp public_6d2810d
        public_6d28267 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [eax+0xC]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+0xC], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d280f0)
    }
}

#undef public_6d2810d
#undef public_6d28116
#undef public_6d2813d
#undef public_6d2813f
#undef public_6d2815f
#undef public_6d28185
#undef public_6d2819e
#undef public_6d281ce
#undef public_6d281d0
#undef public_6d281f0
#undef public_6d28216
#undef public_6d2822f
#undef public_6d28262
#undef public_6d28267
