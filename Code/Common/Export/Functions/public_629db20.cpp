#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629e170);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_629db50 _public_629db50
#define public_629db58 _public_629db58
#define public_629db6d _public_629db6d

PROC_DECLARE(0x629db20, internal_629db20, public_629db20);
extern "C" NAKED register_t __cdecl internal_629db20()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_629db58
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629e170 @0x629db31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629e170
        lea edi, ds:[esi-4]
        push eax
        push 0x60
        push esi
        call public_6391dfc
        test bl, 1
        je public_629db50
        push edi
        call public_6391d5a
        add esp, 4
        public_629db50 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_629db58 : nop
        mov ecx, esi
        call public_629e170
        test bl, 1
        je public_629db6d
        push esi
        call public_62fd570
        add esp, 4
        public_629db6d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629db20)
    }
}

#undef public_629db50
#undef public_629db58
#undef public_629db6d
