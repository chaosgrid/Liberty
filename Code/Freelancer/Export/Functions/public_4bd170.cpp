#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd47b);

#define public_4bd1ee _public_4bd1ee
#define public_4bd1f0 _public_4bd1f0
#define public_4bd231 _public_4bd231

PROC_DECLARE(0x4bd170, internal_4bd170, public_4bd170);
extern "C" NAKED register_t __cdecl internal_4bd170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd47b @0x4bd172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd47b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x340
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_4bd1ee
        mov ecx, esi
        call public_59f860
        mov dword ptr ds : [esi], offset public_5d5a8c
        mov dword ptr ds : [esi+0x7C], offset public_5d5a80
        mov dword ptr ds : [public_672400], esi
        mov dword ptr ds : [esi+0x32C], ebx
        mov byte ptr ds : [esi+0x331], 1
        mov byte ptr ds : [esi+0x332], 0xFF
        mov dword ptr ds : [esi+0x334], 0x40200000
        mov byte ptr ds : [esi+0x330], bl
        mov byte ptr ds : [esi+0x338], bl
        jmp public_4bd1f0
        public_4bd1ee : nop
        xor esi, esi
        public_4bd1f0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_4bd231
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_4bd231 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4bd170)
    }
}

#undef public_4bd1ee
#undef public_4bd1f0
#undef public_4bd231
