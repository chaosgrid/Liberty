#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bc60);

#define public_6d1bc95 _public_6d1bc95
#define public_6d1bcb1 _public_6d1bcb1

PROC_DECLARE(0x6d1bc60, internal_6d1bc60, public_6d1bc60);
extern "C" NAKED register_t __cdecl internal_6d1bc60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x20], 0
        je public_6d1bcb1
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx+0x10], 0
        je public_6d1bc95
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6d1bc95 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x20], 0
        public_6d1bcb1 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1bc60)
    }
}

#undef public_6d1bc95
#undef public_6d1bcb1
