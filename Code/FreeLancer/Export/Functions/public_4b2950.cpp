#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd01b);

#define public_4b2a7a _public_4b2a7a
#define public_4b2a7c _public_4b2a7c
#define public_4b2abd _public_4b2abd

PROC_DECLARE(0x4b2950, internal_4b2950, public_4b2950);
extern "C" NAKED register_t __cdecl internal_4b2950()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd01b @0x4b2952*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd01b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x980
        mov ebx, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_4b2a7a
        mov ecx, esi
        call public_59f860
        mov al, byte ptr ss : [esp+0x24]
        mov cl, byte ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+0x504], al
        mov al, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x508], edi
        mov dword ptr ds : [esi+0x50C], edi
        mov dword ptr ds : [esi+0x510], edi
        mov byte ptr ds : [esi+0x514], cl
        mov cl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x518], edi
        mov dword ptr ds : [esi+0x51C], edi
        mov dword ptr ds : [esi+0x520], edi
        mov byte ptr ds : [esi+0x524], dl
        mov dl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x528], edi
        mov dword ptr ds : [esi+0x52C], edi
        mov dword ptr ds : [esi+0x530], edi
        mov byte ptr ds : [esi+0x534], al
        mov dword ptr ds : [esi+0x538], edi
        mov dword ptr ds : [esi+0x53C], edi
        mov dword ptr ds : [esi+0x540], edi
        mov byte ptr ds : [esi+0x544], cl
        mov dword ptr ds : [esi+0x548], edi
        mov dword ptr ds : [esi+0x54C], edi
        mov dword ptr ds : [esi+0x550], edi
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[esi+0x7FC]
        mov byte ptr ds : [esi+0x554], dl
        mov dword ptr ds : [esi+0x558], edi
        mov dword ptr ds : [esi+0x55C], edi
        mov dword ptr ds : [esi+0x560], edi
        call public_5a6900
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ds:[esi+0x80C]
        call public_5a6900
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ds:[esi+0x81C]
        call public_5a6900
        mov dword ptr ds : [esi], offset public_5d4a5c
        mov dword ptr ds : [esi+0x7C], offset public_5d4a4c
        jmp public_4b2a7c
        public_4b2a7a : nop
        xor esi, esi
        public_4b2a7c : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        add ebx, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebx
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_4b2abd
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
        public_4b2abd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4b2950)
    }
}

#undef public_4b2a7a
#undef public_4b2a7c
#undef public_4b2abd
