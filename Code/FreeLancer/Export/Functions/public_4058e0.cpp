#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4058b0);
CLANG_FORWARD_PROC_SYMBOL(public_4058e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_40590b _public_40590b

PROC_DECLARE(0x4058e0, internal_4058e0, public_4058e0);
extern "C" NAKED register_t __cdecl internal_4058e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        cmp eax, ebx
        je public_40590b
        mov ecx, dword ptr ds : [eax-4]
        push edi
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_4058b0 @0x4058f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4058b0
        push ecx
        push 0x1C
        push eax
        call public_5b7ec6
        push edi
        call public_5b7e1d
        add esp, 4
        pop edi
        public_40590b : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4058e0)
    }
}

#undef public_40590b
