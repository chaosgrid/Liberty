#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f7f0);
CLANG_FORWARD_PROC_SYMBOL(public_44f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_44fa38 _public_44fa38
#define public_44fa40 _public_44fa40

PROC_DECLARE(0x44f9e0, internal_44f9e0, public_44f9e0);
extern "C" NAKED register_t __cdecl internal_44f9e0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ds : [esi+0x40]
        sub ecx, eax
        je public_44fa40
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], 0
        fild qword ptr ss : [esp+4]
        sub esp, 8
        fmul dword ptr ss : [esp+0x18]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c89b8]
        mov ecx, eax
        fnstsw ax
        test ah, 1
        jne public_44fa38
        inc ecx
        public_44fa38 : nop
        push ecx
        mov ecx, esi
        call public_44f7f0
        public_44fa40 : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x44f9e0)
    }
}

#undef public_44fa38
#undef public_44fa40
