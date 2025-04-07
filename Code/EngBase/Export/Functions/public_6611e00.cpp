#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611b00);
CLANG_FORWARD_PROC_SYMBOL(public_6611e00);

#define public_6611e47 _public_6611e47

PROC_DECLARE(0x6611e00, internal_6611e00, public_6611e00);
extern "C" NAKED register_t __cdecl internal_6611e00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
/*FIXUP push offset public_662a060 @0x6611e07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a060
        push esi
        mov eax, dword ptr ds : [esi]
        mov edi, ecx
        or ebx, 0xFFFFFFFF
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6611e47
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        add edi, 4
        push esi
        push edi
        call public_6611b00
        add esp, 0x10
        mov edi, eax
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_662a03c @0x6611e36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [eax+0x60]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6611e47 : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6611e00)
    }
}

#undef public_6611e47
