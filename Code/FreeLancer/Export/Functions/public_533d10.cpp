#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd230);
CLANG_FORWARD_PROC_SYMBOL(public_530620);
CLANG_FORWARD_PROC_SYMBOL(public_5309c0);
CLANG_FORWARD_PROC_SYMBOL(public_530a10);
CLANG_FORWARD_PROC_SYMBOL(public_533d10);
CLANG_FORWARD_PROC_SYMBOL(public_5361e0);

#define public_533d75 _public_533d75
#define public_533dd4 _public_533dd4
#define public_533dfd _public_533dfd

PROC_DECLARE(0x533d10, internal_533d10, public_533d10);
extern "C" NAKED register_t __cdecl internal_533d10()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call public_5309c0
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 4
        test eax, eax
        jne public_533d75
        mov ecx, edi
        mov ebx, 0x100002
        call dword ptr ds : [public_5c6590]
        mov ecx, eax
        add ecx, 8
        call dword ptr ds : [public_5c6044]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x1E8
/*FIXUP push offset public_5de4c4 @0x533d60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de4c4
/*FIXUP push offset public_5de458 @0x533d65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de458
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x1C
        call public_530a10
        public_533d75 : nop
        push eax
        push edi
        call public_530620
        mov edx, dword ptr ds : [edi+4]
        add esp, 8
        mov ebx, eax
        push ebx
        push edx
        lea ecx, ds:[esi+0x28]
        call public_4fd230
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        je public_533dfd
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_533dfd
        push edi
        call dword ptr ds : [public_5c63c8]
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_533dd4
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        push eax
        push ebx
        push ebp
        call public_5361e0
        add esp, 0xC
        push eax
        lea ecx, ds:[ebx+0x20]
        call dword ptr ds : [public_5c67f4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_533dd4 : nop
        mov ecx, edi
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x202
/*FIXUP push offset public_5de4c4 @0x533ded*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de4c4
/*FIXUP push offset public_5de410 @0x533df2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de410
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_533dfd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x533d10)
    }
}

#undef public_533d75
#undef public_533dd4
#undef public_533dfd
