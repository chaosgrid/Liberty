#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293210);
CLANG_FORWARD_PROC_SYMBOL(public_6307f80);

#define public_629cea0 _public_629cea0
#define public_629cea2 _public_629cea2
#define public_629cebf _public_629cebf
#define public_629cf0d _public_629cf0d
#define public_629cf11 _public_629cf11

PROC_DECLARE(0x629ce60, internal_629ce60, public_629ce60);
extern "C" NAKED register_t __cdecl internal_629ce60()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_6307f80
        fsub qword ptr ds : [esi+0x58]
        fstp dword ptr ss : [esp+0xC]
        call public_6307f80
        mov eax, dword ptr ds : [esi]
        fstp qword ptr ds : [esi+0x58]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_629cf11
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_629cea0
        mov cl, 1
        jmp public_629cea2
        public_629cea0 : nop
        xor cl, cl
        public_629cea2 : nop
        test cl, cl
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [eax+0x98]
        je public_629cebf
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+0x9C]
        faddp 
        public_629cebf : nop
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ds : [edx+0x198]
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_629cf0d
        test cl, cl
        fsub st, st(1)
        fstp dword ptr ds : [edx+0x198]
        fstp st(0)
        je public_629cf11
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        call dword ptr ds : [eax+0x3C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edi+0x90]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [ecx]
        faddp 
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [edx+0x40]
        pop edi
        jmp public_629cf11
        public_629cf0d : nop
        fstp st(0)
        fstp st(0)
        public_629cf11 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        mov ecx, esi
        call public_6293210
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x629ce60)
    }
}

#undef public_629cea0
#undef public_629cea2
#undef public_629cebf
#undef public_629cf0d
#undef public_629cf11
