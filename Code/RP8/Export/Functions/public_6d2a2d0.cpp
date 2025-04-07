#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2a2d0);

#define public_6d2a2ee _public_6d2a2ee
#define public_6d2a31f _public_6d2a31f
#define public_6d2a32d _public_6d2a32d
#define public_6d2a32f _public_6d2a32f

PROC_DECLARE(0x6d2a2d0, internal_6d2a2d0, public_6d2a2d0);
extern "C" NAKED register_t __cdecl internal_6d2a2d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-8], ecx
        public_6d2a2ee : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d2a32f
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0xC
        push edx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        movzx eax, al
        test eax, eax
        je public_6d2a31f
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d2a32d
        public_6d2a31f : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-4], edx
        public_6d2a32d : nop
        jmp public_6d2a2ee
        public_6d2a32f : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2a2d0)
    }
}

#undef public_6d2a2ee
#undef public_6d2a31f
#undef public_6d2a32d
#undef public_6d2a32f
