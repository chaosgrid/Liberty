#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2d520);

#define public_6d2d540 _public_6d2d540
#define public_6d2d552 _public_6d2d552
#define public_6d2d566 _public_6d2d566
#define public_6d2d57d _public_6d2d57d
#define public_6d2d586 _public_6d2d586
#define public_6d2d590 _public_6d2d590

PROC_DECLARE(0x6d2d520, internal_6d2d520, public_6d2d520);
extern "C" NAKED register_t __cdecl internal_6d2d520()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov dword ptr ss : [ebp-0x1C], ecx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d2d552
        public_6d2d540 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 4
        mov dword ptr ss : [ebp-0xC], edx
        public_6d2d552 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ss : [ebp-8]
        je public_6d2d566
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        jmp public_6d2d540
        public_6d2d566 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6d2d586
        public_6d2d57d : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 4
        mov dword ptr ss : [ebp-0x18], edx
        public_6d2d586 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, dword ptr ss : [ebp-0x14]
        je public_6d2d590
        jmp public_6d2d57d
        public_6d2d590 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d2d520)
    }
}

#undef public_6d2d540
#undef public_6d2d552
#undef public_6d2d566
#undef public_6d2d57d
#undef public_6d2d586
#undef public_6d2d590
