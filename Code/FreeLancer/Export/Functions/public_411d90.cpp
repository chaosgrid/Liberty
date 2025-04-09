#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d90);
CLANG_FORWARD_PROC_SYMBOL(public_419760);

#define public_411db7 _public_411db7
#define public_411de2 _public_411de2
#define public_411df8 _public_411df8
#define public_411e11 _public_411e11
#define public_411e59 _public_411e59
#define public_411e73 _public_411e73

PROC_DECLARE(0x411d90, internal_411d90, public_411d90);
extern "C" NAKED register_t __cdecl internal_411d90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0xB0], 0xFFFFFFFE
        push edi
        jne public_411df8
        mov ecx, dword ptr ds : [esi+0xB8]
        test ecx, ecx
        je public_411db7
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        mov dword ptr ds : [esi+0xB8], 0
        public_411db7 : nop
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        call public_419760
        add esp, 4
        test eax, eax
        je public_411de2
        mov dword ptr ds : [esi+0xB8], eax
        mov al, byte ptr ds : [esi+0xB4]
        or al, 2
        pop edi
        mov byte ptr ds : [esi+0xB4], al
        pop esi
        pop ebx
        ret 4
        public_411de2 : nop
        push 0
/*FIXUP push offset public_5c8a7c @0x411de4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a7c
        push edi
        push 0
        call dword ptr ds : [public_5c72d4]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_411df8 : nop
        mov ecx, dword ptr ds : [esi+0xBC]
        test ecx, ecx
        je public_411e11
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x24]
        mov dword ptr ds : [esi+0xBC], 0
        public_411e11 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        push ebx
        call public_419760
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_411e73
        mov eax, dword ptr ds : [esi+0xB0]
        cmp eax, 1
        je public_411e59
        cmp eax, 2
        je public_411e59
        cmp eax, 3
        je public_411e59
        push ebx
        push 0x360
/*FIXUP push offset public_5c8a08 @0x411e3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a08
        mov eax, 0x100001
/*FIXUP push offset public_5c8b30 @0x411e49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b30
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_411e59 : nop
        mov al, byte ptr ds : [esi+0xB4]
        mov dword ptr ds : [esi+0xBC], edi
        or al, 2
        pop edi
        mov byte ptr ds : [esi+0xB4], al
        pop esi
        pop ebx
        ret 4
        public_411e73 : nop
        push 0
/*FIXUP push offset public_5c8a7c @0x411e75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8a7c
        push ebx
        push 0
        call dword ptr ds : [public_5c72d4]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x411d90)
    }
}

#undef public_411db7
#undef public_411de2
#undef public_411df8
#undef public_411e11
#undef public_411e59
#undef public_411e73
