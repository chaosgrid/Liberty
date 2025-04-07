#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881e0);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_62b09b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6288213 _public_6288213
#define public_628821b _public_628821b
#define public_6288235 _public_6288235

PROC_DECLARE(0x62881e0, internal_62881e0, public_62881e0);
extern "C" NAKED register_t __cdecl internal_62881e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_628821b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62b09b0 @0x62881f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62b09b0
        lea edi, ds:[esi-4]
        push eax
        push 0x2DC
        push esi
        call public_6391dfc
        test bl, 1
        je public_6288213
        push edi
        call public_6391d5a
        add esp, 4
        public_6288213 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_628821b : nop
        mov ecx, esi
        call public_62b09b0
        test bl, 1
        je public_6288235
        push 0x2DC
        push esi
        call public_62adc40
        add esp, 8
        public_6288235 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62881e0)
    }
}

#undef public_6288213
#undef public_628821b
#undef public_6288235
