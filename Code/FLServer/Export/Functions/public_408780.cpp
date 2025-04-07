#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418582);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_4087b0 _public_4087b0
#define public_4087b8 _public_4087b8
#define public_4087cd _public_4087cd

PROC_DECLARE(0x408780, internal_408780, public_408780);
extern "C" NAKED register_t __cdecl internal_408780()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_4087b8
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_418582 @0x408791*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_418582
        lea edi, ds:[esi-4]
        push eax
        push 0x2C
        push esi
        call public_4192c6
        test bl, 1
        je public_4087b0
        push edi
        call public_418978
        add esp, 4
        public_4087b0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4087b8 : nop
        mov ecx, esi
        call public_418582
        test bl, 1
        je public_4087cd
        push esi
        call public_418978
        add esp, 4
        public_4087cd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x408780)
    }
}

#undef public_4087b0
#undef public_4087b8
#undef public_4087cd
