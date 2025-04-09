#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579a60);
CLANG_FORWARD_PROC_SYMBOL(public_57b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_59a110);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4be2);

#define public_599fe5 _public_599fe5
#define public_59a029 _public_59a029
#define public_59a055 _public_59a055
#define public_59a073 _public_59a073
#define public_59a086 _public_59a086
#define public_59a08f _public_59a08f
#define public_59a0d6 _public_59a0d6
#define public_59a0e0 _public_59a0e0
#define public_59a0e7 _public_59a0e7

PROC_DECLARE(0x599f60, internal_599f60, public_599f60);
extern "C" NAKED register_t __cdecl internal_599f60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4be2 @0x599f62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4be2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        push edi
        push 0
        push eax
        mov ebp, ecx
        call public_57b5a0
        mov edi, dword ptr ss : [esp+0x3C]
        test edi, edi
        mov byte ptr ss : [ebp+0x498], 1
        mov ecx, dword ptr ds : [public_67dbac]
        mov byte ptr ss : [esp+0x38], al
        mov dword ptr ss : [ebp+0x4C0], ecx
        je public_59a08f
        fld dword ptr ds : [edi]
        fst dword ptr ss : [ebp+0x49C]
        fstp dword ptr ss : [ebp+0x330]
        fld dword ptr ds : [edi+4]
        fst dword ptr ss : [ebp+0x4A0]
        fstp dword ptr ss : [ebp+0x334]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_599fe5
        lea edx, ss:[ebp+0x4B4]
        push edx
        push eax
        call public_57da40
        add esp, 8
        jmp public_59a086
        public_599fe5 : nop
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x40], eax
        mov esi, dword ptr ss : [ebp+0x4B8]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        mov byte ptr ss : [esp+0x38], 1
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_59a029
        mov ebx, eax
        public_59a029 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov ebx, dword ptr ss : [esp+0x40]
        mov byte ptr ss : [esp+0x34], 2
        je public_59a055
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [esi], eax
        public_59a055 : nop
        mov ecx, dword ptr ss : [ebp+0x4BC]
        inc ecx
        test ebx, ebx
        mov dword ptr ss : [ebp+0x4BC], ecx
        mov byte ptr ss : [esp+0x34], 0
        je public_59a073
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_59a073 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        pop ebx
        public_59a086 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0x4A4], eax
        public_59a08f : nop
        push 2
        mov ecx, ebp
        call public_579a60
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_59a0e7
        mov edi, offset public_5e54c0
        mov esi, eax
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        je public_59a0e7
        xor edx, edx
        mov edi, offset public_5e57e0
        mov esi, eax
        mov ecx, 0xA
        repe cmpsb
        mov ecx, ebp
        push edx
        jne public_59a0d6
        mov eax, dword ptr ss : [ebp]
/*FIXUP push offset public_5d4f58 @0x59a0c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f58
        call dword ptr ds : [eax+0x98]
        jmp public_59a0e0
        public_59a0d6 : nop
        mov edx, dword ptr ss : [ebp]
        push eax
        call dword ptr ds : [edx+0x98]
        public_59a0e0 : nop
        mov byte ptr ss : [ebp+0x2D2], 1
        public_59a0e7 : nop
        mov ecx, ebp
        call public_59a110
        mov ecx, dword ptr ss : [esp+0x28]
        mov al, byte ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x599f60)
    }
}

#undef public_599fe5
#undef public_59a029
#undef public_59a055
#undef public_59a073
#undef public_59a086
#undef public_59a08f
#undef public_59a0d6
#undef public_59a0e0
#undef public_59a0e7
