#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d282b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d282bb _public_6d282bb
#define public_6d282c4 _public_6d282c4
#define public_6d282eb _public_6d282eb
#define public_6d282ed _public_6d282ed
#define public_6d2830d _public_6d2830d
#define public_6d28333 _public_6d28333
#define public_6d2834c _public_6d2834c
#define public_6d2837c _public_6d2837c
#define public_6d2837e _public_6d2837e
#define public_6d2839e _public_6d2839e
#define public_6d283c4 _public_6d283c4
#define public_6d283dd _public_6d283dd
#define public_6d28410 _public_6d28410
#define public_6d28415 _public_6d28415

PROC_DECLARE(0x6d282b0, internal_6d282b0, public_6d282b0);
extern "C" NAKED register_t __cdecl internal_6d282b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6d282c4
        public_6d282bb : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x20
        mov dword ptr ss : [ebp+8], eax
        public_6d282c4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ss : [ebp+0xC]
        je public_6d28415
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x10
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, 1
        test eax, eax
        je public_6d282eb
        mov ecx, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d282ed
        public_6d282eb : nop
        jmp public_6d2834c
        public_6d282ed : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d2830d
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d28333
        public_6d2830d : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 2
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d2834c
        public_6d28333 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x1C]
        mov byte ptr ds : [edx], cl
        public_6d2834c : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, 1
        test eax, eax
        je public_6d2837c
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2837e
        public_6d2837c : nop
        jmp public_6d283dd
        public_6d2837e : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d2839e
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d283c4
        public_6d2839e : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 2
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d283dd
        public_6d283c4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x20]
        mov byte ptr ds : [edx], cl
        public_6d283dd : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0xC], 0
        xor eax, eax
        and eax, 1
        test eax, eax
        je public_6d28410
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6d2f249
        add esp, 4
        public_6d28410 : nop
        jmp public_6d282bb
        public_6d28415 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d282b0)
    }
}

#undef public_6d282bb
#undef public_6d282c4
#undef public_6d282eb
#undef public_6d282ed
#undef public_6d2830d
#undef public_6d28333
#undef public_6d2834c
#undef public_6d2837c
#undef public_6d2837e
#undef public_6d2839e
#undef public_6d283c4
#undef public_6d283dd
#undef public_6d28410
#undef public_6d28415
