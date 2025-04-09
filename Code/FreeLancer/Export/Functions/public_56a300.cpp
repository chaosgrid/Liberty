#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53f330);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5a8770);
CLANG_FORWARD_PROC_SYMBOL(public_5a9300);

#define public_56a340 _public_56a340
#define public_56a34a _public_56a34a
#define public_56a350 _public_56a350

PROC_DECLARE(0x56a300, internal_56a300, public_56a300);
extern "C" NAKED register_t __cdecl internal_56a300()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF
        push esi
        mov esi, ecx
        jne public_56a350
        mov al, byte ptr ds : [esi+0x570]
        test al, al
        jne public_56a34a
        call public_5a8260
/*FIXUP push offset public_679d04 @0x56a31b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679d04
        call public_5a8770
        add esp, 4
        test al, al
        jne public_56a340
        mov ecx, offset public_67e7b8
        call public_5a9300
        mov dword ptr ds : [esi+0x234], 4
        public_56a340 : nop
        mov dword ptr ds : [esi+0x234], 5
        public_56a34a : nop
        mov al, 1
        pop esi
        ret 4
        public_56a350 : nop
        push eax
        mov ecx, esi
        call public_53f330
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x56a300)
    }
}

#undef public_56a340
#undef public_56a34a
#undef public_56a350
