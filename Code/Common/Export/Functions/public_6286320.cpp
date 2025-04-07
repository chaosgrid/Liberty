#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6286c80);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6286353 _public_6286353
#define public_628635b _public_628635b
#define public_6286375 _public_6286375

PROC_DECLARE(0x6286320, internal_6286320, public_6286320);
extern "C" NAKED register_t __cdecl internal_6286320()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_628635b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6286c80 @0x6286331*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6286c80
        lea edi, ds:[esi-4]
        push eax
        push 0xF0
        push esi
        call public_6391dfc
        test bl, 1
        je public_6286353
        push edi
        call public_6391d5a
        add esp, 4
        public_6286353 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_628635b : nop
        mov ecx, esi
        call public_6286c80
        test bl, 1
        je public_6286375
        push 0xF0
        push esi
        call public_62adc40
        add esp, 8
        public_6286375 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6286320)
    }
}

#undef public_6286353
#undef public_628635b
#undef public_6286375
