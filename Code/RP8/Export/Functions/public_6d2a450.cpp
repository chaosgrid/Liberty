#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2a450);

#define public_6d2a487 _public_6d2a487
#define public_6d2a4ac _public_6d2a4ac
#define public_6d2a4c5 _public_6d2a4c5
#define public_6d2a4cf _public_6d2a4cf
#define public_6d2a4f0 _public_6d2a4f0
#define public_6d2a4f8 _public_6d2a4f8

PROC_DECLARE(0x6d2a450, internal_6d2a450, public_6d2a450);
extern "C" NAKED register_t __cdecl internal_6d2a450()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-0x14], ecx
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x20]
        test edx, edx
        jne public_6d2a487
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d2a487
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], edx
        jmp public_6d2a4f8
        public_6d2a487 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x21]
        test ecx, ecx
        jne public_6d2a4cf
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x10], edx
        public_6d2a4ac : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x21]
        test edx, edx
        jne public_6d2a4c5
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d2a4ac
        public_6d2a4c5 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx], eax
        jmp public_6d2a4f8
        public_6d2a4cf : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx]
        jne public_6d2a4f0
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        jmp public_6d2a4cf
        public_6d2a4f0 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        public_6d2a4f8 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2a450)
    }
}

#undef public_6d2a487
#undef public_6d2a4ac
#undef public_6d2a4c5
#undef public_6d2a4cf
#undef public_6d2a4f0
#undef public_6d2a4f8
