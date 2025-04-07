#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d734e);
CLANG_FORWARD_PROC_SYMBOL(public_65d7a4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d7b3e);
CLANG_FORWARD_PROC_SYMBOL(public_65d7c9e);

PROC_DECLARE(0x65d66e0, internal_65d66e0, public_65d66e0);
extern "C" NAKED register_t __cdecl internal_65d66e0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push edi
        push eax
        call public_65d7c9e
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_65d7b3e
        push eax
        call public_65d7a4c
        push eax
/*FIXUP push offset public_65e3314 @0x65d66fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3314
/*FIXUP push offset public_65e64c0 @0x65d6703*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e64c0
        call public_65d734e
        mov esi, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_65e3304 @0x65d6716*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3304
        push esi
        call dword ptr ds : [edx+0x18]
        mov edi, offset public_65e64c0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e32f0 @0x65d672f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e32f0
/*FIXUP push offset public_65e65c0 @0x65d6734*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e65c0
        call public_65d734e
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
/*FIXUP push offset public_65e65c0 @0x65d6743*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e65c0
        push esi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_65e32d8 @0x65d674e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e32d8
        push esi
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_65e60e4 @0x65d6759*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e60e4
        push esi
        call dword ptr ds : [edx+0x18]
        mov edi, offset public_65e64c0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edx, dword ptr ds : [esi]
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e64c0 @0x65d6774*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e64c0
        push esi
        call dword ptr ds : [edx+0x14]
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x65d66e0)
    }
}
