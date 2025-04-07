#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4edc0);

#define public_6f4b7d7 _public_6f4b7d7
#define public_6f4b819 _public_6f4b819

PROC_DECLARE(0x6f4b7c0, internal_6f4b7c0, public_6f4b7c0);
extern "C" NAKED register_t __cdecl internal_6f4b7c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jne public_6f4b7d7
/*FIXUP push offset public_6f603e4 @0x6f4b7ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f603e4
        call public_6f4c7f0
        add esp, 4
        public_6f4b7d7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        call public_6f4aff0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0xFFFFFFFB
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 4
        cmp ecx, edx
        jb public_6f4b819
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4b819 : nop
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        push esi
        mov dword ptr ds : [eax], edx
        call public_6f4cef0
        add esp, 4
        call public_6f4edc0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b7c0)
    }
}

#undef public_6f4b7d7
#undef public_6f4b819
