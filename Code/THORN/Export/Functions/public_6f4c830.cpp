#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c830);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

#define public_6f4c852 _public_6f4c852
#define public_6f4c88b _public_6f4c88b
#define public_6f4c8a4 _public_6f4c8a4

PROC_DECLARE(0x6f4c830, internal_6f4c830, public_6f4c830);
extern "C" NAKED register_t __cdecl internal_6f4c830()
{
    __asm
    {
/*FIXUP push offset public_6f603a4 @0x6f4c830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f603a4
        call public_6f4f270
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        add esp, 4
        cmp ecx, 0xFFFFFFFC
        je public_6f4c852
        cmp ecx, 0xFFFFFFFB
        je public_6f4c852
        cmp ecx, 0xFFFFFFF9
        jne public_6f4c8a4
        public_6f4c852 : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+8]
        jb public_6f4c88b
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4c88b : nop
        add dword ptr ds : [eax], 0x10
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6f4b790
        push 0
        push 1
        call public_6f4c540
        add esp, 0xC
        public_6f4c8a4 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4c830)
    }
}

#undef public_6f4c852
#undef public_6f4c88b
#undef public_6f4c8a4
