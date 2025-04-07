#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfac66 _public_6cfac66
#define public_6cfac68 _public_6cfac68

PROC_DECLARE(0x6cfac00, internal_6cfac00, public_6cfac00);
extern "C" NAKED register_t __cdecl internal_6cfac00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cfac68
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_6cfac66
        add ecx, 0xC
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_6cfac68
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6cfac68
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6cfac68
        mov eax, dword ptr ds : [ecx+0x1DC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x1D8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 
        public_6cfac66 : nop
        mov eax, esi
        public_6cfac68 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfac00)
    }
}

#undef public_6cfac66
#undef public_6cfac68
