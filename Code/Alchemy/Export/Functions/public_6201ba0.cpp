#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201cc0);

#define public_6201bd3 _public_6201bd3
#define public_6201bef _public_6201bef

PROC_DECLARE(0x6201ba0, internal_6201ba0, public_6201ba0);
extern "C" NAKED register_t __cdecl internal_6201ba0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6257918]
        test al, al
        jne public_6201bd3
/*FIXUP push offset public_6255334 @0x6201ba9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255334
        push 0x180
        mov eax, 0x100001
/*FIXUP push offset public_6255088 @0x6201bb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625506c @0x6201bbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 4
        public_6201bd3 : nop
        mov al, byte ptr ds : [public_6257919]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov byte ptr ds : [public_6257918], 0
        test al, al
        je public_6201bef
        mov ecx, esi
        call public_6201cc0
        public_6201bef : nop
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0x2C]
        push edx
        push 0x16
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0x3C]
        push edx
        push 0x89
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0x40]
        push edx
        push 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0x30]
        push edx
        push 0x1B
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0x34]
        push edx
        push 0x13
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        push 0x14
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6201ba0)
    }
}

#undef public_6201bd3
#undef public_6201bef
