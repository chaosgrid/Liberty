#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_421050);
CLANG_FORWARD_PROC_SYMBOL(public_421120);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_4cd160);

#define public_4cd21d _public_4cd21d

PROC_DECLARE(0x4cd160, internal_4cd160, public_4cd160);
extern "C" NAKED register_t __cdecl internal_4cd160()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        call public_4101e0
        mov al, 0xFF
        mov byte ptr ss : [esp+8], al
        mov byte ptr ss : [esp+9], al
        mov byte ptr ss : [esp+0xA], al
        lea eax, ss:[esp+8]
        push eax
        call public_410240
        lea esi, ds:[edi+0x50]
        add esp, 4
        mov ecx, esi
        call public_420d60
        test al, al
        je public_4cd21d
/*FIXUP push offset public_67dbf8 @0x4cd197*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        add esp, 4
        lea ecx, ds:[edi+0x78]
        push ecx
        mov ecx, esi
        call public_421050
        push 0x100
/*FIXUP push offset public_67dbf8 @0x4cd1b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov ecx, esi
        call public_421120
        lea edx, ds:[edi+0xA8]
        push edx
        mov ecx, esi
        call public_421050
        push 0x100
/*FIXUP push offset public_67dbf8 @0x4cd1d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov ecx, esi
        call public_421120
        lea eax, ds:[edi+0xD8]
        push eax
        mov ecx, esi
        call public_421050
        push 0x100
/*FIXUP push offset public_67dbf8 @0x4cd1f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov ecx, esi
        call public_421120
        add edi, 0x108
        push edi
        mov ecx, esi
        call public_421050
        push 0x100
/*FIXUP push offset public_67dbf8 @0x4cd211*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov ecx, esi
        call public_421120
        public_4cd21d : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cd160)
    }
}

#undef public_4cd21d
