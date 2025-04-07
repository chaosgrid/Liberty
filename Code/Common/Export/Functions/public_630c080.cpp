#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630bfe0);
CLANG_FORWARD_PROC_SYMBOL(public_630c080);
CLANG_FORWARD_PROC_SYMBOL(public_630c400);
CLANG_FORWARD_PROC_SYMBOL(public_630c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_630caf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630c0b1 _public_630c0b1
#define public_630c0e3 _public_630c0e3
#define public_630c105 _public_630c105
#define public_630c110 _public_630c110
#define public_630c133 _public_630c133

PROC_DECLARE(0x630c080, internal_630c080, public_630c080);
extern "C" NAKED register_t __cdecl internal_630c080()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_63fcf40]
        mov edx, dword ptr ds : [public_63fcf4c]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_630c105
        mov edx, eax
        cmp eax, edx
        jne public_630c105
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_63fcf44]
        cmp edi, eax
        mov esi, edi
        je public_630c0e3
        public_630c0b1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_63fcf3c
        call public_630c7e0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_630bfe0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_63fcf44]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_630c0b1
        mov ecx, dword ptr ds : [public_63fcf40]
        public_630c0e3 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_63fcf40]
        mov dword ptr ds : [public_63fcf4c], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_63fcf40]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_630c105 : nop
        cmp eax, ecx
        je public_630c133
        lea esp, ss:[esp]
        public_630c110 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_630caf0
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fcf3c
        call public_630c400
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_630c110
        public_630c133 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x630c080)
    }
}

#undef public_630c0b1
#undef public_630c0e3
#undef public_630c105
#undef public_630c110
#undef public_630c133
