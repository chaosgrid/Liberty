#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1c910);

#define public_6d1c934 _public_6d1c934
#define public_6d1c94b _public_6d1c94b
#define public_6d1c955 _public_6d1c955
#define public_6d1c977 _public_6d1c977
#define public_6d1c98c _public_6d1c98c

PROC_DECLARE(0x6d1c910, internal_6d1c910, public_6d1c910);
extern "C" NAKED register_t __cdecl internal_6d1c910()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx+0x25]
        test eax, eax
        jne public_6d1c955
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-8], eax
        public_6d1c934 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        movsx eax, byte ptr ds : [edx+0x25]
        test eax, eax
        jne public_6d1c94b
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        jmp public_6d1c934
        public_6d1c94b : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1c98c
        public_6d1c955 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1c977
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        jmp public_6d1c955
        public_6d1c977 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp-4]
        je public_6d1c98c
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        public_6d1c98c : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1c910)
    }
}

#undef public_6d1c934
#undef public_6d1c94b
#undef public_6d1c955
#undef public_6d1c977
#undef public_6d1c98c
