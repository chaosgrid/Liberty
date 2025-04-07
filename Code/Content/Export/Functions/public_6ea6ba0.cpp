#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f47a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9878);

#define public_6ea6c05 _public_6ea6c05

PROC_DECLARE(0x6ea6ba0, internal_6ea6ba0, public_6ea6ba0);
extern "C" NAKED register_t __cdecl internal_6ea6ba0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa9878 @0x6ea6ba8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9878
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x20
        push eax
        lea ebx, ds:[esi+0x19]
        push ebx
        call dword ptr ds : [public_6fb3378]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [public_6fb4260]
        lea edi, ds:[esi+0xC]
        push 0
        push edx
        mov dword ptr ds : [esi+0x14], ecx
        call dword ptr ds : [public_6fb3624]
        mov ebp, dword ptr ss : [esp+0x40]
        push edi
        mov dword ptr ds : [esi+0x10], ebp
        call public_6f49b00
        add esp, 0x18
        test eax, eax
        je public_6ea6c05
        push 1
        push ebp
        mov ecx, eax
        call public_6f47a30
        public_6ea6c05 : nop
        mov dword ptr ss : [esp+0x10], offset public_6fb4328
        mov eax, dword ptr ds : [edi]
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        add esi, 4
/*FIXUP push offset public_6fb431c @0x6ea6c1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb431c
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_6fb3614]
        push 0
        push 0x1000
/*FIXUP push offset public_6fcee14 @0x6ea6c3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcee14
        mov dword ptr ds : [public_6fcee14], eax
        call public_6f24070
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6ea6ba0)
    }
}

#undef public_6ea6c05
