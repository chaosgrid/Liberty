#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4221f0);
CLANG_FORWARD_PROC_SYMBOL(public_422820);
CLANG_FORWARD_PROC_SYMBOL(public_422ab0);

#define public_422af0 _public_422af0
#define public_422b25 _public_422b25
#define public_422b30 _public_422b30

PROC_DECLARE(0x422ab0, internal_422ab0, public_422ab0);
extern "C" NAKED register_t __cdecl internal_422ab0()
{
    __asm
    {
        mov al, byte ptr ds : [public_610844]
        test al, al
        je public_422b30
        mov eax, dword ptr ds : [public_664928]
        cmp eax, 1
        jne public_422af0
        mov eax, dword ptr ds : [public_664938]
        mov ecx, dword ptr ds : [public_664934]
        mov edx, dword ptr ds : [public_664930]
        push eax
        mov eax, dword ptr ds : [public_66492c]
        push ecx
        push edx
        push eax
        call public_422820
        add esp, 0x10
        mov dword ptr ds : [public_664928], 0
        ret 
        public_422af0 : nop
        cmp eax, 2
        jne public_422b25
        mov ecx, dword ptr ds : [public_664940]
        mov edx, dword ptr ds : [public_66493c]
        mov eax, dword ptr ds : [public_664938]
        push ecx
        mov ecx, dword ptr ds : [public_664934]
        push edx
        mov edx, dword ptr ds : [public_664930]
        push eax
        mov eax, dword ptr ds : [public_66492c]
        push ecx
        push edx
        push eax
        call public_4221f0
        add esp, 0x18
        public_422b25 : nop
        mov dword ptr ds : [public_664928], 0
        ret 
        public_422b30 : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_664948 @0x422b3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_664948
        push eax
        call dword ptr ds : [edx+0x84]
        ret 
        UNREACHABLE_TRAP(0x422ab0)
    }
}

#undef public_422af0
#undef public_422b25
#undef public_422b30
