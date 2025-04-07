#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e130);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

#define public_6f4ba40 _public_6f4ba40
#define public_6f4ba50 _public_6f4ba50

PROC_DECLARE(0x6f4b9f0, internal_6f4b9f0, public_6f4b9f0);
extern "C" NAKED register_t __cdecl internal_6f4b9f0()
{
    __asm
    {
        push esi
        push 1
        call public_6f4aff0
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6f4e130
        mov eax, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax-0x10]
        add esp, 8
        cmp ecx, 0xFFFFFFFD
        je public_6f4ba50
        test ecx, ecx
        je public_6f4ba40
        shl ecx, 2
        mov edx, offset public_6f609d0
        sub edx, ecx
        mov eax, dword ptr ds : [edx]
        push eax
/*FIXUP push offset public_6f6043c @0x6f4ba25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6043c
        call public_6f4f7a0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        add ecx, 0xFFFFFFF0
        mov dword ptr ds : [eax], ecx
        pop esi
        ret 
        public_6f4ba40 : nop
        mov ecx, dword ptr ds : [eax-8]
        mov dword ptr ds : [ecx+0x10], esi
        mov eax, dword ptr ds : [public_6f61e28]
        add dword ptr ds : [eax], 0xFFFFFFF0
        pop esi
        ret 
        public_6f4ba50 : nop
        mov edx, dword ptr ds : [eax-8]
        mov dword ptr ds : [edx+0x14], esi
        mov eax, dword ptr ds : [public_6f61e28]
        add dword ptr ds : [eax], 0xFFFFFFF0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b9f0)
    }
}

#undef public_6f4ba40
#undef public_6f4ba50
