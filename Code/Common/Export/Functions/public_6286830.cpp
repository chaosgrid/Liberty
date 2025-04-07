#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62acc40);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6286863 _public_6286863
#define public_628686b _public_628686b
#define public_6286885 _public_6286885

PROC_DECLARE(0x6286830, internal_6286830, public_6286830);
extern "C" NAKED register_t __cdecl internal_6286830()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_628686b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62acc40 @0x6286841*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62acc40
        lea edi, ds:[esi-4]
        push eax
        push 0x104
        push esi
        call public_6391dfc
        test bl, 1
        je public_6286863
        push edi
        call public_6391d5a
        add esp, 4
        public_6286863 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_628686b : nop
        mov ecx, esi
        call public_62acc40
        test bl, 1
        je public_6286885
        push 0x104
        push esi
        call public_62adc40
        add esp, 8
        public_6286885 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6286830)
    }
}

#undef public_6286863
#undef public_628686b
#undef public_6286885
