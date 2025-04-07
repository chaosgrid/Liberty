#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e90);
CLANG_FORWARD_PROC_SYMBOL(public_6353b50);
CLANG_FORWARD_PROC_SYMBOL(public_6353e80);

#define public_6353f05 _public_6353f05

PROC_DECLARE(0x6353e80, internal_6353e80, public_6353e80);
extern "C" NAKED register_t __cdecl internal_6353e80()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x40]
        fld dword ptr ds : [edi+0x38]
        fld st(0)
        fmul dword ptr ds : [eax+0x7C]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+0x80]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+0x78]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov ecx, esi
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [edi+0x3C]
        fld st(0)
        fmul dword ptr ds : [eax+0x8C]
        fadd dword ptr ss : [esp+8]
        fld st(1)
        fmul dword ptr ds : [eax+0x90]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [eax+0x88]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], eax
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fstp dword ptr ds : [esi+4]
        call public_6347e90
        cmp byte ptr ds : [edi+0x34], 1
        jne public_6353f05
        push esi
        fstp st(0)
        mov ecx, edi
        call public_6353b50
        public_6353f05 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6353e80)
    }
}

#undef public_6353f05
