#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63327f0);
CLANG_FORWARD_PROC_SYMBOL(public_6332df0);

#define public_6332e40 _public_6332e40
#define public_6332ea0 _public_6332ea0

PROC_DECLARE(0x6332df0, internal_6332df0, public_6332df0);
extern "C" NAKED register_t __cdecl internal_6332df0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov ecx, eax
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], eax
        call public_63327f0
        fld dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        lea esp, ss:[esp]
        public_6332e40 : nop
        fld dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0xC]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        mov ecx, edi
        call public_63327f0
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+8]
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
        fcom dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        je public_6332ea0
        mov edx, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], edx
        jmp public_6332e40
        public_6332ea0 : nop
        pop edi
        fstp st(0)
        fld dword ptr ss : [esp+4]
        pop esi
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6332df0)
    }
}

#undef public_6332e40
#undef public_6332ea0
