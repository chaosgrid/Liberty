#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367960);

#define public_636798b _public_636798b
#define public_63679bd _public_63679bd
#define public_63679eb _public_63679eb
#define public_6367a12 _public_6367a12
#define public_6367a40 _public_6367a40

PROC_DECLARE(0x6367960, internal_6367960, public_6367960);
extern "C" NAKED register_t __cdecl internal_6367960()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        imul edx, esi
        push edi
        lea edi, ds:[edx+esi]
        fld dword ptr ds : [eax+edi*4]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_636798b
        pop edi
        fstp st(0)
        xor eax, eax
        pop esi
        ret 4
        public_636798b : nop
        fld dword ptr ds : [public_63a53d0]
        mov eax, dword ptr ds : [ecx+4]
        fdiv st, st(1)
        lea eax, ds:[eax+edx*4]
        mov edx, eax
        and edx, 0xFFFFFFF0
        sub eax, edx
        push ebx
        mov ebx, dword ptr ds : [ecx+0x28]
        sar eax, 2
        add eax, ebx
        test eax, eax
        pop ebx
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        jle public_63679eb
        add eax, 3
        add edx, 8
        shr eax, 2
        public_63679bd : nop
        fld dword ptr ss : [esp+0xC]
        add edx, 0x10
        dec eax
        fmul dword ptr ds : [edx-0x18]
        fstp dword ptr ds : [edx-0x18]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edx-0x14]
        fstp dword ptr ds : [edx-0x14]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edx-0x10]
        fstp dword ptr ds : [edx-0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edx-0xC]
        fstp dword ptr ds : [edx-0xC]
        jne public_63679bd
        public_63679eb : nop
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[edx+edi*4+4]
        mov edx, eax
        and edx, 0xFFFFFFF0
        sub eax, edx
        sar eax, 2
        sub eax, esi
        mov esi, dword ptr ds : [ecx+0x28]
        lea esi, ds:[eax+esi-1]
        test esi, esi
        jle public_6367a40
        lea eax, ds:[edx+8]
        lea edx, ds:[esi+3]
        shr edx, 2
        public_6367a12 : nop
        fld dword ptr ss : [esp+0xC]
        add eax, 0x10
        dec edx
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
        jne public_6367a12
        public_6367a40 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+edi*4], 0x3F800000
        pop edi
        mov eax, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6367960)
    }
}

#undef public_636798b
#undef public_63679bd
#undef public_63679eb
#undef public_6367a12
#undef public_6367a40
