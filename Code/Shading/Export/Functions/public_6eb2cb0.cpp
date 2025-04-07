#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6eb2d23 _public_6eb2d23

PROC_DECLARE(0x6eb2cb0, internal_6eb2cb0, public_6eb2cb0);
extern "C" NAKED register_t __cdecl internal_6eb2cb0()
{
    __asm
    {
        mov eax, 0x2000
        call public_6ed0c70
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x200C]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov bl, byte ptr ds : [esi+0x74]
        mov ecx, dword ptr ds : [esi]
        push 0
        push esi
        mov byte ptr ds : [esi+0x74], 1
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0x74], bl
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x110]
        mov edi, eax
        test edi, edi
        je public_6eb2d23
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
/*FIXUP push offset public_6ed4250 @0x6eb2cf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4250
        push ecx
        call public_6eb22b0
        mov edx, dword ptr ds : [public_6ed1004]
        push eax
        push 0x97
/*FIXUP push offset public_6ed41f8 @0x6eb2d0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed41f8
        mov ecx, 0x100003
/*FIXUP push offset public_6ed40a0 @0x6eb2d18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40a0
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        public_6eb2d23 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x24]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x2000
        ret 0xC
        UNREACHABLE_TRAP(0x6eb2cb0)
    }
}

#undef public_6eb2d23
