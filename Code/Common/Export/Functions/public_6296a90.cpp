#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299380);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6296ac3 _public_6296ac3
#define public_6296acb _public_6296acb
#define public_6296ae0 _public_6296ae0

PROC_DECLARE(0x6296a90, internal_6296a90, public_6296a90);
extern "C" NAKED register_t __cdecl internal_6296a90()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6296acb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6299380 @0x6296aa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6299380
        lea edi, ds:[esi-4]
        push eax
        push 0x1F4
        push esi
        call public_6391dfc
        test bl, 1
        je public_6296ac3
        push edi
        call public_6391d5a
        add esp, 4
        public_6296ac3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6296acb : nop
        mov ecx, esi
        call public_6299380
        test bl, 1
        je public_6296ae0
        push esi
        call public_62fd570
        add esp, 4
        public_6296ae0 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6296a90)
    }
}

#undef public_6296ac3
#undef public_6296acb
#undef public_6296ae0
