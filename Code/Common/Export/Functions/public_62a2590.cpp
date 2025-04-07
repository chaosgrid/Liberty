#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2880);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_62a25c3 _public_62a25c3
#define public_62a25cb _public_62a25cb
#define public_62a25e5 _public_62a25e5

PROC_DECLARE(0x62a2590, internal_62a2590, public_62a2590);
extern "C" NAKED register_t __cdecl internal_62a2590()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_62a25cb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62a2880 @0x62a25a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a2880
        lea edi, ds:[esi-4]
        push eax
        push 0xFC
        push esi
        call public_6391dfc
        test bl, 1
        je public_62a25c3
        push edi
        call public_6391d5a
        add esp, 4
        public_62a25c3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_62a25cb : nop
        mov ecx, esi
        call public_62a2880
        test bl, 1
        je public_62a25e5
        push 0xFC
        push esi
        call public_62adc40
        add esp, 8
        public_62a25e5 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a2590)
    }
}

#undef public_62a25c3
#undef public_62a25cb
#undef public_62a25e5
