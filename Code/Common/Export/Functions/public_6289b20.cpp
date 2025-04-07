#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ccf0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6289b3b _public_6289b3b
#define public_6289bc8 _public_6289bc8
#define public_6289bd0 _public_6289bd0
#define public_6289c0f _public_6289c0f

PROC_DECLARE(0x6289b20, internal_6289b20, public_6289b20);
extern "C" NAKED register_t __cdecl internal_6289b20()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [esi+0x11C]
        test al, al
        lea eax, ds:[esi+0x110]
        jne public_6289b3b
        lea eax, ds:[esi+0x2C]
        public_6289b3b : nop
        fld dword ptr ds : [esi+0x2C]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x30]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x34]
        fsub dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 0x41
        jne public_6289c0f
        mov ecx, dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_63fc098
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6289bc8
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6289bc8
        lea eax, ss:[esp+8]
        jmp public_6289bd0
        public_6289bc8 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x1C]
        public_6289bd0 : nop
        fld dword ptr ds : [public_639a1d0]
        mov ecx, dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        lea ecx, ds:[eax+0x10]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        call public_628ccf0
        public_6289c0f : nop
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6289b20)
    }
}

#undef public_6289b3b
#undef public_6289bc8
#undef public_6289bd0
#undef public_6289c0f
