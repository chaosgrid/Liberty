#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_68022e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6803ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6803c90);

#define public_68022f7 _public_68022f7
#define public_6802339 _public_6802339

PROC_DECLARE(0x68022e0, internal_68022e0, public_68022e0);
extern "C" NAKED register_t __cdecl internal_68022e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jne public_68022f7
/*FIXUP push offset public_680d3c4 @0x68022ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d3c4
        call public_6802e00
        add esp, 4
        public_68022f7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        call public_6801c50
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0xFFFFFFFB
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 4
        cmp ecx, edx
        jb public_6802339
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_6802339 : nop
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        push esi
        mov dword ptr ds : [eax], edx
        call public_6803c90
        add esp, 4
        call public_6803ab0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68022e0)
    }
}

#undef public_68022f7
#undef public_6802339
