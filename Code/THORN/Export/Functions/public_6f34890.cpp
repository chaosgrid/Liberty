#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f34890);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58a11);

#define public_6f348c1 _public_6f348c1
#define public_6f348cf _public_6f348cf

PROC_DECLARE(0x6f34890, internal_6f34890, public_6f34890);
extern "C" NAKED register_t __cdecl internal_6f34890()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58a11 @0x6f34892*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58a11
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov ebx, dword ptr ds : [esi+0x4C]
        mov edi, dword ptr ds : [esi+0x48]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 2
        je public_6f348cf
        public_6f348c1 : nop
        mov ecx, edi
        call public_6f23610
        add edi, 0x10
        cmp edi, ebx
        jne public_6f348c1
        public_6f348cf : nop
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        call public_6f57e26
        xor edi, edi
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov ecx, dword ptr ds : [esi+0x38]
        push ecx
        call public_6f57e26
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        call public_6f57e26
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f34890)
    }
}

#undef public_6f348c1
#undef public_6f348cf
