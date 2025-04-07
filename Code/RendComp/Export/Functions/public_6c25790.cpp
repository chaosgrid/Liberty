#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25790);

#define public_6c257a6 _public_6c257a6
#define public_6c25804 _public_6c25804
#define public_6c25815 _public_6c25815
#define public_6c2582c _public_6c2582c
#define public_6c25847 _public_6c25847
#define public_6c25860 _public_6c25860
#define public_6c2587b _public_6c2587b
#define public_6c25894 _public_6c25894
#define public_6c2589e _public_6c2589e
#define public_6c258a5 _public_6c258a5
#define public_6c258aa _public_6c258aa

PROC_DECLARE(0x6c25790, internal_6c25790, public_6c25790);
extern "C" NAKED register_t __cdecl internal_6c25790()
{
    __asm
    {
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0xA8]
        test al, 1
        push esi
        push edi
        jne public_6c257a6
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c257a6 : nop
        test al, 4
        mov ecx, 6
        lea esi, ds:[edx+0x1BC]
        jne public_6c258aa
        xor eax, eax
        mov edi, esi
        rep stosd
        mov eax, dword ptr ds : [edx+0x30]
        test eax, eax
        je public_6c258a5
        mov ecx, dword ptr ds : [edx+0x20]
        fld dword ptr ds : [ecx]
        add ecx, 0xC
        cmp eax, 1
        fst dword ptr ds : [edx+0x1C0]
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [ecx-8]
        fst dword ptr ds : [edx+0x1C8]
        fstp dword ptr ds : [edx+0x1C4]
        fld dword ptr ds : [ecx-4]
        fst dword ptr ds : [edx+0x1D0]
        fstp dword ptr ds : [edx+0x1CC]
        jbe public_6c2589e
        lea edi, ds:[eax-1]
        public_6c25804 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_6c25815
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], eax
        jmp public_6c2582c
        public_6c25815 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [edx+0x1C0]
        fnstsw ax
        test ah, 5
        jp public_6c2582c
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx+0x1C0], eax
        public_6c2582c : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+0x1C4]
        fnstsw ax
        test ah, 0x41
        jne public_6c25847
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+0x1C4], eax
        jmp public_6c25860
        public_6c25847 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+0x1C8]
        fnstsw ax
        test ah, 5
        jp public_6c25860
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+0x1C8], eax
        public_6c25860 : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [edx+0x1CC]
        fnstsw ax
        test ah, 0x41
        jne public_6c2587b
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+0x1CC], eax
        jmp public_6c25894
        public_6c2587b : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [edx+0x1D0]
        fnstsw ax
        test ah, 5
        jp public_6c25894
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+0x1D0], eax
        public_6c25894 : nop
        add ecx, 0xC
        dec edi
        jne public_6c25804
        public_6c2589e : nop
        or dword ptr ds : [edx+0xA8], 4
        public_6c258a5 : nop
        mov ecx, 6
        public_6c258aa : nop
        mov edi, dword ptr ss : [esp+0xC]
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c25790)
    }
}

#undef public_6c257a6
#undef public_6c25804
#undef public_6c25815
#undef public_6c2582c
#undef public_6c25847
#undef public_6c25860
#undef public_6c2587b
#undef public_6c25894
#undef public_6c2589e
#undef public_6c258a5
#undef public_6c258aa
