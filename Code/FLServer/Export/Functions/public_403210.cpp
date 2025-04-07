#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418900);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_403240 _public_403240
#define public_403248 _public_403248
#define public_40325d _public_40325d

PROC_DECLARE(0x403210, internal_403210, public_403210);
extern "C" NAKED register_t __cdecl internal_403210()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_403248
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_418900 @0x403221*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_418900
        lea edi, ds:[esi-4]
        push eax
        push 0x38
        push esi
        call public_4192c6
        test bl, 1
        je public_403240
        push edi
        call public_418978
        add esp, 4
        public_403240 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_403248 : nop
        mov ecx, esi
        call public_418900
        test bl, 1
        je public_40325d
        push esi
        call public_418978
        add esp, 4
        public_40325d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x403210)
    }
}

#undef public_403240
#undef public_403248
#undef public_40325d
