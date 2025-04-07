#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b110);
CLANG_FORWARD_PROC_SYMBOL(public_6f4beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f4c0);

#define public_6f4beeb _public_6f4beeb
#define public_6f4bf08 _public_6f4bf08

PROC_DECLARE(0x6f4beb0, internal_6f4beb0, public_6f4beb0);
extern "C" NAKED register_t __cdecl internal_6f4beb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        shl ecx, 4
        lea ecx, ds:[edx+ecx-0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push edx
        call public_6f4b110
/*FIXUP push offset _public_6f4bf10 @0x6f4becd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4bf10
        call public_6f4f4c0
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6f4beeb
        mov eax, offset public_6f604f0
        pop esi
        ret 
/*FIXUP public_6f4beeb : nop
        push offset _public_6f4bf10 @0x6f4beeb*/
  FIXUP public_6f4beeb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4bf10
        call public_6f4e3d0
        add esp, 4
        mov dword ptr ds : [esi], eax
        test eax, eax
        mov eax, offset public_6f604e4
        jne public_6f4bf08
        mov eax, offset public_6f61e0c
        public_6f4bf08 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4beb0)
    }
}

#undef public_6f4beeb
#undef public_6f4bf08
