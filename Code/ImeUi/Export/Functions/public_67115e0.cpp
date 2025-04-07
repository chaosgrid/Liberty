#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67115e0);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);

#define public_67115f4 _public_67115f4
#define public_6711607 _public_6711607
#define public_671161a _public_671161a
#define public_671163b _public_671163b

PROC_DECLARE(0x67115e0, internal_67115e0, public_67115e0);
extern "C" NAKED register_t __cdecl internal_67115e0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        xor eax, eax
        mov ecx, dword ptr ds : [ebx+8]
        push edi
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        je public_671163b
        mov edx, dword ptr ss : [esp+0x10]
        public_67115f4 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edx, edi
        je public_6711607
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_67115f4
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6711607 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp ecx, edi
        jne public_671161a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x10], 0
        public_671161a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        call public_67169d0
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, edi
        public_671163b : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x67115e0)
    }
}

#undef public_67115f4
#undef public_6711607
#undef public_671161a
#undef public_671163b
