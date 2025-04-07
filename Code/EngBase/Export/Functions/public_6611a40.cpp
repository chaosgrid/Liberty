#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611a40);

#define public_6611aa3 _public_6611aa3
#define public_6611abc _public_6611abc
#define public_6611adb _public_6611adb
#define public_6611aea _public_6611aea
#define public_6611af5 _public_6611af5

PROC_DECLARE(0x6611a40, internal_6611a40, public_6611a40);
extern "C" NAKED register_t __cdecl internal_6611a40()
{
    __asm
    {
        sub esp, 0x144
        push esi
        mov esi, dword ptr ss : [esp+0x150]
        push edi
/*FIXUP push offset public_662a060 @0x6611a4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a060
        mov eax, dword ptr ds : [esi]
        push esi
        or edi, 0xFFFFFFFF
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6611af5
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_662a058 @0x6611a67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a058
        push esi
        call dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_6611aea
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
/*FIXUP push offset public_662a054 @0x6611a7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a054
        push esi
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [edx+0x48]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6611adb
        push ebx
        mov ebx, dword ptr ss : [esp+0x154]
        push ebp
        mov ebp, dword ptr ss : [esp+0x160]
        public_6611aa3 : nop
        cmp byte ptr ss : [esp+0x40], 0x2E
        je public_6611abc
        test byte ptr ss : [esp+0x14], 0x10
        je public_6611abc
        lea ecx, ss:[esp+0x40]
        push ebp
        push ecx
        call ebx
        add esp, 8
        public_6611abc : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6611aa3
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x78]
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x50]
        pop ebp
        pop ebx
        public_6611adb : nop
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_662a03c @0x6611add*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [eax+0x60]
        mov edi, dword ptr ss : [esp+8]
        public_6611aea : nop
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_662a03c @0x6611aec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [ecx+0x60]
        public_6611af5 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x144
        ret 
        UNREACHABLE_TRAP(0x6611a40)
    }
}

#undef public_6611aa3
#undef public_6611abc
#undef public_6611adb
#undef public_6611aea
#undef public_6611af5
