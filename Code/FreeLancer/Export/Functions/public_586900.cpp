#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586900);

#define public_5869a0 _public_5869a0
#define public_5869e2 _public_5869e2

PROC_DECLARE(0x586900, internal_586900, public_586900);
extern "C" NAKED register_t __cdecl internal_586900()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        lea eax, ds:[ecx+0x37C]
        push edi
        mov edi, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        fld dword ptr ds : [ecx+0x384]
        fld dword ptr ds : [ecx+0x380]
        xor esi, esi
        fld dword ptr ds : [eax]
        lea eax, ds:[ecx+0x370]
        fmul dword ptr ds : [public_5c77f4]
        lea edx, ds:[ecx+0x364]
        mov dword ptr ds : [ecx+0x35C], esi
        fst dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x36C], esi
        fcos 
        mov dword ptr ds : [ecx+0x374], esi
        pop edi
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [ecx+0x368], 0x3F800000
        pop esi
        fld dword ptr ss : [esp+4]
        fsin 
        fld st(1)
        fstp dword ptr ds : [ecx+0x358]
        fst dword ptr ds : [ecx+0x360]
        fchs 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x378]
        mov ecx, 3
        fmul dword ptr ds : [public_5c77f4]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+4]
        fsin 
        lea esp, ss:[esp]
        public_5869a0 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_5869a0
        fstp st(0)
        mov eax, edx
        fmul dword ptr ds : [public_5c77f4]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+4]
        fsin 
        public_5869e2 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_5869e2
        fstp st(0)
        ret 4
        UNREACHABLE_TRAP(0x586900)
    }
}

#undef public_5869a0
#undef public_5869e2
