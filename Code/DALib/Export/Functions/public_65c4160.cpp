#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3710);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);

#define public_65c4190 _public_65c4190
#define public_65c4198 _public_65c4198
#define public_65c41ad _public_65c41ad

PROC_DECLARE(0x65c4160, internal_65c4160, public_65c4160);
extern "C" NAKED register_t __cdecl internal_65c4160()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_65c4198
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_65c3710 @0x65c4171*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c3710
        lea edi, ds:[esi-4]
        push eax
        push 0x68
        push esi
        call public_65c6aef
        test bl, 1
        je public_65c4190
        push edi
        call public_65c6a60
        add esp, 4
        public_65c4190 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65c4198 : nop
        mov ecx, esi
        call public_65c3710
        test bl, 1
        je public_65c41ad
        push esi
        call public_65c6a60
        add esp, 4
        public_65c41ad : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65c4160)
    }
}

#undef public_65c4190
#undef public_65c4198
#undef public_65c41ad
