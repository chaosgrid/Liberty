#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6802510);
CLANG_FORWARD_PROC_SYMBOL(public_6804ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

#define public_6802560 _public_6802560
#define public_6802570 _public_6802570

PROC_DECLARE(0x6802510, internal_6802510, public_6802510);
extern "C" NAKED register_t __cdecl internal_6802510()
{
    __asm
    {
        push esi
        push 1
        call public_6801c50
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6804ed0
        mov eax, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax-0x10]
        add esp, 8
        cmp ecx, 0xFFFFFFFD
        je public_6802570
        test ecx, ecx
        je public_6802560
        shl ecx, 2
        mov edx, offset public_680d930
        sub edx, ecx
        mov eax, dword ptr ds : [edx]
        push eax
/*FIXUP push offset public_680d41c @0x6802545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d41c
        call public_6805fb0
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        add ecx, 0xFFFFFFF0
        mov dword ptr ds : [eax], ecx
        pop esi
        ret 
        public_6802560 : nop
        mov ecx, dword ptr ds : [eax-8]
        mov dword ptr ds : [ecx+0x10], esi
        mov eax, dword ptr ds : [public_680e604]
        add dword ptr ds : [eax], 0xFFFFFFF0
        pop esi
        ret 
        public_6802570 : nop
        mov edx, dword ptr ds : [eax-8]
        mov dword ptr ds : [edx+0x14], esi
        mov eax, dword ptr ds : [public_680e604]
        add dword ptr ds : [eax], 0xFFFFFFF0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802510)
    }
}

#undef public_6802560
#undef public_6802570
