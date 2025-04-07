#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11f70);

#define public_6f11f90 _public_6f11f90
#define public_6f11fe0 _public_6f11fe0

PROC_DECLARE(0x6f11f70, internal_6f11f70, public_6f11f70);
extern "C" NAKED register_t __cdecl internal_6f11f70()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x9C]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f11fe0
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
/*FIXUP public_6f11f90 : nop
        push offset public_6fb8aa8 @0x6f11f90*/
  FIXUP public_6f11f90 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8aa8
        push edi
        call ebx
        lea eax, ds:[esi+0xC]
        push eax
/*FIXUP push offset public_6fb8890 @0x6f11f9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8890
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
        mov cl, byte ptr ds : [esi+0x2C]
        xor edx, edx
        test cl, cl
        setne dl
        push edx
/*FIXUP push offset public_6fb8a94 @0x6f11fb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a94
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x24
        push edi
        call dword ptr ds : [eax+0x14]
/*FIXUP push offset public_6fb7758 @0x6f11fc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push edi
        call ebx
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+0x9C]
        add esp, 8
        cmp esi, eax
        jne public_6f11f90
        pop edi
        pop ebx
        public_6f11fe0 : nop
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f11f70)
    }
}

#undef public_6f11f90
#undef public_6f11fe0
