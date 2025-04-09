#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411370);

#define public_411392 _public_411392
#define public_411396 _public_411396
#define public_411398 _public_411398
#define public_4113b4 _public_4113b4
#define public_4113ee _public_4113ee
#define public_411433 _public_411433
#define public_411439 _public_411439

PROC_DECLARE(0x411370, internal_411370, public_411370);
extern "C" NAKED register_t __cdecl internal_411370()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB0]
        sub esp, 0x18
        cmp eax, 1
        push ebx
        je public_411396
        test byte ptr ds : [ecx+0xB4], 2
        je public_411392
        cmp eax, 3
        je public_411396
        cmp eax, 2
        je public_411396
        public_411392 : nop
        xor bl, bl
        jmp public_411398
        public_411396 : nop
        mov bl, 1
        public_411398 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_411439
        test bl, bl
        mov edx, dword ptr ss : [esp+0x28]
        jne public_4113b4
        test edx, edx
        je public_411439
        public_4113b4 : nop
        test edx, edx
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x9C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0xA0]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        je public_4113ee
        fst dword ptr ds : [edx]
        public_4113ee : nop
        test bl, bl
        je public_411433
        fdivr qword ptr ds : [public_5c89b8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, eax
        pop ebx
        fxch st(2)
        fmul st, st(2)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp]
        fmul st, st(2)
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        fmul st, st(1)
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fstp st(0)
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x18
        ret 0xC
        public_411433 : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_411439 : nop
        fld dword ptr ds : [ecx+0x7C]
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x94]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        pop ebx
        fchs 
        fstp dword ptr ds : [eax]
        fchs 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ds : [eax+8]
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x411370)
    }
}

#undef public_411392
#undef public_411396
#undef public_411398
#undef public_4113b4
#undef public_4113ee
#undef public_411433
#undef public_411439
