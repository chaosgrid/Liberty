#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_567350);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_57a610);
CLANG_FORWARD_PROC_SYMBOL(public_58d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_591de0);

#define public_5672f2 _public_5672f2

PROC_DECLARE(0x567290, internal_567290, public_567290);
extern "C" NAKED register_t __cdecl internal_567290()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        push 0xF
        lea ecx, ds:[esi+0x80]
        call public_5760f0
        mov ecx, dword ptr ds : [esi+0x2B8]
        xor edi, edi
        cmp ecx, edi
        je public_5672f2
        lea eax, ds:[esi+0x5A0]
        push eax
        call public_58d0f0
        mov ecx, esi
        call public_567350
        mov ecx, dword ptr ds : [esi+0x2B8]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x388]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x2B8]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x38C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        public_5672f2 : nop
        mov ecx, esi
        call public_591de0
        mov dword ptr ds : [esi+0x2B8], edi
        mov dword ptr ds : [esi+0x2BC], edi
        mov dword ptr ds : [esi+0x2C0], edi
        mov dword ptr ds : [esi+0x2C4], edi
        mov dword ptr ds : [esi+0x2C8], edi
        mov dword ptr ds : [esi+0x2CC], edi
        mov dword ptr ds : [esi+0x2D0], edi
        mov dword ptr ds : [esi+0x2D4], edi
        mov dword ptr ds : [esi+0x2D8], edi
        mov dword ptr ds : [esi+0x2DC], edi
        mov dword ptr ds : [esi+0x2E0], edi
        mov dword ptr ds : [esi+0x2E4], edi
        mov dword ptr ds : [esi+0x2E8], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x567290)
    }
}

#undef public_5672f2
