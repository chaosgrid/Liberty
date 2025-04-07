#include "Shading-PCH.h"


#define public_6eb3ee8 _public_6eb3ee8
#define public_6eb3f00 _public_6eb3f00

PROC_DECLARE(0x6eb3ea0, internal_6eb3ea0, public_6eb3ea0);
extern "C" NAKED register_t __cdecl internal_6eb3ea0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x14]
        push esi
/*FIXUP push offset public_6ed435c @0x6eb3eb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed435c
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jge public_6eb3ee8
        mov ecx, dword ptr ds : [public_6ed1004]
/*FIXUP push offset public_6ed4318 @0x6eb3ec3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4318
        push 0x77
/*FIXUP push offset public_6ed42c0 @0x6eb3eca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42c0
        mov eax, 0x100001
/*FIXUP push offset public_6ed42a4 @0x6eb3ed4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42a4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6eb3ee8 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        jne public_6eb3f00
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6eb3f00 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC]
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb3ea0)
    }
}

#undef public_6eb3ee8
#undef public_6eb3f00
