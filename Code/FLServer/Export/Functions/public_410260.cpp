#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410890);
CLANG_FORWARD_PROC_SYMBOL(public_410db0);
CLANG_FORWARD_PROC_SYMBOL(public_4118e0);
CLANG_FORWARD_PROC_SYMBOL(public_411ac0);
CLANG_FORWARD_PROC_SYMBOL(public_411b50);

#define public_410298 _public_410298
#define public_4102a7 _public_4102a7
#define public_4102be _public_4102be

PROC_DECLARE(0x410260, internal_410260, public_410260);
extern "C" NAKED register_t __cdecl internal_410260()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0x10
        test al, al
        jne public_4102be
        push ebx
        push esi
        push edi
        lea esi, ds:[ecx+0x8C]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_411ac0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov ebx, eax
        call public_4118e0
        mov edi, eax
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], edi
        je public_4102a7
        public_410298 : nop
        lea ecx, ss:[esp+0x24]
        call public_411b50
        cmp dword ptr ss : [esp+0x24], ebx
        jne public_410298
        public_4102a7 : nop
        push ebx
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_410890
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 8
        public_4102be : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp]
        mov dword ptr ss : [esp], eax
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        add ecx, 0x8C
        mov byte ptr ss : [esp+0xC], 0
        call public_410db0
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x10], 1
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x410260)
    }
}

#undef public_410298
#undef public_4102a7
#undef public_4102be
