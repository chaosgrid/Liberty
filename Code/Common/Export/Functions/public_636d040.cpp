#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6348470);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_636d040);

#define public_636d0b9 _public_636d0b9
#define public_636d0de _public_636d0de
#define public_636d0e6 _public_636d0e6
#define public_636d0ee _public_636d0ee
#define public_636d10e _public_636d10e
#define public_636d1f8 _public_636d1f8
#define public_636d255 _public_636d255
#define public_636d321 _public_636d321

PROC_DECLARE(0x636d040, internal_636d040, public_636d040);
extern "C" NAKED register_t __cdecl internal_636d040()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x64
        push ebx
        mov ebx, dword ptr ss : [esp+0x6C]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edi, ds:[eax+4]
        push ebx
        push edi
        call public_635b940
        add esp, 0xC
        lea ecx, ss:[esp+0x64]
        call public_6347ef0
        mov edx, dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+edx*4+0x64]
        mov eax, dword ptr ss : [esp+0x84]
        lea ecx, ss:[esp+edx*4+0x64]
        lea edx, ss:[esp+eax*4+0x64]
        fabs 
        fld dword ptr ds : [edx]
        fabs 
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        je public_636d0b9
        fstp st(0)
        mov dword ptr ss : [esp+0x2C], 0
        fld dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x78], 0
        fmul dword ptr ds : [public_63a5460]
        fdiv dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_636d0ee
        public_636d0b9 : nop
        fcomp dword ptr ds : [public_63a5610]
        mov dword ptr ss : [esp+0x2C], 1
        fnstsw ax
        test ah, 0x41
        jne public_636d0de
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [public_63a56f0]
        fdiv dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x78]
        jmp public_636d0e6
        public_636d0de : nop
        mov dword ptr ss : [esp+0x78], 0
        public_636d0e6 : nop
        mov dword ptr ss : [esp+0x1C], 0
        public_636d0ee : nop
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x30], 3
        public_636d10e : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, edi
        and ecx, 0xC
        mov edx, dword ptr ds : [ecx+public_63ee4e0]
        mov esi, dword ptr ds : [edx+edi]
        mov edx, dword ptr ds : [edi]
        and edx, 0xFFFF
        shl edx, 4
        and esi, 0xFFFF
        lea ecx, ss:[esp+0x44]
        add edx, eax
        shl esi, 4
        push ecx
        mov ecx, dword ptr ss : [ebp]
        add edx, ebx
        add esi, eax
        push edx
        add esi, ebx
        call public_6348470
        mov ecx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x54]
        push eax
        push esi
        call public_6348470
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x80]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+esi*4+0x34]
        fabs 
        fstp dword ptr ss : [esp+0x7C]
        call public_6347e60
        fmul dword ptr ds : [public_63a5610]
        fcomp dword ptr ss : [esp+0x7C]
        fnstsw ax
        test ah, 0x41
        je public_636d321
        mov eax, dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+eax*4+0x34]
        fdiv dword ptr ss : [esp+esi*4+0x34]
        fst dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+esi*4+0x44]
        fsubr dword ptr ss : [esp+eax*4+0x44]
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        fstp dword ptr ss : [esp+0x10]
        je public_636d1f8
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x78]
        fadd st(0), st
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x78]
        jmp public_636d255
        public_636d1f8 : nop
        mov eax, dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+eax*4+0x34]
        fdiv dword ptr ss : [esp+esi*4+0x34]
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+esi*4+0x44]
        fsubr dword ptr ss : [esp+eax*4+0x44]
        fst dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x1C]
        fadd st(0), st
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x7C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x14]
        public_636d255 : nop
        fld dword ptr ss : [esp+esi*4+0x44]
        fld dword ptr ss : [esp+esi*4+0x54]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x7C]
        fld st(0)
        fsub dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [public_63a5460]
        fstp dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fsub dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63a58f4]
        fstp dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fsub dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63a5674]
        fstp dword ptr ss : [esp+0x10]
        fld st(1)
        fsub st, st(3)
        fmul st, st(6)
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(5)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul st, st(6)
        faddp 
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(4)
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(6)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul st, st(7)
        faddp 
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(3)
        fsubp 
        fmul dword ptr ds : [public_63a5748]
        fmul st, st(3)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(5)
        faddp 
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(6)
        faddp 
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_636d321 : nop
        mov eax, dword ptr ss : [esp+0x30]
        add edi, 4
        dec eax
        mov dword ptr ss : [esp+0x30], eax
        jne public_636d10e
        fld dword ptr ss : [esp+0x20]
        pop edi
        fadd dword ptr ss : [ebp+4]
        pop esi
        fstp dword ptr ss : [ebp+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [ebp+8]
        fstp dword ptr ss : [ebp+8]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [ebp+0xC]
        pop ebp
        pop ebx
        add esp, 0x64
        ret 0x14
        UNREACHABLE_TRAP(0x636d040)
    }
}

#undef public_636d0b9
#undef public_636d0de
#undef public_636d0e6
#undef public_636d0ee
#undef public_636d10e
#undef public_636d1f8
#undef public_636d255
#undef public_636d321
