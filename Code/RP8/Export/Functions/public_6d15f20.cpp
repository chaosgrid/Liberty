#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15f20);

#define public_6d15f52 _public_6d15f52
#define public_6d15f70 _public_6d15f70

PROC_DECLARE(0x6d15f20, internal_6d15f20, public_6d15f20);
extern "C" NAKED register_t __cdecl internal_6d15f20()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ss : [ebp+8]
        je public_6d15f70
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx], 0
        je public_6d15f52
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], 0
        public_6d15f52 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        cmp dword ptr ss : [ebp+8], 0
        je public_6d15f70
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+4]
        public_6d15f70 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d15f20)
    }
}

#undef public_6d15f52
#undef public_6d15f70
