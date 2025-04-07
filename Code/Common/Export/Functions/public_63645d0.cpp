#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e90);
CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_6352a90);
CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_635bda0);
CLANG_FORWARD_PROC_SYMBOL(public_63645d0);
CLANG_FORWARD_PROC_SYMBOL(public_6364ce0);

#define public_6364607 _public_6364607
#define public_6364745 _public_6364745
#define public_63647cd _public_63647cd
#define public_63647cf _public_63647cf
#define public_63647ef _public_63647ef
#define public_6364820 _public_6364820
#define public_636483e _public_636483e
#define public_636486c _public_636486c

PROC_DECLARE(0x63645d0, internal_63645d0, public_63645d0);
extern "C" NAKED register_t __cdecl internal_63645d0()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        dec eax
        push edi
        mov edi, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+4], eax
        jns public_6364607
        push edi
        push 0
        push 0
        push 3
        call public_6352a90
        test eax, eax
        je public_6364607
        pop edi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6364607 : nop
        mov ebx, dword ptr ss : [esp+0x70]
        push esi
        lea eax, ss:[esp+0x58]
        push eax
        push ebx
        push edi
        call public_635bda0
        mov ecx, dword ptr ss : [esp+0x78]
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        lea edx, ss:[esp+0x48]
        push edx
        add esi, 0x4C
        push esi
        call public_634d860
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x38]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x40], eax
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        call public_6347e90
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x40]
        add eax, 0x60
        mov edx, ecx
        mov dword ptr ds : [eax+8], edx
        fstp dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x74], ecx
        fstp dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [eax+0x50]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x74], 0
        fstp dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ebx+8]
        fld dword ptr ds : [ecx+0x5C]
        fsub dword ptr ds : [eax+0x5C]
        add eax, 0x5C
        fld dword ptr ds : [ecx+0x60]
        add ecx, 0x5C
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp]
        fxch 
        fmul dword ptr ds : [eax+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        mov esi, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ebx]
        and esi, 0xFFFF
        shl esi, 4
        fsub dword ptr ds : [esi+eax]
        add esi, eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [esi+4]
        mov edx, edi
        and edx, 0xC
        mov ebp, dword ptr ds : [edx+public_63ee4f0]
        mov eax, dword ptr ss : [ebp+edi]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x50]
        add ebp, edi
        fsub dword ptr ds : [esi+8]
        shl eax, 1
        sar eax, 0x11
        lea eax, ss:[ebp+eax*4]
        fst dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [esi+8]
        mov ecx, eax
        fld dword ptr ss : [esp+0x28]
        and ecx, 0xC
        fmul dword ptr ds : [esi]
        mov edi, dword ptr ds : [ecx+public_63ee4f0]
        add edi, eax
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+4]
        faddp 
        fstp dword ptr ss : [esp+0x18]
        public_6364745 : nop
        mov ecx, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx]
        and ecx, 0xFFFF
        shl ecx, 4
        fmul dword ptr ds : [ecx+eax]
        add ecx, eax
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fsub dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_63647cf
        fld dword ptr ds : [ecx]
        push ecx
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6347df0
        fmul dword ptr ss : [esp+0x20]
        add esp, 4
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_63647cd
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x74], edi
        jmp public_63647cf
        public_63647cd : nop
        fstp st(0)
        public_63647cf : nop
        cmp edi, ebp
        je public_63647ef
        mov edx, dword ptr ds : [edi]
        shl edx, 1
        sar edx, 0x11
        lea edi, ds:[edi+edx*4]
        mov eax, edi
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4f0]
        add edi, ecx
        jmp public_6364745
        public_63647ef : nop
        mov eax, dword ptr ss : [esp+0x74]
        test eax, eax
        pop esi
        je public_6364820
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x48]
        push ecx
        push eax
        push edx
        call public_635b150
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        je public_636483e
        public_6364820 : nop
        mov ebx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ss : [esp+0x6C]
        pop edi
        mov dword ptr ds : [ebx+0x14], eax
        pop ebp
        mov word ptr ds : [ebx+0x1A], 0
        mov eax, 1
        pop ebx
        add esp, 0x58
        ret 0xC
        public_636483e : nop
        fld dword ptr ss : [esp+0x1C]
        push ebx
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_636486c
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        call public_63645d0
        pop edi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        public_636486c : nop
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x6C]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_6364ce0
        pop edi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x63645d0)
    }
}

#undef public_6364607
#undef public_6364745
#undef public_63647cd
#undef public_63647cf
#undef public_63647ef
#undef public_6364820
#undef public_636483e
#undef public_636486c
