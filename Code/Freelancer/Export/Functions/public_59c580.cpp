#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4d62);

#define public_59c625 _public_59c625
#define public_59c627 _public_59c627
#define public_59c667 _public_59c667

PROC_DECLARE(0x59c580, internal_59c580, public_59c580);
extern "C" NAKED register_t __cdecl internal_59c580()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4d62 @0x59c582*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4d62
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        push 0x4C8
        mov ebp, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_59c625
        push edi
        mov ecx, esi
        call public_57b1b0
        mov al, byte ptr ss : [esp+0x24]
        lea edi, ds:[esi+0x4A8]
        push 0
        push 0
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov cl, byte ptr ss : [esp+0x24]
        push 0xC
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi+0x4B4], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x4B8], eax
        mov dword ptr ds : [esi+0x4BC], 0
        mov dword ptr ds : [esi], offset public_5e5af4
        mov dword ptr ds : [esi+0x7C], offset public_5e5ae4
        pop edi
        jmp public_59c627
        public_59c625 : nop
        xor esi, esi
        public_59c627 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        add ebp, 0xC
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebp
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_59c667
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        xor eax, eax
        pop ebp
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_59c667 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x59c580)
    }
}

#undef public_59c625
#undef public_59c627
#undef public_59c667
