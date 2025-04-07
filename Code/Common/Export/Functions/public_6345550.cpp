#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345550);
CLANG_FORWARD_PROC_SYMBOL(public_6347d80);
CLANG_FORWARD_PROC_SYMBOL(public_6355490);

#define public_634555d _public_634555d
#define public_6345595 _public_6345595
#define public_63455b3 _public_63455b3

PROC_DECLARE(0x6345550, internal_6345550, public_6345550);
extern "C" NAKED register_t __cdecl internal_6345550()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        public_634555d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x28]
        test eax, eax
        je public_63455b3
        movsx esi, word ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+eax+0x24]
        mov edi, dword ptr ds : [esi+eax+0x70]
        mov ebx, dword ptr ds : [ecx+0x9C]
        add esi, eax
        test ebp, ebp
        jne public_6345595
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [edx+0x9C]
        call public_6347d80
        mov ecx, ebx
        call public_6347d80
        public_6345595 : nop
        push esi
        mov ecx, edi
        call public_6355490
        cmp word ptr ds : [edi+0x3E], 0
        jne public_634555d
        test edi, edi
        je public_634555d
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax+0x18]
        jmp public_634555d
        public_63455b3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6345550)
    }
}

#undef public_634555d
#undef public_6345595
#undef public_63455b3
