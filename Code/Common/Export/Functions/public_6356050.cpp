#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355d20);
CLANG_FORWARD_PROC_SYMBOL(public_6356050);

#define public_6356117 _public_6356117

PROC_DECLARE(0x6356050, internal_6356050, public_6356050);
extern "C" NAKED register_t __cdecl internal_6356050()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        fmul dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [esi+0x54]
        mov edx, dword ptr ds : [esi+0x44]
        push ecx
        mov ecx, dword ptr ds : [esi+0x50]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6355d20
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x40]
        fmul dword ptr ds : [esi+0x5C]
        mov edx, dword ptr ds : [esi+0x30]
        push ecx
        mov ecx, dword ptr ds : [esi+0x3C]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6355d20
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x60]
        test byte ptr ds : [eax], 0xC
        jne public_6356117
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x3C]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fadd dword ptr ds : [eax+0x88]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fadd dword ptr ds : [eax+0x8C]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x8C], ecx
        fadd dword ptr ds : [eax+0x84]
        fstp dword ptr ds : [eax+0x84]
        fstp dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [esi+0x60]
        fld dword ptr ss : [esp+4]
        add eax, 0x74
        fmul dword ptr ds : [esi+0x50]
        fld st(0)
        fmul dword ptr ds : [esi+0x14]
        fadd dword ptr ds : [eax+4]
        fld st(1)
        fmul dword ptr ds : [esi+0x18]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], edx
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        public_6356117 : nop
        fld dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x64]
        fmul dword ptr ds : [public_63a5498]
        add eax, 0x84
        fst dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [public_63a5498]
        fst dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [public_63a5498]
        fst dword ptr ss : [esp+8]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x40]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x64]
        fld dword ptr ss : [esp+4]
        add eax, 0x74
        fmul dword ptr ds : [esi+0x54]
        fld st(0)
        fmul dword ptr ds : [esi+0x24]
        fadd dword ptr ds : [eax+4]
        fld st(1)
        fmul dword ptr ds : [esi+0x28]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+8], edx
        pop esi
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6356050)
    }
}

#undef public_6356117
