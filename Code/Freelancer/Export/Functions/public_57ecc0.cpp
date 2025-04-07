#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5793e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4183);

#define public_57ed4b _public_57ed4b
#define public_57ed4d _public_57ed4d
#define public_57ed8e _public_57ed8e

PROC_DECLARE(0x57ecc0, internal_57ecc0, public_57ecc0);
extern "C" NAKED register_t __cdecl internal_57ecc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4183 @0x57ecc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4183
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x498
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_57ed4b
        mov ecx, esi
        call public_5793e0
        mov al, byte ptr ss : [esp+0x24]
        push 0xC
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0x488], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x48C], eax
        mov dword ptr ds : [esi+0x490], ebx
        add esp, 4
        mov dword ptr ds : [esi], offset public_5e476c
        mov dword ptr ds : [esi+0x7C], offset public_5e4760
        mov byte ptr ds : [esi+0x401], bl
        mov byte ptr ds : [esi+0x400], bl
        mov byte ptr ds : [esi+0x494], 1
        jmp public_57ed4d
        public_57ed4b : nop
        xor esi, esi
        public_57ed4d : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        add edi, 0xC
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_57ed8e
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_57ed8e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x57ecc0)
    }
}

#undef public_57ed4b
#undef public_57ed4d
#undef public_57ed8e
