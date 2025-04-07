#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4be30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);

#define public_6f4be51 _public_6f4be51
#define public_6f4be93 _public_6f4be93

PROC_DECLARE(0x6f4be30, internal_6f4be30, public_6f4be30);
extern "C" NAKED register_t __cdecl internal_6f4be30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f4b520
        add esp, 4
        test eax, eax
        jne public_6f4be51
/*FIXUP push offset public_6f604ac @0x6f4be42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f604ac
        call public_6f4c7f0
        add esp, 4
        pop esi
        ret 
        public_6f4be51 : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        shl esi, 4
        lea edx, ds:[ecx+esi-0x10]
        push edx
        call public_6f4b6a0
        mov esi, eax
        push esi
        call public_6f4b140
        add esp, 8
        cmp eax, 0xFFFFFFFC
        jne public_6f4be93
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        add ecx, 0x28
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        pop esi
        ret 
        public_6f4be93 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], offset public_6f604a8
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4be30)
    }
}

#undef public_6f4be51
#undef public_6f4be93
