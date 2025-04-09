#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a9990);
CLANG_FORWARD_PROC_SYMBOL(public_5aa210);
CLANG_FORWARD_PROC_SYMBOL(public_5ae7a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c55c8);

#define public_5a9a71 _public_5a9a71
#define public_5a9acd _public_5a9acd
#define public_5a9adc _public_5a9adc
#define public_5a9ae5 _public_5a9ae5
#define public_5a9b25 _public_5a9b25
#define public_5a9b57 _public_5a9b57
#define public_5a9b9b _public_5a9b9b
#define public_5a9ba4 _public_5a9ba4
#define public_5a9ba7 _public_5a9ba7
#define public_5a9bc4 _public_5a9bc4

PROC_DECLARE(0x5a9990, internal_5a9990, public_5a9990);
extern "C" NAKED register_t __cdecl internal_5a9990()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c55c8 @0x5a9998*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c55c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2424
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ebx, ds:[esi+0xD8]
        push ebx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c7048]
        lea edi, ds:[esi+0x94]
        push edi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2440], 0
        call dword ptr ds : [public_5c7048]
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2440], 1
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x2440], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fb8]
        mov al, byte ptr ss : [esp+0x2444]
        test al, al
        je public_5a9a71
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        je public_5a9a71
        mov eax, dword ptr ds : [public_673344]
        test eax, eax
        je public_5a9a71
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        call dword ptr ds : [edx+0x40]
        mov byte ptr ds : [public_67ecbe], 0
        mov byte ptr ds : [public_67ecbf], 0
        lea ecx, ds:[esi+0x1B4]
        mov byte ptr ds : [esi+0x184], 0
        mov byte ptr ds : [esi+0x1B0], 0
        mov byte ptr ds : [esi+0x1D4], 0
        call public_5ae7a0
        mov byte ptr ds : [esi+0x21C], 0
        public_5a9a71 : nop
        lea eax, ds:[esi+0x184]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [eax], 0
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_5a9acd
/*FIXUP push offset public_5e6598 @0x5a9a88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6598
        push 0x15F
/*FIXUP push offset public_5e656c @0x5a9a92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e656c
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x5a9a9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov ecx, esi
        call public_5aa210
/*FIXUP push offset public_5e6560 @0x5a9ab3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6560
        lea ecx, ss:[esp+0x38]
/*FIXUP push offset public_5e552c @0x5a9abc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e552c
        push ecx
        call dword ptr ds : [public_5c71ec]
        jmp public_5a9ba4
        public_5a9acd : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov edx, dword ptr ds : [public_5c700c]
        jne public_5a9adc
        mov ecx, edx
        public_5a9adc : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_5a9ae5
        mov eax, edx
        public_5a9ae5 : nop
        push ecx
        push eax
        lea edx, ss:[esp+0x43C]
/*FIXUP push offset public_5e6540 @0x5a9aee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6540
        push edx
        call public_402180
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x165
/*FIXUP push offset public_5e656c @0x5a9b04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e656c
        mov ecx, 0x100003
/*FIXUP push offset public_5cf094 @0x5a9b0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push ecx
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+4]
        add esp, 0x24
        test eax, eax
        jne public_5a9b25
        mov eax, dword ptr ds : [public_5c700c]
        public_5a9b25 : nop
        mov edi, dword ptr ds : [public_5c71ec]
        push eax
        lea ecx, ss:[esp+0x38]
/*FIXUP push offset public_5e6534 @0x5a9b30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6534
        push ecx
        call edi
        lea ebx, ss:[esp+eax+0x40]
        mov eax, dword ptr ds : [esi+0xA8]
        add esp, 0xC
        test eax, eax
        jne public_5a9b9b
        mov ebp, dword ptr ds : [esi+0xB0]
        cmp ebp, dword ptr ds : [esi+0xB4]
        je public_5a9ba7
        public_5a9b57 : nop
        mov edx, dword ptr ss : [ebp]
        push edx
/*FIXUP push offset public_5e6530 @0x5a9b5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6530
        push ebx
        call edi
        add ebx, eax
        mov eax, dword ptr ds : [esi+0xB4]
        add ebp, 4
        add esp, 0xC
        cmp ebp, eax
        je public_5a9ba7
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, ebx
        repne scasb
        mov ax, word ptr ds : [public_5e652c]
        mov word ptr ds : [edi-1], ax
        mov eax, dword ptr ds : [esi+0xB4]
        mov edi, dword ptr ds : [public_5c71ec]
        inc ebx
        cmp ebp, eax
        jne public_5a9b57
        jmp public_5a9ba7
        public_5a9b9b : nop
        push eax
/*FIXUP push offset public_5e6530 @0x5a9b9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6530
        push ebx
        call edi
        public_5a9ba4 : nop
        add esp, 0xC
        public_5a9ba7 : nop
        mov ecx, dword ptr ds : [esi+0x138]
        xor eax, eax
        test ecx, ecx
        je public_5a9bc4
        mov esi, dword ptr ds : [esi+0x134]
        test esi, esi
        mov eax, dword ptr ds : [public_5c700c]
        je public_5a9bc4
        mov eax, esi
        public_5a9bc4 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [edx+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        push 0x42700000
        push 0x40A00000
        push ecx
        call public_5a89b0
        mov ecx, dword ptr ss : [esp+0x2440]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2430
        ret 4
        UNREACHABLE_TRAP(0x5a9990)
    }
}

#undef public_5a9a71
#undef public_5a9acd
#undef public_5a9adc
#undef public_5a9ae5
#undef public_5a9b25
#undef public_5a9b57
#undef public_5a9b9b
#undef public_5a9ba4
#undef public_5a9ba7
#undef public_5a9bc4
