#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_45d57b _public_45d57b
#define public_45d592 _public_45d592

PROC_DECLARE(0x45d550, internal_45d550, public_45d550);
extern "C" NAKED register_t __cdecl internal_45d550()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, 0x4F
        mov esi, ecx
        jne public_45d57b
        lea ecx, ds:[esi+0x350]
        call public_55e280
        test al, al
        jne public_45d592
        lea ecx, ds:[esi+0x330]
        call public_55e280
        test al, al
        jne public_45d592
        public_45d57b : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_5a13c0
        pop edi
        pop esi
        ret 0xC
        public_45d592 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x45d550)
    }
}

#undef public_45d57b
#undef public_45d592
