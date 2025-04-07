#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714470);
CLANG_FORWARD_PROC_SYMBOL(public_67152f0);
CLANG_FORWARD_PROC_SYMBOL(public_6716982);
CLANG_FORWARD_PROC_SYMBOL(public_6716988);
CLANG_FORWARD_PROC_SYMBOL(public_67169be);

#define public_6715327 _public_6715327
#define public_6715351 _public_6715351
#define public_6715382 _public_6715382

PROC_DECLARE(0x67152f0, internal_67152f0, public_67152f0);
extern "C" NAKED register_t __cdecl internal_67152f0()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        push esi
        test al, al
        je public_6715382
        mov eax, dword ptr ds : [public_671cf98]
        push eax
        call public_6716988
        mov esi, eax
        test esi, esi
        je public_6715382
        mov al, byte ptr ds : [public_671cfdc]
        test al, al
        je public_6715327
        mov ecx, dword ptr ds : [public_671cf98]
        push esi
        push ecx
        call public_6716982
        pop esi
        ret 
        public_6715327 : nop
        mov eax, dword ptr ds : [public_671b400]
        mov byte ptr ds : [public_671cfdc], 1
        cmp eax, 2
        jne public_6715351
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_6715351
/*FIXUP push offset public_671b7c0 @0x6715340*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [public_671937c]
        call dword ptr ds : [public_671b3fc]
        public_6715351 : nop
        call public_6714470
        push 0
        push 4
        push 0x15
        push esi
        call public_67169be
        push 0
        push 0
        push 0x11
        push esi
        call public_67169be
        mov edx, dword ptr ds : [public_671cf98]
        push esi
        push edx
        call public_6716982
        mov byte ptr ds : [public_671cfdc], 0
        public_6715382 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x67152f0)
    }
}

#undef public_6715327
#undef public_6715351
#undef public_6715382
