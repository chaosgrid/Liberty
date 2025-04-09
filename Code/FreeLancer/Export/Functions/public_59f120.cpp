#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434630);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_59efa0);
CLANG_FORWARD_PROC_SYMBOL(public_59f120);

#define public_59f17a _public_59f17a
#define public_59f1b4 _public_59f1b4

PROC_DECLARE(0x59f120, internal_59f120, public_59f120);
extern "C" NAKED register_t __cdecl internal_59f120()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x6C], 2
        je public_59f1b4
        call public_59e5c0
        test byte ptr ds : [esi+0xA4], 2
        jne public_59f17a
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        push 0x3F800000
        push 0
/*FIXUP push offset public_67dbf8 @0x59f16d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        lea ecx, ds:[esi+0x7C]
        call public_59efa0
        public_59f17a : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+0xA4]
        test al, 1
        je public_59f1b4
        not al
        shr al, 1
        push 0
        push 0x3F800000
        lea edx, ds:[esi+0xA5]
        and eax, 0xFFFFFF01
        push eax
        mov eax, dword ptr ds : [esi+0x80]
        push edx
        push 1
        push eax
/*FIXUP push offset public_67dbf8 @0x59f1a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_434630
        add esp, 0x1C
        public_59f1b4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59f120)
    }
}

#undef public_59f17a
#undef public_59f1b4
