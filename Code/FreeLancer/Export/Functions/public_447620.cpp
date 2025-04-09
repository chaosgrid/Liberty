#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446ec0);
CLANG_FORWARD_PROC_SYMBOL(public_447620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_447650 _public_447650
#define public_447658 _public_447658
#define public_447669 _public_447669
#define public_447684 _public_447684

PROC_DECLARE(0x447620, internal_447620, public_447620);
extern "C" NAKED register_t __cdecl internal_447620()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_447658
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_446ec0 @0x447631*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446ec0
        lea edi, ds:[esi-4]
        push eax
        push 8
        push esi
        call public_5b7ec6
        test bl, 1
        je public_447650
        push edi
        call public_5b7e1d
        add esp, 4
        public_447650 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_447658 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_447669
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x88]
        public_447669 : nop
        test bl, 1
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], 0
        je public_447684
        push esi
        call public_5b7e1d
        add esp, 4
        public_447684 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x447620)
    }
}

#undef public_447650
#undef public_447658
#undef public_447669
#undef public_447684
