#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63678c0);

#define public_63678eb _public_63678eb
#define public_6367919 _public_6367919
#define public_6367947 _public_6367947

PROC_DECLARE(0x63678c0, internal_63678c0, public_63678c0);
extern "C" NAKED register_t __cdecl internal_63678c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        imul eax, edi
        lea esi, ds:[edx+eax*4]
        fld dword ptr ds : [esi+edi*4]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_63678eb
        pop edi
        fstp st(0)
        xor eax, eax
        pop esi
        ret 4
        public_63678eb : nop
        fld dword ptr ds : [public_63a53d0]
        mov eax, esi
        fdiv st, st(1)
        and eax, 0xFFFFFFF0
        mov edx, esi
        sub edx, eax
        push ebx
        mov ebx, dword ptr ds : [ecx+0x28]
        sar edx, 2
        add edx, ebx
        test edx, edx
        pop ebx
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        jle public_6367947
        lea ecx, ds:[edx+3]
        add eax, 8
        shr ecx, 2
        public_6367919 : nop
        fld dword ptr ss : [esp+0xC]
        add eax, 0x10
        dec ecx
        fmul dword ptr ds : [eax-0x18]
        fstp dword ptr ds : [eax-0x18]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-0x14]
        fstp dword ptr ds : [eax-0x14]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-0xC]
        fstp dword ptr ds : [eax-0xC]
        jne public_6367919
        public_6367947 : nop
        mov dword ptr ds : [esi+edi*4], 0x3F800000
        pop edi
        mov eax, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63678c0)
    }
}

#undef public_63678eb
#undef public_6367919
#undef public_6367947
