#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2a10);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62a2813 _public_62a2813
#define public_62a281b _public_62a281b
#define public_62a2835 _public_62a2835

PROC_DECLARE(0x62a27e0, internal_62a27e0, public_62a27e0);
extern "C" NAKED register_t __cdecl internal_62a27e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62a281b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62a2a10 @0x62a27f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a2a10
        lea edi, ds:[esi-4]
        push eax
        push 0x9C
        push esi
        call public_6391dfc
        test bl, 1
        je public_62a2813
        push edi
        call public_6391d5a
        add esp, 4
        public_62a2813 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62a281b : nop
        mov ecx, esi
        call public_62a2a10
        test bl, 1
        je public_62a2835
        push 0x9C
        push esi
        call public_62adc40
        add esp, 8
        public_62a2835 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a27e0)
    }
}

#undef public_62a2813
#undef public_62a281b
#undef public_62a2835
