#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2df0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a2e36 _public_5a2e36
#define public_5a2e53 _public_5a2e53
#define public_5a2e71 _public_5a2e71

PROC_DECLARE(0x5a2df0, internal_5a2df0, public_5a2df0);
extern "C" NAKED register_t __cdecl internal_5a2df0()
{
    __asm
    {
        push esi
        push 0xC000
        mov esi, ecx
        call public_5b7e84
        push 0x3000
        mov dword ptr ds : [esi+0xC], eax
        call public_5b7e84
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [esi]
        add esp, 8
        test eax, eax
        mov dword ptr ds : [esi+0x1C], 0
        mov dword ptr ds : [esi+0x20], 0
        jne public_5a2e36
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
/*FIXUP push offset public_5d2f44 @0x5a2e2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f44
        push eax
        call dword ptr ds : [ecx]
        public_5a2e36 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        lea eax, ds:[esi+4]
        jne public_5a2e53
        mov edx, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
/*FIXUP push offset public_5d2f30 @0x5a2e4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f30
        push ecx
        call dword ptr ds : [edx]
        public_5a2e53 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        lea eax, ds:[esi+8]
        pop esi
        jne public_5a2e71
        mov ecx, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
/*FIXUP push offset public_5d2f20 @0x5a2e69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f20
        push ecx
        call dword ptr ds : [edx]
        public_5a2e71 : nop
        ret 
        UNREACHABLE_TRAP(0x5a2df0)
    }
}

#undef public_5a2e36
#undef public_5a2e53
#undef public_5a2e71
