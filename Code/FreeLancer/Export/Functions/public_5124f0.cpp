#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_4221f0);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_50f850);

#define public_5125bc _public_5125bc
#define public_5125e4 _public_5125e4

PROC_DECLARE(0x5124f0, internal_5124f0, public_5124f0);
extern "C" NAKED register_t __cdecl internal_5124f0()
{
    __asm
    {
        fld dword ptr ds : [public_67509c]
        push edi
        fcomp dword ptr ds : [public_5c7474]
        mov edi, ecx
        fnstsw ax
        test ah, 0x41
        jnp public_5125e4
        fld dword ptr ds : [edi+0x34]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edi+0x64]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5125e4
        fld dword ptr ds : [edi+0x70]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_5125e4
        push esi
        push 0xBE2
        call public_421dd0
        push 2
        push 5
        call public_4220c0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        add esp, 0x14
        push esi
        call dword ptr ds : [eax+0x14]
        fild dword ptr ds : [eax+4]
        push 0
        push 0xBF800000
        sub esp, 0x10
        fstp dword ptr ss : [esp+0xC]
        fild dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_4221f0
        mov al, byte ptr ds : [public_613473]
        add esp, 0x18
        test al, al
        je public_5125bc
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [edi+0x18]
        push edi
        push esi
        call public_50f850
        public_5125bc : nop
        push 0xB71
        call public_421dd0
        push 0xB44
        call public_421dd0
        push 0xBE2
        call public_421ed0
        push esi
        call public_422950
        add esp, 0x10
        pop esi
        public_5125e4 : nop
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x5124f0)
    }
}

#undef public_5125bc
#undef public_5125e4
