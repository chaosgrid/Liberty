#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_57c360);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_57c3c1 _public_57c3c1
#define public_57c412 _public_57c412
#define public_57c435 _public_57c435

PROC_DECLARE(0x57c360, internal_57c360, public_57c360);
extern "C" NAKED register_t __cdecl internal_57c360()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov esi, ecx
        call public_42d680
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea ecx, ds:[esi+0x488]
        call dword ptr ds : [public_5c6c3c]
        mov al, byte ptr ds : [esi+0x470]
        test al, al
        je public_57c3c1
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xB8]
        mov edi, eax
        test edi, edi
        je public_57c3c1
        lea eax, ss:[esp+8]
        push eax
        call public_59da70
        mov edx, dword ptr ds : [esi]
        add esp, 4
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_57c3c1
        push edi
        call public_4be370
        add esp, 4
        public_57c3c1 : nop
        mov ecx, esi
        call public_5a17b0
        fld dword ptr ds : [esi+0x4B0]
        fstp qword ptr ss : [esp+8]
        call public_42d680
        fsubr qword ptr ss : [esp+8]
        fcom dword ptr ds : [public_5c7474]
        fst dword ptr ds : [esi+0x4B0]
        fnstsw ax
        test ah, 0x41
        jp public_57c435
        mov al, byte ptr ds : [esi+0x4AC]
        fcom dword ptr ds : [public_5c7474]
        test al, al
        sete cl
        mov byte ptr ds : [esi+0x4AC], cl
        fnstsw ax
        test ah, 5
        jp public_57c435
        fld dword ptr ds : [esi+0x4B4]
        public_57c412 : nop
        fxch 
        fadd st, st(1)
        fxch 
        fld st(1)
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_57c412
        fstp st(0)
        pop edi
        fstp dword ptr ds : [esi+0x4B0]
        pop esi
        add esp, 0xC
        ret 
        public_57c435 : nop
        pop edi
        fstp st(0)
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x57c360)
    }
}

#undef public_57c3c1
#undef public_57c412
#undef public_57c435
