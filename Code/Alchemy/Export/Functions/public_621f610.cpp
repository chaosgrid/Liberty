#include "Alchemy-PCH.h"


#define public_621f628 _public_621f628
#define public_621f63a _public_621f63a
#define public_621f682 _public_621f682
#define public_621f696 _public_621f696

PROC_DECLARE(0x621f610, internal_621f610, public_621f610);
extern "C" NAKED register_t __cdecl internal_621f610()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        je public_621f628
        mov eax, dword ptr ds : [eax]
        pop ebx
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x3C]
        public_621f628 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        push edi
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+4]
        xor edi, edi
        test eax, eax
        jle public_621f696
        push esi
        public_621f63a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx]
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x1C]
        test al, al
        jne public_621f682
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0x3C]
        test eax, eax
        je public_621f682
/*FIXUP push offset public_6256120 @0x621f65e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256120
        push 0x19E
        mov eax, 0x100002
/*FIXUP push offset public_62560b8 @0x621f66d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62560b8
/*FIXUP push offset public_625528c @0x621f672*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_621f682 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+4]
        inc edi
        add ecx, 0x10
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        jl public_621f63a
        pop esi
        public_621f696 : nop
        pop edi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621f610)
    }
}

#undef public_621f628
#undef public_621f63a
#undef public_621f682
#undef public_621f696
