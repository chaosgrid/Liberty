#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48c80);

#define public_6d48ca1 _public_6d48ca1
#define public_6d48cc7 _public_6d48cc7

PROC_DECLARE(0x6d48c80, internal_6d48c80, public_6d48c80);
extern "C" NAKED register_t __cdecl internal_6d48c80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        push eax
        xor esi, esi
        call dword ptr ds : [public_6d647bc]
        test eax, eax
        je public_6d48ca1
        mov esi, dword ptr ds : [eax]
        test esi, esi
        jne public_6d48cc7
        public_6d48ca1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push edi
        push 0x25A
/*FIXUP push offset public_6d6b280 @0x6d48cb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
        mov eax, 0x100002
/*FIXUP push offset public_6d6b360 @0x6d48cbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b360
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        public_6d48cc7 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6d48c80)
    }
}

#undef public_6d48ca1
#undef public_6d48cc7
