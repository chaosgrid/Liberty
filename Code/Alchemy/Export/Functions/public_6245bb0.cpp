#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245bb0);

#define public_6245bd1 _public_6245bd1
#define public_6245bdb _public_6245bdb

PROC_DECLARE(0x6245bb0, internal_6245bb0, public_6245bb0);
extern "C" NAKED register_t __cdecl internal_6245bb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, dword ptr ds : [esi+0x98]
        test eax, eax
        je public_6245bdb
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        jns public_6245bd1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC8]
        public_6245bd1 : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        xor eax, eax
        pop esi
        ret 8
        public_6245bdb : nop
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+4], edx
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6245bb0)
    }
}

#undef public_6245bd1
#undef public_6245bdb
