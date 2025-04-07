#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71af0);

#define public_6f71a41 _public_6f71a41
#define public_6f71a9c _public_6f71a9c
#define public_6f71aaf _public_6f71aaf
#define public_6f71add _public_6f71add

PROC_DECLARE(0x6f719b0, internal_6f719b0, public_6f719b0);
extern "C" NAKED register_t __cdecl internal_6f719b0()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+8]
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x10]
        call public_6f71af0
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x1C]
        call public_6f71af0
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x30]
        call public_6f71af0
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x58]
        add ecx, edx
        cmp ecx, 4
        jge public_6f71a9c
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [esp+0x54]
        lea edx, ds:[eax+edx*4]
        cmp eax, edx
        jae public_6f71add
        mov ecx, dword ptr ss : [esp+0x4C]
        public_6f71a41 : nop
        fld dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fld st(2)
        fmul dword ptr ds : [esi+4]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        faddp 
        fld st(3)
        fmul dword ptr ds : [esi]
        faddp 
        fstp dword ptr ds : [ecx-0xC]
        fld st(0)
        fmul dword ptr ds : [esi+0x14]
        fld st(2)
        fmul dword ptr ds : [esi+0x10]
        faddp 
        fld st(3)
        fmul dword ptr ds : [esi+0xC]
        faddp 
        fstp dword ptr ds : [ecx-8]
        fmul dword ptr ds : [esi+0x20]
        fxch 
        fmul dword ptr ds : [esi+0x1C]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0x18]
        faddp 
        fstp dword ptr ds : [ecx-4]
        jb public_6f71a41
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x3C
        ret 0x14
        public_6f71a9c : nop
        mov esi, dword ptr ss : [esp+0x54]
        lea eax, ds:[eax+eax*2]
        lea ebx, ds:[esi+eax*4]
        cmp esi, ebx
        jae public_6f71add
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        public_6f71aaf : nop
        push esi
        lea ecx, ss:[esp+0x10]
        call dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [edi]
        push esi
        lea ecx, ss:[esp+0x24]
        call dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [edi+4]
        push esi
        lea ecx, ss:[esp+0x38]
        call dword ptr ss : [esp+0x44]
        fstp dword ptr ds : [edi+8]
        add esi, 0xC
        add edi, 0xC
        cmp esi, ebx
        jb public_6f71aaf
        pop edi
        public_6f71add : nop
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x3C
        ret 0x14
        UNREACHABLE_TRAP(0x6f719b0)
    }
}

#undef public_6f71a41
#undef public_6f71a9c
#undef public_6f71aaf
#undef public_6f71add
