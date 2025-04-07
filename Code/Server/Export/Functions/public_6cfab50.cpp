#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfab9b _public_6cfab9b
#define public_6cfab9d _public_6cfab9d

PROC_DECLARE(0x6cfab50, internal_6cfab50, public_6cfab50);
extern "C" NAKED register_t __cdecl internal_6cfab50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cfab9d
        push ecx
        mov ebx, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfab9b
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x3C]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6cfab9b : nop
        mov eax, ebx
        public_6cfab9d : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cfab50)
    }
}

#undef public_6cfab9b
#undef public_6cfab9d
