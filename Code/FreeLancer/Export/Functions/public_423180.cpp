#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_422fe0);
CLANG_FORWARD_PROC_SYMBOL(public_4230c0);
CLANG_FORWARD_PROC_SYMBOL(public_423180);
CLANG_FORWARD_PROC_SYMBOL(public_4231e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_4231a3 _public_4231a3

PROC_DECLARE(0x423180, internal_423180, public_423180);
extern "C" NAKED register_t __cdecl internal_423180()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6679c8]
        mov al, 1
        test al, cl
        jne public_4231a3
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_4231e0 @0x423190*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4231e0
        mov byte ptr ds : [public_6679c8], dl
        call public_5b7e6c
        add esp, 4
        public_4231a3 : nop
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push esi
        push edi
        push eax
/*FIXUP push offset public_6649c8 @0x4231b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6649c8
        call public_422fe0
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        call public_422690
        push esi
        push edi
/*FIXUP push offset public_6649c8 @0x4231cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6649c8
        call public_4230c0
        add esp, 0x24
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x423180)
    }
}

#undef public_4231a3
