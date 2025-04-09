#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7362);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_41c513 _public_41c513
#define public_41c51b _public_41c51b
#define public_41c530 _public_41c530

PROC_DECLARE(0x41c4e0, internal_41c4e0, public_41c4e0);
extern "C" NAKED register_t __cdecl internal_41c4e0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_41c51b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_5b7362 @0x41c4f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7362
        lea edi, ds:[esi-4]
        push eax
        push 0x90
        push esi
        call public_5b7ec6
        test bl, 1
        je public_41c513
        push edi
        call public_5b7e1d
        add esp, 4
        public_41c513 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_41c51b : nop
        mov ecx, esi
        call public_5b7362
        test bl, 1
        je public_41c530
        push esi
        call public_5b7e1d
        add esp, 4
        public_41c530 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x41c4e0)
    }
}

#undef public_41c513
#undef public_41c51b
#undef public_41c530
