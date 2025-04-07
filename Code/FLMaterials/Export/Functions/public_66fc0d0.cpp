#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f14c0);
CLANG_FORWARD_PROC_SYMBOL(public_67008b0);

#define public_66fc138 _public_66fc138

PROC_DECLARE(0x66fc0d0, internal_66fc0d0, public_66fc0d0);
extern "C" NAKED register_t __cdecl internal_66fc0d0()
{
    __asm
    {
        mov eax, 0x2000
        call public_67008b0
        push esi
        mov esi, dword ptr ss : [esp+0x2008]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x5C]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x110]
        mov edi, eax
        test edi, edi
        je public_66fc138
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
/*FIXUP push offset public_67029b4 @0x66fc10f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67029b4
        push ecx
        call public_66f14c0
        mov edx, dword ptr ds : [public_6701000]
        push eax
        push 0x78
/*FIXUP push offset public_6702980 @0x66fc123*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702980
        mov ecx, 0x100003
/*FIXUP push offset public_6701398 @0x66fc12d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701398
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        public_66fc138 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x2000
        ret 0xC
        UNREACHABLE_TRAP(0x66fc0d0)
    }
}

#undef public_66fc138
