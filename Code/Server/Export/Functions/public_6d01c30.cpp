#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01c30);

#define public_6d01c42 _public_6d01c42
#define public_6d01c44 _public_6d01c44
#define public_6d01c60 _public_6d01c60

PROC_DECLARE(0x6d01c30, internal_6d01c30, public_6d01c30);
extern "C" NAKED register_t __cdecl internal_6d01c30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6d01c42
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d01c44
        public_6d01c42 : nop
        xor eax, eax
        public_6d01c44 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        test edx, edx
        jne public_6d01c60
        add ecx, 0xC4
        jmp dword ptr ds : [public_6d645bc]
        lea ebx, ds:[ebx]
/*FIXUP public_6d01c60 : nop
        push offset public_6d67398 @0x6d01c60*/
  FIXUP public_6d01c60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67398
        push 0x1E5
/*FIXUP push offset public_6d6736c @0x6d01c6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6736c
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d01c74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_6d6402c]
        mov ax, word ptr ds : [ecx]
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d01c30)
    }
}

#undef public_6d01c42
#undef public_6d01c44
#undef public_6d01c60
