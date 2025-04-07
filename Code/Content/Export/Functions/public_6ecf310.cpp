#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6ecf38c _public_6ecf38c
#define public_6ecf396 _public_6ecf396

PROC_DECLARE(0x6ecf310, internal_6ecf310, public_6ecf310);
extern "C" NAKED register_t __cdecl internal_6ecf310()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push edi
        push eax
        call public_6f75f30
        lea ecx, ds:[esi+8]
        push ecx
        mov ebx, eax
        call public_6f49b00
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6ecf396
        test ebx, ebx
        je public_6ecf396
        test edi, edi
        je public_6ecf396
        mov ecx, edi
        call public_6f481e0
        mov edx, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ecf396
        mov ecx, edi
        call public_6f481e0
        test eax, 0x3FFFFFFF
        je public_6ecf396
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov ecx, ebx
        call public_6f73990
        test eax, eax
        je public_6ecf396
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test al, al
        mov ecx, esi
        je public_6ecf38c
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6fb6084 @0x6ecf37c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6084
        call dword ptr ds : [eax+8]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ecf38c : nop
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_6fb6070 @0x6ecf38e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6070
        call dword ptr ds : [edx+8]
        public_6ecf396 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ecf310)
    }
}

#undef public_6ecf38c
#undef public_6ecf396
