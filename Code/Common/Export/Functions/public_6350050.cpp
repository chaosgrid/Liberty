#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350050);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);

PROC_DECLARE(0x6350050, internal_6350050, public_6350050);
extern "C" NAKED register_t __cdecl internal_6350050()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x14]
        and eax, 0xFFD7FFFF
        or eax, 0x140000
        mov dword ptr ds : [edi+0x14], eax
        mov esi, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ecx+0xFC]
        lea ebx, ds:[edi+0x18]
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x14], eax
        push ecx
        lea ecx, ds:[esi+0x64]
        fadd dword ptr ss : [esp+0x18]
        lea ebp, ds:[edi+0x34]
        fsub dword ptr ds : [esi+0x48]
        fst dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x4C]
        fadd dword ptr ds : [esi+0x54]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        push ebx
        call public_6362f90
        mov dword ptr ds : [ebx+4], eax
        fld dword ptr ds : [esi+0x4C]
        fsub dword ptr ds : [esi+0x50]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x54]
        fsub dword ptr ds : [esi+0x58]
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ecx+0xFC]
        faddp 
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x20]
        push ecx
        fld dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0x64]
        fsub dword ptr ds : [esi+0x44]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x48]
        fst dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x4C]
        fadd dword ptr ds : [esi+0x54]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        push ebp
        call public_6362f90
        mov dword ptr ss : [ebp+4], eax
        fld dword ptr ds : [esi+0x4C]
        fsub dword ptr ds : [esi+0x50]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x54]
        fsub dword ptr ds : [esi+0x58]
        faddp 
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [edi+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6350050)
    }
}
