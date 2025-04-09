#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402f40);
CLANG_FORWARD_PROC_SYMBOL(public_403160);
CLANG_FORWARD_PROC_SYMBOL(public_403190);
CLANG_FORWARD_PROC_SYMBOL(public_404d50);
CLANG_FORWARD_PROC_SYMBOL(public_404d90);
CLANG_FORWARD_PROC_SYMBOL(public_404f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b83c1);

#define public_402fe0 _public_402fe0
#define public_403001 _public_403001
#define public_403020 _public_403020
#define public_40303c _public_40303c
#define public_403040 _public_403040
#define public_40304e _public_40304e
#define public_403053 _public_403053
#define public_403069 _public_403069
#define public_4030c0 _public_4030c0
#define public_4030d1 _public_4030d1
#define public_4030e7 _public_4030e7
#define public_40310d _public_40310d
#define public_40310f _public_40310f
#define public_40311c _public_40311c
#define public_40313e _public_40313e
#define public_403143 _public_403143

PROC_DECLARE(0x402f40, internal_402f40, public_402f40);
extern "C" NAKED register_t __cdecl internal_402f40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b83c1 @0x402f48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b83c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_616498]
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        push ebx
        push ebp
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        jne public_403143
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x50], ebp
        mov eax, dword ptr ds : [public_616474]
        mov ecx, 0xD
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x94], ebx
        rep movsd
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_616478
        mov byte ptr ss : [esp+0x9C], 1
        call public_404f20
        lea eax, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x94], 2
        lea esp, ss:[esp]
        public_402fe0 : nop
        mov eax, dword ptr ss : [esp+0x64]
        cmp eax, ebx
        mov esi, eax
        je public_403001
        push eax
        lea ecx, ss:[esp+0x68]
        call public_404d90
        push ebx
        push esi
        lea ecx, ss:[esp+0x60]
        call public_404d50
        jmp public_402fe0
        public_403001 : nop
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x94], bl
        call public_403190
        mov dword ptr ss : [esp+0x94], 3
        lea esp, ss:[esp]
        public_403020 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        mov esi, eax
        je public_403069
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        lea edx, ds:[eax+4]
        jne public_40303c
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], ecx
        jmp public_403040
        public_40303c : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], eax
        public_403040 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_40304e
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], ecx
        jmp public_403053
        public_40304e : nop
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+4], edx
        public_403053 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push ebx
        dec edx
        push esi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], edx
        call public_404d50
        jmp public_403020
        public_403069 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x94], ebp
        call public_403190
        mov eax, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ss : [esp+0x1C]
        add eax, 0x10
        cmp cl, bl
        mov dword ptr ds : [public_616498], eax
        je public_403143
        lea edx, ds:[eax+0x1C]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, ebx
        mov ecx, 5
        mov esi, offset public_6101d8
        mov edi, edx
        mov dword ptr ss : [esp+0x10], edx
        rep movsd
        je public_4030d1
        mov ecx, dword ptr ds : [edx]
        cmp dword ptr ds : [eax+0x20], ecx
        je public_4030d1
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x18], eax
        je public_4030d1
        public_4030c0 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        cmp dword ptr ds : [eax+0x20], ecx
        je public_4030d1
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x18], eax
        jne public_4030c0
        public_4030d1 : nop
        cmp dword ptr ss : [ebp+0x18], ebx
        jne public_40313e
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebx
        je public_4030e7
        push esi
        mov ecx, ebp
        call public_404d90
        jmp public_40311c
        public_4030e7 : nop
        push 0x28
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x94], 4
        je public_40310d
        mov ecx, eax
        call public_403160
        jmp public_40310f
        public_40310d : nop
        xor eax, eax
        public_40310f : nop
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        mov esi, eax
        public_40311c : nop
        push ebx
        push esi
        lea ecx, ss:[ebp+0xC]
        mov dword ptr ss : [ebp+0x18], esi
        call public_404d50
        mov ebp, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+0x20], edx
        mov dword ptr ss : [ebp+0x24], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+0x18], ebx
        public_40313e : nop
        mov eax, dword ptr ds : [public_616498]
        public_403143 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x402f40)
    }
}

#undef public_402fe0
#undef public_403001
#undef public_403020
#undef public_40303c
#undef public_403040
#undef public_40304e
#undef public_403053
#undef public_403069
#undef public_4030c0
#undef public_4030d1
#undef public_4030e7
#undef public_40310d
#undef public_40310f
#undef public_40311c
#undef public_40313e
#undef public_403143
