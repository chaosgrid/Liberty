#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410a40);

#define public_410a5c _public_410a5c
#define public_410aab _public_410aab

PROC_DECLARE(0x410a40, internal_410a40, public_410a40);
extern "C" NAKED register_t __cdecl internal_410a40()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xB4]
        test al, 8
        je public_410aab
        cmp dword ptr ds : [ecx+0xB0], 3
        jne public_410a5c
        test al, 2
        jne public_410a5c
        mov al, 1
        ret 8
        public_410a5c : nop
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x9C]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0xA0]
        fld dword ptr ds : [ecx+0x58]
        fadd dword ptr ss : [esp+8]
        fld st(3)
        fmul st, st(4)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_410aab
        mov al, 1
        ret 8
        public_410aab : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x410a40)
    }
}

#undef public_410a5c
#undef public_410aab
