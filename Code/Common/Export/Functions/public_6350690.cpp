#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350690);

#define public_63506a6 _public_63506a6
#define public_635072b _public_635072b
#define public_6350735 _public_6350735

PROC_DECLARE(0x6350690, internal_6350690, public_6350690);
extern "C" NAKED register_t __cdecl internal_6350690()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x38]
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        push edi
        lea edi, ss:[ebp+1]
        public_63506a6 : nop
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x38], eax
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x18]
        fsubr dword ptr ds : [ebx]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x3C]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        jne public_6350735
        mov eax, dword ptr ss : [esp+0x44]
        cmp ebp, eax
        jge public_635072b
        cmp dword ptr ds : [esi], 0
        je public_635072b
        mov ecx, dword ptr ss : [esp+0x3C]
        push eax
        push edi
        push ecx
        lea edx, ds:[esi+0x1C]
        push ebx
        push edx
        call public_6350690
        mov eax, dword ptr ds : [esi]
        add esp, 0x14
        inc ebp
        inc edi
        add esi, eax
        jmp public_63506a6
        public_635072b : nop
        mov dword ptr ds : [public_658ab48], 1
        public_6350735 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6350690)
    }
}

#undef public_63506a6
#undef public_635072b
#undef public_6350735
