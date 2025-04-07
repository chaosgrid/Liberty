#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1e710);

#define public_6d1e747 _public_6d1e747
#define public_6d1e76c _public_6d1e76c
#define public_6d1e785 _public_6d1e785
#define public_6d1e78f _public_6d1e78f
#define public_6d1e7b0 _public_6d1e7b0
#define public_6d1e7b8 _public_6d1e7b8

PROC_DECLARE(0x6d1e710, internal_6d1e710, public_6d1e710);
extern "C" NAKED register_t __cdecl internal_6d1e710()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-0x14], ecx
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x24]
        test edx, edx
        jne public_6d1e747
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1e747
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1e7b8
        public_6d1e747 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x25]
        test ecx, ecx
        jne public_6d1e78f
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x10], edx
        public_6d1e76c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x25]
        test edx, edx
        jne public_6d1e785
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d1e76c
        public_6d1e785 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx], eax
        jmp public_6d1e7b8
        public_6d1e78f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx]
        jne public_6d1e7b0
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1e78f
        public_6d1e7b0 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        public_6d1e7b8 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1e710)
    }
}

#undef public_6d1e747
#undef public_6d1e76c
#undef public_6d1e785
#undef public_6d1e78f
#undef public_6d1e7b0
#undef public_6d1e7b8
