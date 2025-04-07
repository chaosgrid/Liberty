#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629abd0);

#define public_629abfe _public_629abfe

PROC_DECLARE(0x629abd0, internal_629abd0, public_629abd0);
extern "C" NAKED register_t __cdecl internal_629abd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        cmp ecx, 0xFFFFFFFF
        je public_629abfe
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_629abfe : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629abd0)
    }
}

#undef public_629abfe
