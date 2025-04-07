#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b020);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e430);

#define public_6f4b296 _public_6f4b296

PROC_DECLARE(0x6f4b270, internal_6f4b270, public_6f4b270);
extern "C" NAKED register_t __cdecl internal_6f4b270()
{
    __asm
    {
        push 2
        call public_6f4aff0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx-0x20]
        add esp, 4
        cmp eax, 0xFFFFFFFD
        je public_6f4b296
/*FIXUP push offset public_6f603b4 @0x6f4b289*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f603b4
        call public_6f4c7f0
        add esp, 4
        public_6f4b296 : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax-0x18]
        lea ecx, ds:[eax-0x10]
        push ecx
        push edx
        call public_6f4e430
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x10
        mov ecx, dword ptr ds : [eax]
        sub edx, 0x20
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        add ecx, 0xFFFFFFF0
        mov dword ptr ds : [eax], ecx
        jmp public_6f4b020
        UNREACHABLE_TRAP(0x6f4b270)
    }
}

#undef public_6f4b296
