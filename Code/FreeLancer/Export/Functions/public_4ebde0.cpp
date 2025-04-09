#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ebde0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2940);

PROC_DECLARE(0x4ebde0, internal_4ebde0, public_4ebde0);
extern "C" NAKED register_t __cdecl internal_4ebde0()
{
    __asm
    {
        sub esp, 0x48
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax+0x20]
        add eax, 4
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp], edx
        fld dword ptr ss : [esp]
        fst dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+4], ecx
        fld dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0x18], eax
        push ebp
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x24], edx
        fadd dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x20], ecx
        push esi
        push edi
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fld st(1)
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x38], edx
        fchs 
        mov dword ptr ss : [esp+0x34], ecx
        fld st(0)
        fxch st(4)
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fxch st(3)
        mov dword ptr ss : [esp+0x3C], eax
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fld st(1)
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fxch st(2)
        mov dword ptr ss : [esp+0x44], edx
        fadd dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x40], ecx
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fxch 
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        movzx edi, byte ptr ds : [ecx+1]
        movzx ebp, byte ptr ds : [ecx+2]
        mov dword ptr ss : [esp+0x50], edx
        xor edx, edx
        mov dh, byte ptr ds : [ecx+3]
        mov dword ptr ss : [esp+0x48], eax
        movzx eax, byte ptr ds : [ecx]
        or edx, eax
        shl edx, 8
        or edx, edi
        shl edx, 8
        shl eax, 8
        or eax, edi
        shl eax, 8
        or eax, ebp
        push 0x40000000
        mov edi, eax
        or edx, ebp
        push edi
        mov esi, edx
        push esi
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_5a2940
        push 0x40000000
        push edi
        push esi
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_5a2940
        push 0x40000000
        push edi
        push esi
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        call public_5a2940
        push 0x40000000
        push edi
        push esi
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x94]
        push ecx
        call public_5a2940
        add esp, 0x50
        pop edi
        pop esi
        pop ebp
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x4ebde0)
    }
}
