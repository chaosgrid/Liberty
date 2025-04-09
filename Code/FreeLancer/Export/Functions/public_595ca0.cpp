#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595ca0);

#define public_595cbf _public_595cbf
#define public_595cec _public_595cec
#define public_595cee _public_595cee
#define public_595d0b _public_595d0b
#define public_595d2a _public_595d2a
#define public_595d4a _public_595d4a
#define public_595d52 _public_595d52

PROC_DECLARE(0x595ca0, internal_595ca0, public_595ca0);
extern "C" NAKED register_t __cdecl internal_595ca0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x3C0]
        fcomp dword ptr ds : [ecx+0x3C4]
        fnstsw ax
        test ah, 0x41
        jne public_595cbf
        mov eax, dword ptr ds : [ecx+0x3C4]
        mov dword ptr ds : [ecx+0x3C0], eax
        public_595cbf : nop
        fld dword ptr ds : [ecx+0x3C4]
        fsub dword ptr ds : [ecx+0x3C0]
        fcom dword ptr ds : [ecx+0x3CC]
        fnstsw ax
        test ah, 5
        jp public_595cec
        mov al, byte ptr ds : [ecx+0x3B4]
        test al, al
        je public_595d4a
        mov dword ptr ds : [ecx+0x3CC], 0x3F800000
        public_595cec : nop
        fstp st(0)
        public_595cee : nop
        fld dword ptr ds : [ecx+0x3CC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_595d0b
        mov dword ptr ds : [ecx+0x3CC], 0
        public_595d0b : nop
        fld dword ptr ds : [ecx+0x3C8]
        fcomp dword ptr ds : [ecx+0x3C0]
        fnstsw ax
        test ah, 5
        jp public_595d2a
        mov edx, dword ptr ds : [ecx+0x3C0]
        mov dword ptr ds : [ecx+0x3C8], edx
        public_595d2a : nop
        fld dword ptr ds : [ecx+0x3C4]
        fsub dword ptr ds : [ecx+0x3CC]
        fcom dword ptr ds : [ecx+0x3C8]
        fnstsw ax
        test ah, 5
        jp public_595d52
        fstp dword ptr ds : [ecx+0x3C8]
        ret 
        public_595d4a : nop
        fstp dword ptr ds : [ecx+0x3CC]
        jmp public_595cee
        public_595d52 : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x595ca0)
    }
}

#undef public_595cbf
#undef public_595cec
#undef public_595cee
#undef public_595d0b
#undef public_595d2a
#undef public_595d4a
#undef public_595d52
