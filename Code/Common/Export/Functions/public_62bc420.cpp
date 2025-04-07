#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62bc440 _public_62bc440
#define public_62bc468 _public_62bc468
#define public_62bc46a _public_62bc46a
#define public_62bc472 _public_62bc472

PROC_DECLARE(0x62bc420, internal_62bc420, public_62bc420);
extern "C" NAKED register_t __cdecl internal_62bc420()
{
    __asm
    {
        push ecx
        fild dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push esi
        fdivr dword ptr ds : [public_639a1d0]
        mov esi, dword ptr ds : [ecx+8]
        cmp esi, ebx
        fstp dword ptr ss : [esp+8]
        je public_62bc472
        push edi
        lea esp, ss:[esp]
        public_62bc440 : nop
        mov edi, dword ptr ds : [esi]
        fld dword ptr ds : [edi+0x10]
        call public_6391dae
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62bc468
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [edi+0x10]
        jmp public_62bc46a
        public_62bc468 : nop
        fstp st(0)
        public_62bc46a : nop
        add esi, 4
        cmp esi, ebx
        jne public_62bc440
        pop edi
        public_62bc472 : nop
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62bc420)
    }
}

#undef public_62bc440
#undef public_62bc468
#undef public_62bc46a
#undef public_62bc472
