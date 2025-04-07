#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2a340);

#define public_6d2a375 _public_6d2a375
#define public_6d2a39d _public_6d2a39d
#define public_6d2a3c3 _public_6d2a3c3
#define public_6d2a3cf _public_6d2a3cf

PROC_DECLARE(0x6d2a340, internal_6d2a340, public_6d2a340);
extern "C" NAKED register_t __cdecl internal_6d2a340()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d2a375
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], ecx
        public_6d2a375 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d2a39d
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d2a3cf
        public_6d2a39d : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp+8]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d2a3c3
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        jmp public_6d2a3cf
        public_6d2a3c3 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], eax
        public_6d2a3cf : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], ecx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2a340)
    }
}

#undef public_6d2a375
#undef public_6d2a39d
#undef public_6d2a3c3
#undef public_6d2a3cf
