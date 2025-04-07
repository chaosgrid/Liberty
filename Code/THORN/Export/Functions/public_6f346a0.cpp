#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d30);
CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f589dc);

#define public_6f346e1 _public_6f346e1
#define public_6f346ef _public_6f346ef
#define public_6f34750 _public_6f34750
#define public_6f34780 _public_6f34780
#define public_6f34783 _public_6f34783

PROC_DECLARE(0x6f346a0, internal_6f346a0, public_6f346a0);
extern "C" NAKED register_t __cdecl internal_6f346a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f589dc @0x6f346a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f589dc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        push edi
        xor edi, edi
        cmp esi, edi
        je public_6f34750
        mov dword ptr ss : [esp+0xC], esi
        push ebp
        mov ebp, dword ptr ds : [esi+0x4C]
        mov ebx, dword ptr ds : [esi+0x48]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], 2
        je public_6f346ef
        public_6f346e1 : nop
        mov ecx, ebx
        call public_6f23610
        add ebx, 0x10
        cmp ebx, ebp
        jne public_6f346e1
        public_6f346ef : nop
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
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_6f57e26
        push esi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        call public_6f57e26
        mov ebx, dword ptr ss : [esp+0x38]
        add esp, 0x14
        pop ebp
        mov dword ptr ds : [ebx+0xC], edi
        public_6f34750 : nop
        push 0x60
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], 3
        je public_6f34780
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        mov ecx, eax
        call public_6f22d30
        mov dword ptr ds : [ebx+0xC], eax
        jmp public_6f34783
        public_6f34780 : nop
        mov dword ptr ds : [ebx+0xC], edi
        public_6f34783 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6f346a0)
    }
}

#undef public_6f346e1
#undef public_6f346ef
#undef public_6f34750
#undef public_6f34780
#undef public_6f34783
