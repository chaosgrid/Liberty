#include "Common-PCH.h"


#define public_632be21 _public_632be21
#define public_632be4d _public_632be4d

PROC_DECLARE(0x632bdd0, internal_632bdd0, public_632bdd0);
extern "C" NAKED register_t __cdecl internal_632bdd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6399278]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push esi
/*FIXUP push offset public_63a48a8 @0x632bde2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a48a8
        push edi
        call ebx
        add esp, 0xC
        test eax, eax
        je public_632be4d
        push esi
/*FIXUP push offset public_63a48a0 @0x632bdf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a48a0
        push edi
        call ebx
        add esp, 0xC
        test eax, eax
        je public_632be4d
        push esi
/*FIXUP push offset public_63a47a0 @0x632be02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47a0
        push edi
        call ebx
        add esp, 0xC
        test eax, eax
        jne public_632be21
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov byte ptr ds : [eax+0x10], 0
        xor eax, eax
        pop ebx
        ret 0x1C
        public_632be21 : nop
        push esi
/*FIXUP push offset public_63a478c @0x632be22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a478c
        push edi
        call ebx
        add esp, 0xC
        test eax, eax
        je public_632be4d
        push esi
/*FIXUP push offset public_63a4794 @0x632be32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4794
        push edi
        call ebx
        add esp, 0xC
        test eax, eax
        je public_632be4d
        push esi
/*FIXUP push offset public_63a4760 @0x632be42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4760
        push edi
        call ebx
        add esp, 0xC
        public_632be4d : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x1C
        UNREACHABLE_TRAP(0x632bdd0)
    }
}

#undef public_632be21
#undef public_632be4d
