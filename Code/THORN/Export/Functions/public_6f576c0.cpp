#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57370);
CLANG_FORWARD_PROC_SYMBOL(public_6f576c0);

#define public_6f576db _public_6f576db
#define public_6f57707 _public_6f57707

PROC_DECLARE(0x6f576c0, internal_6f576c0, public_6f576c0);
extern "C" NAKED register_t __cdecl internal_6f576c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        cmp edi, 0x20
        jl public_6f576db
/*FIXUP push offset public_6f61ce8 @0x6f576ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61ce8
        call public_6f4c7f0
        add esp, 4
        public_6f576db : nop
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[edi+1]
        mov dword ptr ds : [esi+eax*8], ecx
        mov dword ptr ds : [esi+edi*8+0xC], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        inc eax
        push eax
        push ecx
        call public_6f57370
        add esp, 0xC
        test eax, eax
        jne public_6f57707
        dec dword ptr ds : [esi+4]
        public_6f57707 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f576c0)
    }
}

#undef public_6f576db
#undef public_6f57707
