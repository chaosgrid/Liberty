#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7356);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_41bf50 _public_41bf50
#define public_41bf58 _public_41bf58
#define public_41bf6d _public_41bf6d

PROC_DECLARE(0x41bf20, internal_41bf20, public_41bf20);
extern "C" NAKED register_t __cdecl internal_41bf20()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_41bf58
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_5b7356 @0x41bf31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7356
        lea edi, ds:[esi-4]
        push eax
        push 0x28
        push esi
        call public_5b7ec6
        test bl, 1
        je public_41bf50
        push edi
        call public_5b7e1d
        add esp, 4
        public_41bf50 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_41bf58 : nop
        mov ecx, esi
        call public_5b7356
        test bl, 1
        je public_41bf6d
        push esi
        call public_5b7e1d
        add esp, 4
        public_41bf6d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x41bf20)
    }
}

#undef public_41bf50
#undef public_41bf58
#undef public_41bf6d
