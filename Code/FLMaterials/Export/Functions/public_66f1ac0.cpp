#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);

#define public_66f1adb _public_66f1adb
#define public_66f1af3 _public_66f1af3
#define public_66f1b0e _public_66f1b0e

PROC_DECLARE(0x66f1ac0, internal_66f1ac0, public_66f1ac0);
extern "C" NAKED register_t __cdecl internal_66f1ac0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        sub eax, 5
        push edi
        je public_66f1af3
        dec eax
        je public_66f1adb
        dec eax
        je public_66f1af3
        pop edi
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_66f1adb : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ds : [esi+4], edi
        je public_66f1b0e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        public_66f1af3 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        je public_66f1b0e
        push eax
        push edi
        call dword ptr ds : [public_6701018]
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [esi+4], edi
        public_66f1b0e : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66f1ac0)
    }
}

#undef public_66f1adb
#undef public_66f1af3
#undef public_66f1b0e
