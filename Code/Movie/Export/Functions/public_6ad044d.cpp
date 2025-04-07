#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad044d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3d58);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3d85);

#define public_6ad0476 _public_6ad0476

PROC_DECLARE(0x6ad044d, internal_6ad044d, public_6ad044d);
extern "C" NAKED register_t __cdecl internal_6ad044d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr ss : [ebp+8], 0
        push dword ptr ss : [ebp+0x10]
        je public_6ad0476
        lea eax, ss:[ebp-8]
        push eax
        call public_6ad3d58
        mov eax, dword ptr ss : [ebp+0xC]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], ecx
        leave 
        ret 
        public_6ad0476 : nop
        lea eax, ss:[ebp+0x10]
        push eax
        call public_6ad3d85
        mov eax, dword ptr ss : [ebp+0xC]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad044d)
    }
}

#undef public_6ad0476
