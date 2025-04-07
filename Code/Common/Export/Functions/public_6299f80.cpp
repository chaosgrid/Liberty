#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299f80);
CLANG_FORWARD_PROC_SYMBOL(public_62b1790);

#define public_629a005 _public_629a005
#define public_629a007 _public_629a007
#define public_629a019 _public_629a019
#define public_629a022 _public_629a022
#define public_629a02b _public_629a02b
#define public_629a034 _public_629a034
#define public_629a03d _public_629a03d
#define public_629a046 _public_629a046
#define public_629a04f _public_629a04f

PROC_DECLARE(0x6299f80, internal_6299f80, public_6299f80);
extern "C" NAKED register_t __cdecl internal_6299f80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629a04f
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        jne public_629a046
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_629a03d
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xB0]
        test al, al
        je public_629a034
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xA4]
        test al, al
        je public_629a02b
        mov ecx, dword ptr ds : [esi+4]
        fld dword ptr ds : [ecx+0x140]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 1
        je public_629a022
        test ecx, ecx
        je public_629a019
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_629a019
        test ecx, ecx
        je public_629a005
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, edx
        cmp eax, edx
        je public_629a007
        public_629a005 : nop
        xor ecx, ecx
        public_629a007 : nop
        call public_62b1790
        test al, al
        je public_629a019
        mov eax, 7
        pop esi
        ret 4
        public_629a019 : nop
        mov eax, 9
        pop esi
        ret 4
        public_629a022 : nop
        mov eax, 8
        pop esi
        ret 4
        public_629a02b : nop
        mov eax, 3
        pop esi
        ret 4
        public_629a034 : nop
        mov eax, 4
        pop esi
        ret 4
        public_629a03d : nop
        mov eax, 2
        pop esi
        ret 4
        public_629a046 : nop
        mov eax, 1
        pop esi
        ret 4
        public_629a04f : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6299f80)
    }
}

#undef public_629a005
#undef public_629a007
#undef public_629a019
#undef public_629a022
#undef public_629a02b
#undef public_629a034
#undef public_629a03d
#undef public_629a046
#undef public_629a04f
