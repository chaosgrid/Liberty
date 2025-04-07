#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9030);

#define public_62fda02 _public_62fda02

PROC_DECLARE(0x62fd9c0, internal_62fd9c0, public_62fd9c0);
extern "C" NAKED register_t __cdecl internal_62fd9c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xA4]
        lea ecx, ds:[esi+0xA4]
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fda02
        mov eax, dword ptr ds : [esi+0x2F4]
        test eax, eax
        jne public_62fda02
        push 2
        lea ecx, ds:[esi+0x2C]
        call public_62d88b0
        public_62fda02 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        add ecx, 0x18
        call public_62e9030
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62fd9c0)
    }
}

#undef public_62fda02
