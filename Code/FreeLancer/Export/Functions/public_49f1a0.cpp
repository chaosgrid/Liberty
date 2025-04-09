#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_49f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_49f1a0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

PROC_DECLARE(0x49f1a0, internal_49f1a0, public_49f1a0);
extern "C" NAKED register_t __cdecl internal_49f1a0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        call public_49f0e0
        lea eax, ds:[esi+0x418]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c75e0]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [esi+0x924]
        mov dword ptr ss : [esp+0xC], ecx
        fmul dword ptr ds : [eax]
        xor eax, eax
        mov dword ptr ds : [esi+0x490], eax
        push 6
        fsubr st, st(2)
        fstp dword ptr ds : [esi+0x488]
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ds : [esi+0x928]
        fmul dword ptr ds : [esi+0x41C]
        fsubr st, st(1)
        fstp dword ptr ds : [esi+0x48C]
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [esi+0x488]
        fsub dword ptr ds : [esi+0x46C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x48C]
        mov edx, dword ptr ss : [esp+8]
        fsub dword ptr ds : [esi+0x470]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x490]
        mov ecx, dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [esi+0x474]
        mov dword ptr ds : [esi+0x488], edx
        mov dword ptr ds : [esi+0x48C], ecx
        mov ecx, dword ptr ds : [esi+0x46C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x4A8]
        mov edx, dword ptr ss : [esp+0x10]
        fdiv dword ptr ds : [esi+0x3F8]
        mov dword ptr ds : [esi+0x480], eax
        mov dword ptr ds : [esi+0x490], edx
        mov edx, dword ptr ds : [esi+0x470]
        lea eax, ds:[esi+0x494]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x474]
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [esi+0x478], 1
        mov dword ptr ds : [esi+0x4A4], 2
        mov dword ptr ds : [esi+0x484], 0x3FC00000
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi+0x4A8]
        fmul qword ptr ds : [public_5d3f28]
        fld st(1)
        fsubp 
        fstp dword ptr ds : [esi+0x490]
        fstp dword ptr ds : [esi+0x4A0]
        call public_5645c0
        add esp, 4
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x49f1a0)
    }
}
