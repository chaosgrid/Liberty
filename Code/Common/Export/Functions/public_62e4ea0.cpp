#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4ea0);

#define public_62e4ec3 _public_62e4ec3
#define public_62e4f12 _public_62e4f12

PROC_DECLARE(0x62e4ea0, internal_62e4ea0, public_62e4ea0);
extern "C" NAKED register_t __cdecl internal_62e4ea0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e4ec3
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e4ec3 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [ecx]
        lea eax, ds:[esi+0xC]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        mov cl, byte ptr ds : [esi+0x7E]
        test cl, cl
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        jne public_62e4f12
        mov ecx, dword ptr ds : [esi+0x84]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4f12 : nop
        fld dword ptr ds : [esi+0x18]
        pop esi
        fsubr dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x62e4ea0)
    }
}

#undef public_62e4ec3
#undef public_62e4f12
