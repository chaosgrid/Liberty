#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ab130);

#define public_62b7d02 _public_62b7d02
#define public_62b7d23 _public_62b7d23
#define public_62b7d33 _public_62b7d33

PROC_DECLARE(0x62b7cc0, internal_62b7cc0, public_62b7cc0);
extern "C" NAKED register_t __cdecl internal_62b7cc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xE0]
        mov ecx, eax
        and ecx, 0xC40
        cmp eax, ecx
        jne public_62b7d23
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_62b7d02
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639e888 @0x62b7ce3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e888
        push 0x15C
/*FIXUP push offset public_639e820 @0x62b7ced*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e820
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62b7cf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_62b7d02 : nop
        mov cl, byte ptr ds : [esi+0x1BC]
        mov al, byte ptr ss : [esp+8]
        cmp al, cl
        mov byte ptr ds : [esi+0x1BC], al
        setne cl
        xor eax, eax
        test cl, cl
        sete al
        pop esi
        inc eax
        ret 8
        public_62b7d23 : nop
        shr eax, 7
        test al, 1
        je public_62b7d33
        mov eax, 1
        pop esi
        ret 8
        public_62b7d33 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_62ab130
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b7cc0)
    }
}

#undef public_62b7d02
#undef public_62b7d23
#undef public_62b7d33
