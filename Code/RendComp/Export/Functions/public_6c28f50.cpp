#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c28f50);
CLANG_FORWARD_PROC_SYMBOL(public_6c29250);

#define public_6c28f66 _public_6c28f66
#define public_6c28f78 _public_6c28f78
#define public_6c28f8b _public_6c28f8b
#define public_6c28f91 _public_6c28f91
#define public_6c28fa3 _public_6c28fa3
#define public_6c28fa9 _public_6c28fa9
#define public_6c28fbf _public_6c28fbf
#define public_6c28fc5 _public_6c28fc5
#define public_6c28fdb _public_6c28fdb
#define public_6c28fe1 _public_6c28fe1

PROC_DECLARE(0x6c28f50, internal_6c28f50, public_6c28f50);
extern "C" NAKED register_t __cdecl internal_6c28f50()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test dl, dl
        push esi
        jns public_6c28f66
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        jne public_6c28f66
        xor al, al
        pop esi
        ret 4
        public_6c28f66 : nop
        test dh, 1
        je public_6c28f78
        mov eax, dword ptr ds : [ecx+0x24]
        test eax, eax
        jne public_6c28f78
        xor al, al
        pop esi
        ret 4
        public_6c28f78 : nop
        test dh, 0x40
        je public_6c28f91
        mov eax, dword ptr ds : [ecx+0x38]
        test eax, eax
        je public_6c28f8b
        mov esi, dword ptr ds : [eax+0xC]
        test esi, esi
        jne public_6c28f91
        public_6c28f8b : nop
        xor al, al
        pop esi
        ret 4
        public_6c28f91 : nop
        test dh, dh
        jns public_6c28fa9
        mov eax, dword ptr ds : [ecx+0x38]
        test eax, eax
        je public_6c28fa3
        mov esi, dword ptr ds : [eax+0x20]
        test esi, esi
        jne public_6c28fa9
        public_6c28fa3 : nop
        xor al, al
        pop esi
        ret 4
        public_6c28fa9 : nop
        test edx, 0x10000
        je public_6c28fc5
        mov eax, dword ptr ds : [ecx+0x38]
        test eax, eax
        je public_6c28fbf
        mov esi, dword ptr ds : [eax+0x34]
        test esi, esi
        jne public_6c28fc5
        public_6c28fbf : nop
        xor al, al
        pop esi
        ret 4
        public_6c28fc5 : nop
        test edx, 0x20000
        je public_6c28fe1
        mov eax, dword ptr ds : [ecx+0x38]
        test eax, eax
        je public_6c28fdb
        mov esi, dword ptr ds : [eax+0x48]
        test esi, esi
        jne public_6c28fe1
        public_6c28fdb : nop
        xor al, al
        pop esi
        ret 4
        public_6c28fe1 : nop
        mov eax, dword ptr ds : [ecx+0x2C]
        push edx
        push eax
        call public_6c29250
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c28f50)
    }
}

#undef public_6c28f66
#undef public_6c28f78
#undef public_6c28f8b
#undef public_6c28f91
#undef public_6c28fa3
#undef public_6c28fa9
#undef public_6c28fbf
#undef public_6c28fc5
#undef public_6c28fdb
#undef public_6c28fe1
