#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6830);

#define public_6ea6861 _public_6ea6861
#define public_6ea6891 _public_6ea6891
#define public_6ea68d2 _public_6ea68d2

PROC_DECLARE(0x6ea6830, internal_6ea6830, public_6ea6830);
extern "C" NAKED register_t __cdecl internal_6ea6830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fce2e0]
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push eax
/*FIXUP push offset public_6fb4370 @0x6ea6843*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4370
        push edi
        mov esi, ecx
        call ebx
        mov al, byte ptr ds : [esi+0x18]
        add esp, 0xC
        test al, al
        mov eax, offset public_6fb4368
        jne public_6ea6861
        mov eax, offset public_6fb4360
        public_6ea6861 : nop
        mov ecx, dword ptr ds : [public_6fce2e4]
        push eax
        push ecx
/*FIXUP push offset public_6fb4354 @0x6ea6869*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4354
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 0x10
        test eax, eax
        jne public_6ea6891
        lea edx, ds:[esi+0x19]
/*FIXUP push offset public_6fb4264 @0x6ea687e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4264
        push edx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ea68d2
        public_6ea6891 : nop
        mov ecx, dword ptr ds : [public_6fce2e8]
        lea eax, ds:[esi+0x19]
        push eax
        push ecx
/*FIXUP push offset public_6fb4354 @0x6ea689c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4354
        push edi
        call ebx
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [public_6fce2ec]
        push edx
        push eax
/*FIXUP push offset public_6fb4348 @0x6ea68ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4348
        push edi
        call ebx
        fld dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [public_6fce2f0]
        fstp qword ptr ss : [esp+0x18]
        add esp, 0x18
        push ecx
/*FIXUP push offset public_6fb433c @0x6ea68c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb433c
        push edi
        call ebx
        add esp, 0x14
        public_6ea68d2 : nop
        mov cl, byte ptr ds : [public_6fcf388]
        mov eax, dword ptr ds : [public_6fce2f4]
        xor edx, edx
        test cl, cl
        setne dl
        push edx
        push eax
/*FIXUP push offset public_6fb4348 @0x6ea68e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4348
        push edi
        call ebx
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ea6830)
    }
}

#undef public_6ea6861
#undef public_6ea6891
#undef public_6ea68d2
