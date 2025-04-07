#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62954b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6295410 _public_6295410
#define public_6295418 _public_6295418
#define public_629542d _public_629542d

PROC_DECLARE(0x62953e0, internal_62953e0, public_62953e0);
extern "C" NAKED register_t __cdecl internal_62953e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6295418
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_62954b0 @0x62953f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62954b0
        lea edi, ds:[esi-4]
        push eax
        push 0x2C
        push esi
        call public_6391dfc
        test bl, 1
        je public_6295410
        push edi
        call public_6391d5a
        add esp, 4
        public_6295410 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6295418 : nop
        mov ecx, esi
        call public_62954b0
        test bl, 1
        je public_629542d
        push esi
        call public_62fd570
        add esp, 4
        public_629542d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62953e0)
    }
}

#undef public_6295410
#undef public_6295418
#undef public_629542d
