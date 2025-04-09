#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d9c0);

#define public_41da12 _public_41da12

PROC_DECLARE(0x41d9c0, internal_41d9c0, public_41d9c0);
extern "C" NAKED register_t __cdecl internal_41d9c0()
{
    __asm
    {
        sub esp, 8
        fild dword ptr ds : [public_610850]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        fmul dword ptr ds : [public_5c8d30]
        fstp dword ptr ss : [esp+8]
        jne public_41da12
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ds:[esi+4]
        push ecx
        push 0x401
/*FIXUP push offset public_5c952c @0x41d9ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c952c
        mov eax, 0x100002
/*FIXUP push offset public_5c9500 @0x41d9f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9500
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x24]
        add esp, 0x14
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        add esp, 8
        ret 0xC
        public_41da12 : nop
        fild dword ptr ds : [eax+0x18]
        fild dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x58]
        fsin 
        fmul dword ptr ds : [esi+0x54]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x58]
        fcos 
        fmul dword ptr ds : [esi+0x54]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x44]
        fsubp 
        fld st(1)
        fmul dword ptr ds : [esi+0x48]
        faddp 
        fstp dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x18]
        fld st(1)
        fmul dword ptr ds : [esi+0x44]
        fsubp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x48]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+4], ecx
        fld dword ptr ss : [esp+4]
        fmul st, st(3)
        fadd dword ptr ss : [esp+8]
        fst dword ptr ds : [eax+8]
        fld st(1)
        fmul st, st(4)
        fst dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+0xC]
        fxch 
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+0x14]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x18]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x24]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x41d9c0)
    }
}

#undef public_41da12
