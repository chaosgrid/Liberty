#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3d13c);
CLANG_FORWARD_PROC_SYMBOL(public_6d3d385);
CLANG_FORWARD_PROC_SYMBOL(public_6d3dde3);

#define public_6d3f43c _public_6d3f43c
#define public_6d3f462 _public_6d3f462
#define public_6d3f4b6 _public_6d3f4b6
#define public_6d3f506 _public_6d3f506
#define public_6d3f562 _public_6d3f562
#define public_6d3f567 _public_6d3f567
#define public_6d3f588 _public_6d3f588

PROC_DECLARE(0x6d3f2de, internal_6d3f2de, public_6d3f2de);
extern "C" NAKED register_t __cdecl internal_6d3f2de()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF0
        sub esp, 0xC8
        mov eax, dword ptr ss : [ebp+0x14]
        fldz 
        test eax, eax
        push esi
        push edi
        je public_6d3f4b6
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d3f462
        fstp dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        fldz 
        push dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x14], ecx
        fldz 
        mov ecx, dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax+8]
        fldz 
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x54]
        fstp dword ptr ss : [esp+0x40]
        push eax
        fldz 
        mov dword ptr ss : [esp+0x2C], ecx
        fstp dword ptr ss : [esp+0x3C]
        fldz 
        fstp dword ptr ss : [esp+0x38]
        fldz 
        fstp dword ptr ss : [esp+0x34]
        fldz 
        fstp dword ptr ss : [esp+0x30]
        fldz 
        fstp dword ptr ss : [esp+0x28]
        fldz 
        fstp dword ptr ss : [esp+0x24]
        fldz 
        fstp dword ptr ss : [esp+0x20]
        fldz 
        fstp dword ptr ss : [esp+0x1C]
        fld1 
        fstp dword ptr ss : [esp+0x54]
        call public_6d3dde3
        mov edi, dword ptr ss : [ebp+0xC]
        test edi, edi
        lea eax, ss:[esp+0x50]
        push eax
        je public_6d3f43c
        lea eax, ss:[esp+0x94]
        push eax
        call public_6d3d385
        fldz 
        mov esi, dword ptr ss : [ebp+8]
        fstp dword ptr ds : [esi+0x38]
        fldz 
        lea eax, ss:[esp+0x90]
        fstp dword ptr ds : [esi+0x34]
        push eax
        fldz 
        push esi
        push esi
        fstp dword ptr ds : [esi+0x30]
        fldz 
        fstp dword ptr ds : [esi+0x2C]
        fldz 
        fstp dword ptr ds : [esi+0x24]
        fldz 
        fstp dword ptr ds : [esi+0x20]
        fldz 
        fstp dword ptr ds : [esi+0x1C]
        fldz 
        fstp dword ptr ds : [esi+0x18]
        fldz 
        fstp dword ptr ds : [esi+0x10]
        fldz 
        fstp dword ptr ds : [esi+0xC]
        fldz 
        fstp dword ptr ds : [esi+8]
        fldz 
        fstp dword ptr ds : [esi+4]
        fld1 
        fstp dword ptr ds : [esi+0x3C]
        fld1 
        fstp dword ptr ds : [esi+0x28]
        fld1 
        fstp dword ptr ds : [esi+0x14]
        fld1 
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [edi]
        fchs 
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [edi+4]
        fchs 
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [edi+8]
        fchs 
        fstp dword ptr ds : [esi+0x38]
        call public_6d3d13c
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        push esi
        call public_6d3d13c
        lea eax, ss:[esp+0x50]
        push eax
        push esi
        push esi
        call public_6d3d13c
        fld dword ptr ds : [esi+0x30]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [esi+0x34]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [esi+0x38]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+0x38]
        jmp public_6d3f506
        public_6d3f43c : nop
        mov esi, dword ptr ss : [ebp+8]
        push esi
        call public_6d3d385
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        push esi
        call public_6d3d13c
        lea eax, ss:[esp+0x50]
        push eax
        push esi
        push esi
        call public_6d3d13c
        jmp public_6d3f506
        public_6d3f462 : nop
        mov esi, dword ptr ss : [ebp+8]
        fstp dword ptr ds : [esi+0x38]
        fldz 
        fstp dword ptr ds : [esi+0x34]
        fldz 
        fstp dword ptr ds : [esi+0x30]
        fldz 
        fstp dword ptr ds : [esi+0x2C]
        fldz 
        fstp dword ptr ds : [esi+0x24]
        fldz 
        fstp dword ptr ds : [esi+0x20]
        fldz 
        fstp dword ptr ds : [esi+0x1C]
        fldz 
        fstp dword ptr ds : [esi+0x18]
        fldz 
        fstp dword ptr ds : [esi+0x10]
        fldz 
        fstp dword ptr ds : [esi+0xC]
        fldz 
        fstp dword ptr ds : [esi+8]
        fldz 
        fstp dword ptr ds : [esi+4]
        fld1 
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x14], ecx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [esi+0x28], eax
        jmp public_6d3f506
        public_6d3f4b6 : nop
        mov esi, dword ptr ss : [ebp+8]
        fstp dword ptr ds : [esi+0x38]
        fldz 
        fstp dword ptr ds : [esi+0x34]
        fldz 
        fstp dword ptr ds : [esi+0x30]
        fldz 
        fstp dword ptr ds : [esi+0x2C]
        fldz 
        fstp dword ptr ds : [esi+0x24]
        fldz 
        fstp dword ptr ds : [esi+0x20]
        fldz 
        fstp dword ptr ds : [esi+0x1C]
        fldz 
        fstp dword ptr ds : [esi+0x18]
        fldz 
        fstp dword ptr ds : [esi+0x10]
        fldz 
        fstp dword ptr ds : [esi+0xC]
        fldz 
        fstp dword ptr ds : [esi+8]
        fldz 
        fstp dword ptr ds : [esi+4]
        fld1 
        fstp dword ptr ds : [esi+0x3C]
        fld1 
        fstp dword ptr ds : [esi+0x28]
        fld1 
        fstp dword ptr ds : [esi+0x14]
        fld1 
        fstp dword ptr ds : [esi]
        public_6d3f506 : nop
        cmp dword ptr ss : [ebp+0x1C], 0
        je public_6d3f567
        push dword ptr ss : [ebp+0x1C]
        lea eax, ss:[esp+0x54]
        push eax
        call public_6d3dde3
        mov edi, dword ptr ss : [ebp+0x18]
        test edi, edi
        lea eax, ss:[esp+0x50]
        push eax
        push esi
        push esi
        je public_6d3f562
        fld dword ptr ds : [esi+0x30]
        fsub dword ptr ds : [edi]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [esi+0x34]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [esi+0x38]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+0x38]
        call public_6d3d13c
        fld dword ptr ds : [esi+0x30]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [esi+0x34]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [esi+0x38]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+0x38]
        jmp public_6d3f567
        public_6d3f562 : nop
        call public_6d3d13c
        public_6d3f567 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        je public_6d3f588
        fld dword ptr ds : [esi+0x30]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [esi+0x34]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [esi+0x38]
        fstp dword ptr ds : [esi+0x38]
        public_6d3f588 : nop
        pop edi
        mov eax, esi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x1C
        UNREACHABLE_TRAP(0x6d3f2de)
    }
}

#undef public_6d3f43c
#undef public_6d3f462
#undef public_6d3f4b6
#undef public_6d3f506
#undef public_6d3f562
#undef public_6d3f567
#undef public_6d3f588
