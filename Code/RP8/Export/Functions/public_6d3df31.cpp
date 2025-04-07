#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3d13c);
CLANG_FORWARD_PROC_SYMBOL(public_6d3dde3);

#define public_6d3dfe7 _public_6d3dfe7
#define public_6d3dfec _public_6d3dfec
#define public_6d3e00d _public_6d3e00d

PROC_DECLARE(0x6d3df31, internal_6d3df31, public_6d3df31);
extern "C" NAKED register_t __cdecl internal_6d3df31()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF0
        sub esp, 0x48
        cmp dword ptr ss : [ebp+0x14], 0
        fldz 
        push esi
        mov esi, dword ptr ss : [ebp+8]
        fstp dword ptr ds : [esi+0x38]
        push edi
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
        fld dword ptr ss : [ebp+0xC]
        fst dword ptr ds : [esi]
        fst dword ptr ds : [esi+0x14]
        fstp dword ptr ds : [esi+0x28]
        fld1 
        fstp dword ptr ds : [esi+0x3C]
        je public_6d3dfec
        push dword ptr ss : [ebp+0x14]
        lea eax, ss:[esp+0x14]
        push eax
        call public_6d3dde3
        mov edi, dword ptr ss : [ebp+0x10]
        test edi, edi
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        push esi
        je public_6d3dfe7
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
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [esi+0x34]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [esi+0x38]
        fstp dword ptr ds : [esi+0x38]
        jmp public_6d3dfec
        public_6d3dfe7 : nop
        call public_6d3d13c
        public_6d3dfec : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_6d3e00d
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [esi+0x34]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [esi+0x38]
        fstp dword ptr ds : [esi+0x38]
        public_6d3e00d : nop
        pop edi
        mov eax, esi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d3df31)
    }
}

#undef public_6d3dfe7
#undef public_6d3dfec
#undef public_6d3e00d
