#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715d30);
CLANG_FORWARD_PROC_SYMBOL(public_67169b2);

#define public_6715d91 _public_6715d91

PROC_DECLARE(0x6715d30, internal_6715d30, public_6715d30);
extern "C" NAKED register_t __cdecl internal_6715d30()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_671cfc4]
        sub esp, 0x108
        lea eax, ss:[esp]
        push esi
        push edi
        push 0x104
        xor edi, edi
        push eax
        push ecx
        mov dword ptr ds : [public_671b548], edi
        mov dword ptr ds : [public_671cef4], edi
        call public_67169b2
        test eax, eax
        jbe public_6715d91
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [public_67170a8]
        mov esi, eax
        cmp esi, edi
        je public_6715d91
        mov edi, dword ptr ds : [public_6719358]
/*FIXUP push offset public_67192a4 @0x6715d77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67192a4
        push esi
        call edi
/*FIXUP push offset public_6719290 @0x6715d7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719290
        push esi
        mov dword ptr ds : [public_671b548], eax
        call edi
        mov dword ptr ds : [public_671cef4], eax
        public_6715d91 : nop
        pop edi
        pop esi
        add esp, 0x108
        ret 
        UNREACHABLE_TRAP(0x6715d30)
    }
}

#undef public_6715d91
