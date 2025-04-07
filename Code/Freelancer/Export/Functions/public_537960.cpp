#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537960);
CLANG_FORWARD_PROC_SYMBOL(public_5388e0);

#define public_53799c _public_53799c

PROC_DECLARE(0x537960, internal_537960, public_537960);
extern "C" NAKED register_t __cdecl internal_537960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x58]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push ecx
        lea edi, ds:[esi+0xD4]
        fstp dword ptr ss : [esp]
        push eax
        mov ecx, edi
        call public_5388e0
        cmp dword ptr ds : [edi], 0
        setne al
        test al, al
        je public_53799c
        inc dword ptr ds : [esi+0xD0]
        public_53799c : nop
        pop edi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x537960)
    }
}

#undef public_53799c
