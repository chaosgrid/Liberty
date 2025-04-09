#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_4477d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4170);

#define public_4c41c3 _public_4c41c3

PROC_DECLARE(0x4c4170, internal_4c4170, public_4c4170);
extern "C" NAKED register_t __cdecl internal_4c4170()
{
    __asm
    {
        push esi
        inc dword ptr ds : [public_673384]
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push eax
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        mov ecx, offset public_672960
        push eax
        push esi
        call dword ptr ds : [public_5c6434]
        mov edi, eax
        call public_446be0
        test eax, eax
        je public_4c41c3
        fld dword ptr ds : [esi+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp]
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        lea edx, ds:[esi+8]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        push edi
        mov ecx, eax
        call public_4477d0
        public_4c41c3 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c4170)
    }
}

#undef public_4c41c3
