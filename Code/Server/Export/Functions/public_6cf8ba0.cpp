#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8bf3 _public_6cf8bf3
#define public_6cf8bf8 _public_6cf8bf8
#define public_6cf8bfa _public_6cf8bfa

PROC_DECLARE(0x6cf8ba0, internal_6cf8ba0, public_6cf8ba0);
extern "C" NAKED register_t __cdecl internal_6cf8ba0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf8bfa
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf8bf8
        add eax, 0xC
        test eax, eax
        je public_6cf8bf3
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf8bf3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cf8bf3
        mov edx, dword ptr ds : [eax+0x104]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 
        public_6cf8bf3 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6cf8bf8 : nop
        mov eax, esi
        public_6cf8bfa : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8ba0)
    }
}

#undef public_6cf8bf3
#undef public_6cf8bf8
#undef public_6cf8bfa
