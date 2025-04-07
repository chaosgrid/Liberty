#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_63906f0);

#define public_639073b _public_639073b

PROC_DECLARE(0x63906f0, internal_63906f0, public_63906f0);
extern "C" NAKED register_t __cdecl internal_63906f0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_658bd68]
        mov eax, dword ptr ds : [public_658b078]
        push esi
        mov esi, dword ptr ss : [esp+8]
        inc ecx
        cmp eax, 2
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658bd68], ecx
        jl public_639073b
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        push edx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fb3e4 @0x639072c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb3e4
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_639073b : nop
        mov edx, dword ptr ds : [edi+0x34]
        push esi
        push edx
        call public_636e5a0
        mov edi, dword ptr ds : [esi+0x14]
        push esi
        or edi, 0x8000000
/*FIXUP push offset public_658b900 @0x639074f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [esi+0x14], edi
        call public_636e1b0
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63906f0)
    }
}

#undef public_639073b
