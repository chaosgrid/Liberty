#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6350b20);
CLANG_FORWARD_PROC_SYMBOL(public_6351700);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_635178f _public_635178f
#define public_6351791 _public_6351791
#define public_63517c9 _public_63517c9
#define public_63518dd _public_63518dd
#define public_6351a2c _public_6351a2c
#define public_6351a41 _public_6351a41

PROC_DECLARE(0x6351700, internal_6351700, public_6351700);
extern "C" NAKED register_t __cdecl internal_6351700()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx]
        test byte ptr ds : [edi], 0xC0
        jne public_63518dd
        mov eax, dword ptr ds : [edi+0xC]
        cmp dword ptr ds : [eax+0x11C], 5
        je public_63518dd
        fld dword ptr ds : [edi+0x9C]
        lea ebx, ds:[edi+0x94]
        fld dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ebx]
        mov ebp, 1
        fld st(0)
        mov dword ptr ss : [esp+0x10], ecx
        fmul st, st(1)
        mov dword ptr ss : [esp+0x14], ebp
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fmul dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_63a5640]
        fnstsw ax
        test ah, 0x41
        jne public_635178f
        fmul dword ptr ds : [public_63a563c]
        fsqrt 
        call public_6391dae
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fdivr dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x10]
        jmp public_6351791
        public_635178f : nop
        fstp st(0)
        public_6351791 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x50]
        push edx
        push ebx
        mov ecx, esi
        call public_6350aa0
        fld dword ptr ds : [edi+0x18]
        fsub dword ptr ds : [edi+0x1C]
        fmul dword ptr ds : [edi+0x34]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi+0x1C]
        fsub dword ptr ds : [edi+0x14]
        fmul dword ptr ds : [edi+0x38]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ds : [edi+0x18]
        fmul dword ptr ds : [edi+0x3C]
        fstp dword ptr ss : [esp+0x30]
        public_63517c9 : nop
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        cmp ebp, eax
        fmul dword ptr ds : [edi+0x98]
        fmul dword ptr ds : [edi+0x9C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [ebx]
        fmul dword ptr ds : [edi+0x9C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edi+0x98]
        fmul dword ptr ds : [ebx]
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+4]
        fstp dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+8]
        fstp dword ptr ds : [ebx+8]
        jge public_6351a41
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        lea ecx, ss:[esp+0x20]
        call public_6350aa0
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0xC]
        inc ebp
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi]
        fsubp 
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi]
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+4]
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+8], ecx
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+4]
        fsubp 
        fstp dword ptr ds : [esi]
        fstp dword ptr ds : [esi+4]
        jmp public_63517c9
        public_63518dd : nop
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        je public_6351a2c
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        je public_6351a2c
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x74]
        fld dword ptr ds : [edi+eax*4+0x94]
        add edi, 0x94
        mov ecx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [edi+8]
        lea esi, ss:[esp+eax*4+0x18]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [edi+0xC]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x2C], edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [esi], 0
        call public_6350b20
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        fmul dword ptr ds : [public_63a5460]
        mov eax, dword ptr ss : [esp+0x50]
        fsin 
        fst dword ptr ds : [esi]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_63a53d0]
        fsqrt 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        fsubp 
        pop ebx
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ds : [eax+0xC]
        fstp st(0)
        add esp, 0x38
        ret 8
        public_6351a2c : nop
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        push edx
        add edi, 0x94
        push edi
        call public_6350b20
        public_6351a41 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6351700)
    }
}

#undef public_635178f
#undef public_6351791
#undef public_63517c9
#undef public_63518dd
#undef public_6351a2c
#undef public_6351a41
