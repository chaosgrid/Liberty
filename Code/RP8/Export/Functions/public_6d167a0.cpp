#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d167a0);

#define public_6d167c8 _public_6d167c8

PROC_DECLARE(0x6d167a0, internal_6d167a0, public_6d167a0);
extern "C" NAKED register_t __cdecl internal_6d167a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax], 0
        je public_6d167c8
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], 0
        public_6d167c8 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d167a0)
    }
}

#undef public_6d167c8
