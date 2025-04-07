#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f1f0);

PROC_DECLARE(0x623d7b0, internal_623d7b0, public_623d7b0);
extern "C" NAKED register_t __cdecl internal_623d7b0()
{
    __asm
    {
        sub esp, 0x28
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        fadd st(0), st
        fstp dword ptr ss : [esp+4]
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        mov ecx, 0x5F3759DF
        fadd st(0), st
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        call public_623f1f0
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0xA4]
        mov eax, dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        add eax, 0xC
        mov dword ptr ss : [esp+0x2C], edx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [eax+4]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax+8]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x623d7b0)
    }
}
