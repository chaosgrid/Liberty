#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f00);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f70);
CLANG_FORWARD_PROC_SYMBOL(public_4c6e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4c6f13 _public_4c6f13
#define public_4c6f2b _public_4c6f2b
#define public_4c6f33 _public_4c6f33
#define public_4c6f5c _public_4c6f5c
#define public_4c6f5e _public_4c6f5e

PROC_DECLARE(0x4c6e90, internal_4c6e90, public_4c6e90);
extern "C" NAKED register_t __cdecl internal_4c6e90()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_4c6f5c
        mov eax, dword ptr ds : [public_66873c]
        test eax, eax
        je public_4c6f5c
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov esi, eax
        test esi, esi
        je public_4c6f5c
        push edi
        call dword ptr ds : [public_5c6158]
        mov ecx, eax
        call dword ptr ds : [public_5c6418]
        test eax, eax
        je public_4c6f5c
        mov eax, dword ptr ds : [eax+0x48]
        push eax
        mov ecx, esi
        call public_438060
        call public_5b7ec0
        mov cl, byte ptr ss : [esp+0x14]
        test cl, cl
        mov dword ptr ss : [esp+0x10], eax
        je public_4c6f5e
        call public_4c4f70
        fstp dword ptr ss : [esp+8]
        call public_4c3f00
        fld dword ptr ds : [public_5c7474]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        je public_4c6f2b
        public_4c6f13 : nop
        fadd dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_4c6f13
        test edx, edx
        mov dword ptr ss : [esp+0x14], edx
        jle public_4c6f2b
        fidiv dword ptr ss : [esp+0x14]
        jmp public_4c6f33
        public_4c6f2b : nop
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4c6f33 : nop
        fild dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ss : [esp+8]
        call public_5b7ec0
        fstp st(0)
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        add esp, 4
        fmul dword ptr ds : [public_5d6d38]
        jmp public_5b7ec0
        public_4c6f5c : nop
        xor eax, eax
        public_4c6f5e : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c6e90)
    }
}

#undef public_4c6f13
#undef public_4c6f2b
#undef public_4c6f33
#undef public_4c6f5c
#undef public_4c6f5e
