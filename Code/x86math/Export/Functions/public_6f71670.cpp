#include "x86math-PCH.h"


#define public_6f7168a _public_6f7168a

PROC_DECLARE(0x6f71670, internal_6f71670, public_6f71670);
extern "C" NAKED register_t __cdecl internal_6f71670()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, edx
        sub esi, edi
        lea eax, ds:[edi+4]
        mov edi, 3
        public_6f7168a : nop
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax]
        add eax, 0xC
        add edx, 0xC
        dec edi
        faddp 
        fld dword ptr ds : [eax-0x10]
        fmul dword ptr ds : [ecx]
        faddp 
        fstp dword ptr ds : [edx-0xC]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax-0x10]
        fld dword ptr ds : [eax-8]
        fmul dword ptr ds : [ecx+0x1C]
        faddp 
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [esi+eax-0xC]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax-0x10]
        fld dword ptr ds : [eax-8]
        fmul dword ptr ds : [ecx+0x20]
        faddp 
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [edx-4]
        jne public_6f7168a
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6f71670)
    }
}

#undef public_6f7168a
