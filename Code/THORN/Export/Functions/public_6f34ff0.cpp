#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f34850);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58a69);

#define public_6f35044 _public_6f35044
#define public_6f35052 _public_6f35052
#define public_6f350ac _public_6f350ac

PROC_DECLARE(0x6f34ff0, internal_6f34ff0, public_6f34ff0);
extern "C" NAKED register_t __cdecl internal_6f34ff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58a69 @0x6f34ff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58a69
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ds : [ecx], offset public_6f5aaf0
        mov dword ptr ds : [ecx+4], offset public_6f5aad0
        mov dword ptr ds : [ecx+8], offset public_6f5aab8
        mov esi, dword ptr ds : [ecx+0xC]
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_6f350ac
        push ebx
        mov dword ptr ss : [esp+0x10], esi
        push ebp
        mov ebp, dword ptr ds : [esi+0x4C]
        mov ebx, dword ptr ds : [esi+0x48]
        cmp ebx, ebp
        mov byte ptr ss : [esp+0x20], 3
        je public_6f35052
        public_6f35044 : nop
        mov ecx, ebx
        call public_6f23610
        add ebx, 0x10
        cmp ebx, ebp
        jne public_6f35044
        public_6f35052 : nop
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        call public_6f57e26
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_6f57e26
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_6f57e26
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6f57e26
        push esi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0x14
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+0xC], edi
        public_6f350ac : nop
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6f34850
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f34ff0)
    }
}

#undef public_6f35044
#undef public_6f35052
#undef public_6f350ac
