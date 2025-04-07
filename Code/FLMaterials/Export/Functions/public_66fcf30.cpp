#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1020);
CLANG_FORWARD_PROC_SYMBOL(public_66f1070);
CLANG_FORWARD_PROC_SYMBOL(public_66f3620);
CLANG_FORWARD_PROC_SYMBOL(public_66f4460);
CLANG_FORWARD_PROC_SYMBOL(public_66f51d0);
CLANG_FORWARD_PROC_SYMBOL(public_66f5930);
CLANG_FORWARD_PROC_SYMBOL(public_66f6530);
CLANG_FORWARD_PROC_SYMBOL(public_66f6f50);
CLANG_FORWARD_PROC_SYMBOL(public_66f6fa0);
CLANG_FORWARD_PROC_SYMBOL(public_66f6ff0);
CLANG_FORWARD_PROC_SYMBOL(public_66f7a70);
CLANG_FORWARD_PROC_SYMBOL(public_66f8280);
CLANG_FORWARD_PROC_SYMBOL(public_66f82e0);
CLANG_FORWARD_PROC_SYMBOL(public_66f96f0);
CLANG_FORWARD_PROC_SYMBOL(public_66fa230);
CLANG_FORWARD_PROC_SYMBOL(public_66fabf0);
CLANG_FORWARD_PROC_SYMBOL(public_66faee0);
CLANG_FORWARD_PROC_SYMBOL(public_66fbb70);
CLANG_FORWARD_PROC_SYMBOL(public_66fcf30);
CLANG_FORWARD_PROC_SYMBOL(public_66ff9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66fcfee _public_66fcfee

PROC_DECLARE(0x66fcf30, internal_66fcf30, public_66fcf30);
extern "C" NAKED register_t __cdecl internal_66fcf30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        push esi
        push edi
        jne public_66fcfee
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [public_6701010]
        call dword ptr ds : [public_6701008]
        mov edi, eax
        call public_66f8280
        call public_66f82e0
        call public_66f7a70
        call public_66ff9c0
        call public_66f4460
        call public_66f3620
        call public_66faee0
        call public_66fbb70
        call public_66f6530
        call public_66f6f50
        call public_66f6fa0
        call public_66f6ff0
        call public_66f5930
        call public_66f1020
        call public_66f1070
        call public_66fa230
        call public_66f51d0
        call public_66fabf0
        call public_66f96f0
        test edi, edi
        je public_66fcfee
        push 0xC
        call public_6700810
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_66fcfee
        push 0x80000000
/*FIXUP push offset public_6702ba4 @0x66fcfc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ba4
        push esi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6702ba4
        mov dword ptr ds : [esi], offset public_6702b94
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_66fcfee : nop
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66fcf30)
    }
}

#undef public_66fcfee
