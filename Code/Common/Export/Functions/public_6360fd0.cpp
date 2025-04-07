#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63460c0);
CLANG_FORWARD_PROC_SYMBOL(public_6346100);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6360fd0);

#define public_63610b4 _public_63610b4
#define public_636111e _public_636111e

PROC_DECLARE(0x6360fd0, internal_6360fd0, public_6360fd0);
extern "C" NAKED register_t __cdecl internal_6360fd0()
{
    __asm
    {
        sub esp, 0x38
        mov edx, dword ptr ss : [esp+0x40]
        push ebx
        mov ebx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ebx+0x18]
        push ebp
        mov ebp, dword ptr ds : [ebx+0x98]
        push esi
        push edi
        mov edi, dword ptr ds : [edx+0x98]
        fld dword ptr ds : [edi+0x128]
        lea esi, ss:[ebp+0x124]
        fsub dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ds : [edi+0x12C]
        mov ecx, dword ptr ds : [eax+0xAC]
        fsub dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [edi+0x124]
        mov eax, dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x20], eax
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        call public_6347ef0
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x14]
        fstp dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [ebp+0x60]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_63610b4
        fld dword ptr ss : [ebp+0x20]
        lea edx, ss:[esp+0x28]
        fmul dword ptr ss : [esp+0x4C]
        push edx
        push esi
        fchs 
        mov ecx, ebx
        fld st(0)
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        call public_6346100
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        call public_63460c0
        public_63610b4 : nop
        mov edx, dword ptr ds : [edi+0x60]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_636111e
        fld dword ptr ds : [edi+0x20]
        lea eax, ss:[esp+0x38]
        fmul dword ptr ss : [esp+0x4C]
        push eax
        push esi
        fld st(0)
        mov esi, dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x20]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        call public_6346100
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        call public_63460c0
        public_636111e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6360fd0)
    }
}

#undef public_63610b4
#undef public_636111e
