#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35c00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f35c35 _public_6f35c35
#define public_6f35c72 _public_6f35c72
#define public_6f35caf _public_6f35caf

PROC_DECLARE(0x6f35c00, internal_6f35c00, public_6f35c00);
extern "C" NAKED register_t __cdecl internal_6f35c00()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_6f5a000]
        call edi
        test eax, eax
        jne public_6f35c35
/*FIXUP push offset public_6f5fff4 @0x6f35c0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fff4
        push 0x2BC
/*FIXUP push offset public_6f5ffb0 @0x6f35c18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ffb0
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f35c22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        ret 
        public_6f35c35 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f35c72
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6f5ebac
        mov dword ptr ds : [esi], offset public_6f5ab40
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5ebac @0x6f35c62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ebac
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6f35c72 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f35caf
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6f5ff94
        mov dword ptr ds : [esi], offset public_6f5ab30
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5ff94 @0x6f35c9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff94
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6f35caf : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f35c00)
    }
}

#undef public_6f35c35
#undef public_6f35c72
#undef public_6f35caf
