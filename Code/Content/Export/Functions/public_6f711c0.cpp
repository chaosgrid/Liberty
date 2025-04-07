#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6efec20);

#define public_6f7121f _public_6f7121f
#define public_6f71229 _public_6f71229

PROC_DECLARE(0x6f711c0, internal_6f711c0, public_6f711c0);
extern "C" NAKED register_t __cdecl internal_6f711c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x10
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, ecx
        cmp dword ptr ds : [eax], 3
        push edi
        jne public_6f71229
        mov edi, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f71229
        cmp dword ptr ds : [edi+8], 0x20
        jne public_6f71229
        call public_6efec10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x28]
        lea eax, ds:[esi+0x30]
        push eax
        fstp qword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_6efec20
        fcomp qword ptr ss : [esp+0x18]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_6f7121f
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3120]
        public_6f7121f : nop
        mov al, 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        public_6f71229 : nop
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6f711c0)
    }
}

#undef public_6f7121f
#undef public_6f71229
