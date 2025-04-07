#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dc440);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62dc488 _public_62dc488
#define public_62dc535 _public_62dc535
#define public_62dc558 _public_62dc558

PROC_DECLARE(0x62dc440, internal_62dc440, public_62dc440);
extern "C" NAKED register_t __cdecl internal_62dc440()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        sub esp, 0x4C
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fcomp qword ptr ds : [public_639fd40]
        fnstsw ax
        test ah, 0x41
        jne public_62dc488
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        add esp, 0x4C
        ret 
        public_62dc488 : nop
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [esi]
        fsubp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [ecx]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [public_639c13c]
        fld st(0)
        fsin 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp+0x58]
        fcos 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+4]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fstp st(0)
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_63fc994]
        fstp st(0)
        test eax, eax
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], ecx
        jne public_62dc535
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dc535 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [public_63fc994]
        test eax, eax
        jne public_62dc558
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dc558 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x62dc440)
    }
}

#undef public_62dc488
#undef public_62dc535
#undef public_62dc558
