#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be40);
CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_63658f0);
CLANG_FORWARD_PROC_SYMBOL(public_6365ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6365d10);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

#define public_6365ccb _public_6365ccb

PROC_DECLARE(0x63658f0, internal_63658f0, public_63658f0);
extern "C" NAKED register_t __cdecl internal_63658f0()
{
    __asm
    {
        sub esp, 0x2C
        mov eax, dword ptr ss : [esp+0x34]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [esi]
        push edi
        lea edi, ds:[eax+0xF4]
        mov dword ptr ds : [esi+0x6C], edi
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax+0x124]
        mov ebx, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+0x128]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ecx+8]
        lea ecx, ds:[eax+0x34]
        fsub dword ptr ds : [eax+0x12C]
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx+4]
        fsubp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx+8]
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [edi+0x18]
        fsubp 
        fld dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [edi+0x28]
        fld dword ptr ds : [edi+0x24]
        mov dword ptr ss : [esp+0x40], edx
        fld dword ptr ds : [edi+0x20]
        fmul st, st(4)
        fld dword ptr ds : [edi]
        fmul st, st(7)
        faddp 
        fld dword ptr ds : [edi+0x10]
        fmul st, st(6)
        faddp 
        fstp dword ptr ds : [ebx]
        fld st(3)
        fmul st, st(1)
        fld st(5)
        fmul st, st(3)
        faddp 
        fxch st(3)
        fmul st, st(6)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ebx+0xC], 0x3F800000
        fxch 
        mov edx, dword ptr ss : [esp+0x44]
        fstp st(0)
        mov dword ptr ds : [ebx+4], edx
        fstp st(0)
        mov ebp, dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x40]
        fxch 
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        faddp 
        fstp st(1)
        fst dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ebx]
        fmul dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+4], edx
        lea edx, ds:[eax+0x94]
        add eax, 0xA4
        fstp dword ptr ss : [ebp]
        fld st(1)
        mov dword ptr ss : [esp+0x40], edx
        fstp dword ptr ss : [ebp+8]
        fst dword ptr ss : [ebp+0xC]
        fxch 
        fmul dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x44], eax
        fmul dword ptr ds : [ebx+4]
        faddp 
        fld dword ptr ds : [ebx]
        fmul dword ptr ss : [ebp]
        faddp 
        fxch 
        fmul dword ptr ds : [ebx+0xC]
        faddp 
        fadd dword ptr ds : [esi+0xD4]
        fstp dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        faddp 
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [ebx+8]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [ebx+4]
        faddp 
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [ebx]
        faddp 
        faddp 
        fmul dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [esi+0x104]
        fstp dword ptr ds : [esi+0x104]
        test eax, eax
        je public_6365ccb
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi+8]
        fmul dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [edi+0x18]
        fmul dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [edi+0x28]
        fsubp 
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x48], edx
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax]
        lea eax, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x10], eax
        fsubp 
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi+0x14]
        fld dword ptr ds : [edi+0x24]
        fld dword ptr ds : [edi+0x20]
        fmul st, st(4)
        fld dword ptr ds : [edi]
        fmul st, st(7)
        faddp 
        fld dword ptr ds : [edi+0x10]
        fmul st, st(6)
        faddp 
        fstp dword ptr ds : [eax]
        fld st(3)
        fmul st, st(1)
        fld st(5)
        fmul st, st(3)
        faddp 
        fxch st(3)
        fmul st, st(6)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr ds : [eax+4]
        fxch 
        fstp st(0)
        fstp st(0)
        fmul dword ptr ss : [esp+0x48]
        fxch 
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x1C], 0x3F800000
        fstp st(0)
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [ebp+0x1C], edx
        mov dword ptr ss : [ebp+0x18], ecx
        fstp dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [ebp+0x14]
        fld dword ptr ss : [ebp+0x1C]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp+0x18]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [ebp+0x14]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ss : [ebp+0x10]
        faddp 
        fadd dword ptr ds : [esi+0xE8]
        fstp dword ptr ds : [esi+0xE8]
        fld dword ptr ss : [ebp+0x18]
        fmul dword ptr ds : [ebx+8]
        fld dword ptr ss : [ebp+0x14]
        fmul dword ptr ds : [ebx+4]
        faddp 
        fld dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [ebx]
        faddp 
        fadd dword ptr ds : [esi+0xD8]
        fstp dword ptr ds : [esi+0xD8]
        fld dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+4]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        fmul dword ptr ds : [ecx]
        faddp 
        faddp 
        fmul dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [esi+0x108]
        fstp dword ptr ds : [esi+0x108]
        je public_6365ccb
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_628bed0
        lea eax, ds:[ebx+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, edi
        call public_6366010
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        add ebp, 0x20
        lea edi, ds:[ebx+0x20]
        push edi
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x2C], 0x3F800000
        call public_6365d10
        mov eax, dword ptr ds : [esi+0xFC]
        push edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], eax
        call public_6365ce0
        fadd dword ptr ss : [esp+0x48]
        push ebx
        fstp dword ptr ds : [esi+0xFC]
        mov ecx, dword ptr ds : [esi+0xDC]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, ebp
        call public_628be40
        fadd dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        fstp dword ptr ds : [esi+0xDC]
        mov edx, dword ptr ds : [esi+0xEC]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], edx
        call public_628be40
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ds : [esi+0xEC]
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        call public_628be40
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        push edi
        call public_628be40
        fadd dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [esi+0x10C]
        fstp dword ptr ds : [esi+0x10C]
        public_6365ccb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 0x14
        UNREACHABLE_TRAP(0x63658f0)
    }
}

#undef public_6365ccb
