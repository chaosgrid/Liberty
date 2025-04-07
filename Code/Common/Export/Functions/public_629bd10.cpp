#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629cdb0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_629bd40 _public_629bd40
#define public_629bd48 _public_629bd48
#define public_629bd5d _public_629bd5d

PROC_DECLARE(0x629bd10, internal_629bd10, public_629bd10);
extern "C" NAKED register_t __cdecl internal_629bd10()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_629bd48
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_629cdb0 @0x629bd21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_629cdb0
        lea edi, ds:[esi-4]
        push eax
        push 0x60
        push esi
        call public_6391dfc
        test bl, 1
        je public_629bd40
        push edi
        call public_6391d5a
        add esp, 4
        public_629bd40 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_629bd48 : nop
        mov ecx, esi
        call public_629cdb0
        test bl, 1
        je public_629bd5d
        push esi
        call public_62fd570
        add esp, 4
        public_629bd5d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629bd10)
    }
}

#undef public_629bd40
#undef public_629bd48
#undef public_629bd5d
