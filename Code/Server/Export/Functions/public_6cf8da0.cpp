#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8df7 _public_6cf8df7
#define public_6cf8df9 _public_6cf8df9

PROC_DECLARE(0x6cf8da0, internal_6cf8da0, public_6cf8da0);
extern "C" NAKED register_t __cdecl internal_6cf8da0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, 0x3FFFFFFF
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edi], 0
        je public_6cf8df9
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_6cf8df7
        add ecx, 0xC
        xor eax, eax
        test ecx, ecx
        je public_6cf8df9
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6cf8df9
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_6cf8df9
        mov ecx, dword ptr ds : [ecx+0xE0]
        mov dword ptr ds : [edi], ecx
        pop edi
        pop esi
        ret 
        public_6cf8df7 : nop
        mov eax, esi
        public_6cf8df9 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8da0)
    }
}

#undef public_6cf8df7
#undef public_6cf8df9
