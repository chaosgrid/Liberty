#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8c8e _public_6cf8c8e
#define public_6cf8c94 _public_6cf8c94
#define public_6cf8c96 _public_6cf8c96

PROC_DECLARE(0x6cf8c30, internal_6cf8c30, public_6cf8c30);
extern "C" NAKED register_t __cdecl internal_6cf8c30()
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
        je public_6cf8c96
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf8c94
        add eax, 0xC
        test eax, eax
        je public_6cf8c8e
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf8c8e
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cf8c8e
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cf8c8e : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6cf8c94 : nop
        mov eax, esi
        public_6cf8c96 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8c30)
    }
}

#undef public_6cf8c8e
#undef public_6cf8c94
#undef public_6cf8c96
