#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42dd20);
CLANG_FORWARD_PROC_SYMBOL(public_42e080);
CLANG_FORWARD_PROC_SYMBOL(public_453e60);

#define public_453e95 _public_453e95

PROC_DECLARE(0x453e60, internal_453e60, public_453e60);
extern "C" NAKED register_t __cdecl internal_453e60()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 0
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_42dd20
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi+0x74], eax
        je public_453e95
        mov ecx, eax
        call public_42e080
        pop edi
        pop esi
        ret 4
        public_453e95 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push edi
        push 0x4C
/*FIXUP push offset public_5cdcc8 @0x453e9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cdcc8
        mov eax, 0x100001
/*FIXUP push offset public_5cdc88 @0x453ea8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cdc88
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x453e60)
    }
}

#undef public_453e95
