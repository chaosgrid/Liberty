#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1e7c0);

#define public_6d1e7f7 _public_6d1e7f7
#define public_6d1e81c _public_6d1e81c
#define public_6d1e835 _public_6d1e835
#define public_6d1e83f _public_6d1e83f
#define public_6d1e860 _public_6d1e860
#define public_6d1e868 _public_6d1e868

PROC_DECLARE(0x6d1e7c0, internal_6d1e7c0, public_6d1e7c0);
extern "C" NAKED register_t __cdecl internal_6d1e7c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-0x14], ecx
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x34]
        test edx, edx
        jne public_6d1e7f7
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1e7f7
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1e868
        public_6d1e7f7 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x35]
        test ecx, ecx
        jne public_6d1e83f
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x10], edx
        public_6d1e81c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x35]
        test edx, edx
        jne public_6d1e835
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d1e81c
        public_6d1e835 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx], eax
        jmp public_6d1e868
        public_6d1e83f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx]
        jne public_6d1e860
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1e83f
        public_6d1e860 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        public_6d1e868 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1e7c0)
    }
}

#undef public_6d1e7f7
#undef public_6d1e81c
#undef public_6d1e835
#undef public_6d1e83f
#undef public_6d1e860
#undef public_6d1e868
