#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9a01 _public_6cf9a01
#define public_6cf9a03 _public_6cf9a03

PROC_DECLARE(0x6cf99a0, internal_6cf99a0, public_6cf99a0);
extern "C" NAKED register_t __cdecl internal_6cf99a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, 0xFFFFFFFE
        je public_6cf9a01
        push eax
        call public_6d00670
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_6cf9a01
        add ecx, 0xC
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_6cf9a03
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6cf9a03
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        jne public_6cf9a03
        mov eax, dword ptr ds : [ecx+0xEC]
        mov eax, dword ptr ds : [eax+8]
        push eax
        call dword ptr ds : [public_6d644bc]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 
        public_6cf9a01 : nop
        mov eax, esi
        public_6cf9a03 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf99a0)
    }
}

#undef public_6cf9a01
#undef public_6cf9a03
