#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368260);

#define public_63682a3 _public_63682a3
#define public_63682f0 _public_63682f0

PROC_DECLARE(0x6368260, internal_6368260, public_6368260);
extern "C" NAKED register_t __cdecl internal_6368260()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+0xC]
        mov edx, eax
        imul eax, dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        imul edx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        lea edx, ds:[edi+edx*4]
        mov esi, edx
        and esi, 0xFFFFFFF0
        sub edx, esi
        lea eax, ds:[edi+eax*4]
        mov edi, dword ptr ds : [ecx+0x28]
        sar edx, 2
        add edx, edi
        and eax, 0xFFFFFFF0
        test edx, edx
        jle public_63682f0
        add edx, 3
        lea ecx, ds:[esi+8]
        shr edx, 2
        public_63682a3 : nop
        fld dword ptr ss : [esp+0x14]
        add eax, 0x10
        fmul dword ptr ds : [ecx-4]
        add ecx, 0x10
        dec edx
        fadd dword ptr ds : [eax-0xC]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx-0x10]
        fadd dword ptr ds : [eax-8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx-0xC]
        fadd dword ptr ds : [eax-4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx-0x18]
        mov dword ptr ds : [eax-8], esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax-4], esi
        fadd dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0xC]
        jne public_63682a3
        public_63682f0 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6368260)
    }
}

#undef public_63682a3
#undef public_63682f0
