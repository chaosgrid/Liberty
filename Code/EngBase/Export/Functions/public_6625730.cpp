#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_6625765 _public_6625765

PROC_DECLARE(0x6625730, internal_6625730, public_6625730);
extern "C" NAKED register_t __cdecl internal_6625730()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0x24
        mov ecx, 9
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        push edi
        lea esi, ds:[ebx+0x1C]
        mov edi, edx
        lea ebp, ds:[edx+0x24]
        rep movsd
        mov eax, dword ptr ds : [public_662b1b0]
        test eax, eax
        jne public_6625765
        call public_6628190
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [public_662b1b0], eax
        public_6625765 : nop
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[ebx+0x10]
        push esi
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        fld dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [ebx+0x40]
        fld st(1)
        fmul dword ptr ds : [ebx+0x44]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ds : [ebx+0x48]
        fstp dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+0xC]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], ecx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [ebp+4], edx
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6625730)
    }
}

#undef public_6625765
