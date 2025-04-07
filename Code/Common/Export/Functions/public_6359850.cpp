#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6359850);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);

#define public_63598dc _public_63598dc

PROC_DECLARE(0x6359850, internal_6359850, public_6359850);
extern "C" NAKED register_t __cdecl internal_6359850()
{
    __asm
    {
        sub esp, 0x40
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ds : [eax+4]
        push ebx
        fld dword ptr ds : [eax]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x60], ecx
        fstp dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x20]
        push ecx
        fstp dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x28], edx
        mov ecx, dword ptr ds : [edi+8]
        push eax
        call public_634d860
        mov eax, dword ptr ss : [ebp+0x60]
        cmp al, 1
        mov ebx, dword ptr ss : [esp+0x58]
        jne public_63598dc
        and eax, 0xFFFFFF00
        mov dword ptr ss : [ebp+0x60], eax
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push ebx
        push ecx
        call public_635b210
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        or edx, eax
        or edx, ecx
        add esp, 0x10
        test edx, 0x80000000
        je public_63598dc
        mov eax, dword ptr ds : [esi+0x54]
        and eax, 0xFFFFFDFF
        or eax, 0x100
        mov dword ptr ds : [esi+0x54], eax
        public_63598dc : nop
        mov edx, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        push ebx
        call public_635b940
        fld dword ptr ss : [ebp+0x4C]
        fld dword ptr ss : [esp+0x20]
        add esp, 0xC
        fmul st, st(1)
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        fmul st, st(2)
        lea edx, ss:[esp+0x14]
        push edx
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x68]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x20], eax
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        call public_634d9d0
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx]
        fmul dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x14]
        and eax, 0xFFFF
        fmul dword ptr ss : [esp+0x24]
        shl eax, 4
        add eax, edx
        mov ecx, ebx
        faddp 
        and ecx, 0xC
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+public_63ee4e0]
        fmul dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+ebx]
        and ecx, 0xFFFF
        shl ecx, 4
        faddp 
        add ecx, edx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax]
        faddp 
        fsubp 
        fstp dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [edi+8]
        add esi, 0x78
        push esi
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ss : [esp+0x50], edx
        call public_634d9d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0x14
        UNREACHABLE_TRAP(0x6359850)
    }
}

#undef public_63598dc
