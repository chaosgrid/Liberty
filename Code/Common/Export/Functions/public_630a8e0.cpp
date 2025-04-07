#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);

#define public_630a8f4 _public_630a8f4
#define public_630a91d _public_630a91d
#define public_630a92b _public_630a92b

PROC_DECLARE(0x630a8e0, internal_630a8e0, public_630a8e0);
extern "C" NAKED register_t __cdecl internal_630a8e0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+8], 0
        je public_630a92b
        public_630a8f4 : nop
        mov eax, dword ptr ds : [esi+0x10]
        fld dword ptr ds : [public_6399408]
        cmp eax, dword ptr ds : [public_63fcf0c]
        jne public_630a91d
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_630a91d
        push eax
        fstp st(0)
        call public_62f93f0
        fild dword ptr ds : [esi+0x1C]
        add esp, 4
        fmul dword ptr ds : [eax+0x5C]
        public_630a91d : nop
        fadd dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        fstp dword ptr ss : [esp+8]
        jne public_630a8f4
        public_630a92b : nop
        fld dword ptr ss : [esp+8]
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x630a8e0)
    }
}

#undef public_630a8f4
#undef public_630a91d
#undef public_630a92b
