#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d400);

#define public_6f67cf4 _public_6f67cf4
#define public_6f67d11 _public_6f67d11
#define public_6f67d3c _public_6f67d3c
#define public_6f67d5e _public_6f67d5e
#define public_6f67d6a _public_6f67d6a
#define public_6f67d7c _public_6f67d7c

PROC_DECLARE(0x6f67cd0, internal_6f67cd0, public_6f67cd0);
extern "C" NAKED register_t __cdecl internal_6f67cd0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f67d7c
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push edi
        mov edi, dword ptr ds : [public_6fb3020]
/*FIXUP public_6f67cf4 : nop
        push offset public_6fbbbdc @0x6f67cf4*/
  FIXUP public_6f67cf4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbbdc
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f67d6a
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f67d6a
/*FIXUP public_6f67d11 : nop
        push offset public_6fbbbec @0x6f67d11*/
  FIXUP public_6f67d11 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbbec
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f67d3c
        push 0
        call edi
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
/*FIXUP push offset public_6fbbb74 @0x6f67d2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb74
        call public_6f6d400
        add esp, 8
        jmp public_6f67d5e
/*FIXUP public_6f67d3c : nop
        push offset public_6fbbbf8 @0x6f67d3c*/
  FIXUP public_6f67d3c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbbf8
        call ebx
        test al, al
        je public_6f67d5e
        push 0
        mov ecx, esi
        call edi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x10], eax
        call public_6f6d1c0
        add esp, 4
        public_6f67d5e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f67d11
        public_6f67d6a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f67cf4
        pop edi
        pop ebx
        public_6f67d7c : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f67cd0)
    }
}

#undef public_6f67cf4
#undef public_6f67d11
#undef public_6f67d3c
#undef public_6f67d5e
#undef public_6f67d6a
#undef public_6f67d7c
