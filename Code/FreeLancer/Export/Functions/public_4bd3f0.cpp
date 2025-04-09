#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55dec0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd4a3);

#define public_4bd459 _public_4bd459
#define public_4bd45b _public_4bd45b
#define public_4bd49b _public_4bd49b

PROC_DECLARE(0x4bd3f0, internal_4bd3f0, public_4bd3f0);
extern "C" NAKED register_t __cdecl internal_4bd3f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd4a3 @0x4bd3f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd4a3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push 0x350
        mov ebx, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_4bd459
        push edi
        mov ecx, esi
        call public_59f860
        lea edi, ds:[esi+0x32C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        call public_55dec0
        mov dword ptr ds : [edi], offset public_5d5f64
        mov dword ptr ds : [esi], offset public_5d5eac
        mov dword ptr ds : [esi+0x7C], offset public_5d5ea0
        pop edi
        jmp public_4bd45b
        public_4bd459 : nop
        xor esi, esi
        public_4bd45b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add ebx, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebx
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_4bd49b
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_4bd49b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4bd3f0)
    }
}

#undef public_4bd459
#undef public_4bd45b
#undef public_4bd49b
