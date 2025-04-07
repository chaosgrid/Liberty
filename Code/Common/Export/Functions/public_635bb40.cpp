#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_635ba10);
CLANG_FORWARD_PROC_SYMBOL(public_635bb40);

#define public_635bc07 _public_635bc07
#define public_635bc17 _public_635bc17
#define public_635bc71 _public_635bc71
#define public_635bc8d _public_635bc8d
#define public_635bc9e _public_635bc9e
#define public_635bca0 _public_635bca0

PROC_DECLARE(0x635bb40, internal_635bb40, public_635bb40);
extern "C" NAKED register_t __cdecl internal_635bb40()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        lea ebp, ds:[ebx+4]
        push ebp
        push edi
        call public_635b210
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x30]
        or ecx, eax
        or ecx, edx
        add esp, 0x10
        test ecx, 0x80000000
        jne public_635bc07
        mov ebx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi]
        and ebx, 0xFFFF
        shl ebx, 4
        add ebx, edx
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        push ebp
        add ebx, edi
        call public_635b940
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+4]
        add esp, 0xC
        fld dword ptr ss : [esp+0x18]
        pop edi
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi]
        pop esi
        pop ebp
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ebx+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ebx]
        pop ebx
        faddp 
        fsubp 
        fld dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fdivr dword ptr ds : [public_63a53d0]
        fmul st, st(3)
        fmulp st(3), st
        fstp st(0)
        fstp st(0)
        add esp, 0x20
        ret 
        public_635bc07 : nop
        mov dword ptr ss : [esp+0x38], 0x60AD78EC
        add ebx, 0xC
        mov ebp, 3
        public_635bc17 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        push ebx
        push edi
        call public_635b150
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x10
        fnstsw ax
        test ah, 1
        je public_635bc71
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        fsub dword ptr ds : [eax+edi]
        add eax, edi
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        jmp public_635bc8d
        public_635bc71 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_635bca0
        push esi
        push ebx
        push edi
        call public_635ba10
        add esp, 0xC
        public_635bc8d : nop
        fcom dword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 1
        je public_635bc9e
        fstp dword ptr ss : [esp+0x38]
        jmp public_635bca0
        public_635bc9e : nop
        fstp st(0)
        public_635bca0 : nop
        sub ebx, 4
        dec ebp
        jne public_635bc17
        fld dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x635bb40)
    }
}

#undef public_635bc07
#undef public_635bc17
#undef public_635bc71
#undef public_635bc8d
#undef public_635bc9e
#undef public_635bca0
