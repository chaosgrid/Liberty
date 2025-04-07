#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c1000);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a30);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a36);

PROC_DECLARE(0x65c1000, internal_65c1000, public_65c1000);
extern "C" NAKED register_t __cdecl internal_65c1000()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        push 0x38
/*FIXUP push offset public_65c7140 @0x65c1006*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7140
        xor edi, edi
        push 6
        lea eax, ds:[esi+4]
        push eax
        mov dword ptr ds : [esi], offset public_65c713c
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        call public_65c6a36
        push 0x38
        lea eax, ds:[esi+0x3C]
/*FIXUP push offset public_65c7140 @0x65c102c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7140
        push eax
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [esi+0x40], edi
        call public_65c6a30
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x74], edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c1000)
    }
}
