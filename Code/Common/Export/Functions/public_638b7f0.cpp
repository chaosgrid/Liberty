#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638b7f0);
CLANG_FORWARD_PROC_SYMBOL(public_638bc40);

#define public_638b832 _public_638b832
#define public_638b846 _public_638b846
#define public_638b880 _public_638b880

PROC_DECLARE(0x638b7f0, internal_638b7f0, public_638b7f0);
extern "C" NAKED register_t __cdecl internal_638b7f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        je public_638b880
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [public_63991e8]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63f9a40 @0x638b812*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9a40
        push esi
        call ebx
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 0xC
        test eax, 0x2000000
        je public_638b832
/*FIXUP push offset public_63f8698 @0x638b827*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8698
        push esi
        call ebx
        add esp, 8
        public_638b832 : nop
        test dword ptr ds : [edi+0xC], 0x4000000
        je public_638b846
/*FIXUP push offset public_63f9a34 @0x638b83b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9a34
        push esi
        call ebx
        add esp, 8
/*FIXUP public_638b846 : nop
        push offset public_63edccc @0x638b846*/
  FIXUP public_638b846 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push esi
        call ebx
        mov ecx, dword ptr ds : [edi]
        push ecx
/*FIXUP push offset public_63f9a1c @0x638b851*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9a1c
        push esi
        call public_638bc40
        mov eax, dword ptr ds : [edi+4]
        add esp, 0x14
        test eax, eax
        je public_638b880
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        je public_638b880
        mov edx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [eax+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63f99fc @0x638b875*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99fc
        push esi
        call ebx
        add esp, 0x10
        public_638b880 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638b7f0)
    }
}

#undef public_638b832
#undef public_638b846
#undef public_638b880
