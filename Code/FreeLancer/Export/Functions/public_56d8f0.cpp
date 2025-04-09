#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_56d8f0);
CLANG_FORWARD_PROC_SYMBOL(public_56daa0);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_57a610);
CLANG_FORWARD_PROC_SYMBOL(public_58d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_591de0);

#define public_56da1e _public_56da1e
#define public_56da3b _public_56da3b

PROC_DECLARE(0x56d8f0, internal_56d8f0, public_56d8f0);
extern "C" NAKED register_t __cdecl internal_56d8f0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        push 0xF
        lea ecx, ds:[esi+0x80]
        call public_5760f0
        mov ecx, dword ptr ds : [esi+0xC4]
        xor edi, edi
        cmp ecx, edi
        je public_56da1e
        lea eax, ds:[esi+0x2D0]
        push eax
        call public_58d0f0
        mov ecx, esi
        call public_56daa0
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x26C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x270]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x27C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x280]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x284]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xC4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x288]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xD4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x28C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0xD4]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x290]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        public_56da1e : nop
        mov ecx, esi
        call public_591de0
        mov ecx, dword ptr ds : [esi+0xEC]
        cmp ecx, edi
        je public_56da3b
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0xEC], edi
        public_56da3b : nop
        push 1
/*FIXUP push offset public_5c95fc @0x56da3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xBC], edi
        mov dword ptr ds : [esi+0xC0], edi
        mov dword ptr ds : [esi+0xC4], edi
        mov dword ptr ds : [esi+0xC8], edi
        mov dword ptr ds : [esi+0xD0], edi
        mov dword ptr ds : [esi+0xCC], edi
        mov dword ptr ds : [esi+0xD4], edi
        mov dword ptr ds : [esi+0xD8], edi
        mov dword ptr ds : [esi+0xE0], edi
        mov dword ptr ds : [esi+0xE4], edi
        mov dword ptr ds : [esi+0xDC], edi
        mov dword ptr ds : [esi+0xE8], edi
        call public_41dde0
        add esp, 8
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x56d8f0)
    }
}

#undef public_56da1e
#undef public_56da3b
