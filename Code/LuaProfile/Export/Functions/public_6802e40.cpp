#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802b50);
CLANG_FORWARD_PROC_SYMBOL(public_6802e40);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

#define public_6802e62 _public_6802e62
#define public_6802e9b _public_6802e9b
#define public_6802eb4 _public_6802eb4

PROC_DECLARE(0x6802e40, internal_6802e40, public_6802e40);
extern "C" NAKED register_t __cdecl internal_6802e40()
{
    __asm
    {
/*FIXUP push offset public_680d384 @0x6802e40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d384
        call public_6805a80
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        add esp, 4
        cmp ecx, 0xFFFFFFFC
        je public_6802e62
        cmp ecx, 0xFFFFFFFB
        je public_6802e62
        cmp ecx, 0xFFFFFFF9
        jne public_6802eb4
        public_6802e62 : nop
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+8]
        jb public_6802e9b
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_6802e9b : nop
        add dword ptr ds : [eax], 0x10
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_68022b0
        push 0
        push 1
        call public_6802b50
        add esp, 0xC
        public_6802eb4 : nop
        ret 
        UNREACHABLE_TRAP(0x6802e40)
    }
}

#undef public_6802e62
#undef public_6802e9b
#undef public_6802eb4
