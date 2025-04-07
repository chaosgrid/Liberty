#include "Content-PCH.h"


#define public_6ec3944 _public_6ec3944
#define public_6ec3960 _public_6ec3960

PROC_DECLARE(0x6ec3920, internal_6ec3920, public_6ec3920);
extern "C" NAKED register_t __cdecl internal_6ec3920()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_6fb3380]
        push esi
        push edi
/*FIXUP push offset public_6fb5a08 @0x6ec392e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a08
        push ebx
        mov edi, ecx
        call ebp
        mov eax, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        je public_6ec3960
        public_6ec3944 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
/*FIXUP push offset public_6fb5a00 @0x6ec394c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a00
        push ebx
        call ebp
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x28]
        add esp, 0x10
        cmp esi, eax
        jne public_6ec3944
        public_6ec3960 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec3920)
    }
}

#undef public_6ec3944
#undef public_6ec3960
