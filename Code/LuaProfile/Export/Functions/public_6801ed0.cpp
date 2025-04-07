#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6801c80);
CLANG_FORWARD_PROC_SYMBOL(public_6801ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68051d0);

#define public_6801ef6 _public_6801ef6

PROC_DECLARE(0x6801ed0, internal_6801ed0, public_6801ed0);
extern "C" NAKED register_t __cdecl internal_6801ed0()
{
    __asm
    {
        push 2
        call public_6801c50
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx-0x20]
        add esp, 4
        cmp eax, 0xFFFFFFFD
        je public_6801ef6
/*FIXUP push offset public_680d394 @0x6801ee9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d394
        call public_6802e00
        add esp, 4
        public_6801ef6 : nop
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax-0x18]
        lea ecx, ds:[eax-0x10]
        push ecx
        push edx
        call public_68051d0
        mov ecx, dword ptr ds : [public_680e604]
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
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        add ecx, 0xFFFFFFF0
        mov dword ptr ds : [eax], ecx
        jmp public_6801c80
        UNREACHABLE_TRAP(0x6801ed0)
    }
}

#undef public_6801ef6
