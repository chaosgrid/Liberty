#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55a490);

#define public_55a4d4 _public_55a4d4
#define public_55a4f5 _public_55a4f5
#define public_55a516 _public_55a516
#define public_55a537 _public_55a537
#define public_55a553 _public_55a553

PROC_DECLARE(0x55a490, internal_55a490, public_55a490);
extern "C" NAKED register_t __cdecl internal_55a490()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5e15dc @0x55a4a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e15dc
        mov dword ptr ds : [ebx], 0
        push esi
        mov dword ptr ss : [ebp], 0
        call edi
        add esp, 8
        test eax, eax
        jne public_55a4d4
        pop edi
        mov dword ptr ds : [ebx], 0x8B
        pop esi
        mov dword ptr ss : [ebp], 0xBC2
        pop ebp
        pop ebx
        ret 
/*FIXUP public_55a4d4 : nop
        push offset public_5e15d4 @0x55a4d4*/
  FIXUP public_55a4d4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e15d4
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_55a4f5
        pop edi
        mov dword ptr ds : [ebx], 0x1D
        pop esi
        mov dword ptr ss : [ebp], 0xBB9
        pop ebp
        pop ebx
        ret 
/*FIXUP public_55a4f5 : nop
        push offset public_5e15cc @0x55a4f5*/
  FIXUP public_55a4f5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e15cc
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_55a516
        pop edi
        mov dword ptr ds : [ebx], 0x1E
        pop esi
        mov dword ptr ss : [ebp], 0xBBA
        pop ebp
        pop ebx
        ret 
/*FIXUP public_55a516 : nop
        push offset public_5e15bc @0x55a516*/
  FIXUP public_55a516 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e15bc
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_55a537
        pop edi
        mov dword ptr ds : [ebx], 0x21
        pop esi
        mov dword ptr ss : [ebp], 0x41F
        pop ebp
        pop ebx
        ret 
/*FIXUP public_55a537 : nop
        push offset public_5e15ac @0x55a537*/
  FIXUP public_55a537 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e15ac
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_55a553
        mov dword ptr ds : [ebx], 0x22
        mov dword ptr ss : [ebp], 0x420
        public_55a553 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x55a490)
    }
}

#undef public_55a4d4
#undef public_55a4f5
#undef public_55a516
#undef public_55a537
#undef public_55a553
