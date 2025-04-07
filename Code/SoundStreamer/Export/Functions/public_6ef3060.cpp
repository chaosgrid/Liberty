#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1120);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1200);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1560);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1d10);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2910);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2df0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3910);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef46b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);

#define public_6ef308b _public_6ef308b
#define public_6ef311c _public_6ef311c
#define public_6ef313b _public_6ef313b
#define public_6ef3157 _public_6ef3157
#define public_6ef3159 _public_6ef3159
#define public_6ef31f8 _public_6ef31f8
#define public_6ef3206 _public_6ef3206
#define public_6ef3215 _public_6ef3215
#define public_6ef3223 _public_6ef3223
#define public_6ef3259 _public_6ef3259
#define public_6ef3268 _public_6ef3268
#define public_6ef3276 _public_6ef3276
#define public_6ef3279 _public_6ef3279

PROC_DECLARE(0x6ef3060, internal_6ef3060, public_6ef3060);
extern "C" NAKED register_t __cdecl internal_6ef3060()
{
    __asm
    {
        mov eax, 0x203C
        call public_6ef46b0
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2048]
        mov eax, dword ptr ss : [ebp+0x60]
        test eax, eax
        push esi
        push edi
        jne public_6ef308b
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x203C
        ret 0x10
        public_6ef308b : nop
        mov esi, dword ptr ss : [esp+0x2058]
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        jne public_6ef311c
        mov edx, dword ptr ss : [esp+0x2054]
        xor eax, eax
        test edx, edx
        je public_6ef3279
        mov dword ptr ss : [esp+0x1C], offset public_6efe188
        mov ecx, 0xB
        lea edi, ss:[esp+0x20]
        rep stosd
        mov dword ptr ss : [esp+0x28], 0x80000000
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x34], 3
        mov dword ptr ss : [esp+0x38], 0x8000080
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x18], 0x34
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call dword ptr ds : [public_6efc000]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6ef31f8
        mov esi, dword ptr ss : [esp+0x10]
        xor edi, edi
        jmp public_6ef313b
        public_6ef311c : nop
        mov edi, dword ptr ss : [esp+0x2054]
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x70]
        cmp eax, 0xFFFFFFFF
        je public_6ef3268
        test al, 0x10
        jne public_6ef3268
        public_6ef313b : nop
        push 0x110
        call public_6ef4a65
        add esp, 4
        test eax, eax
        je public_6ef3157
        push esi
        push edi
        mov ecx, eax
        call public_6ef1200
        jmp public_6ef3159
        public_6ef3157 : nop
        xor eax, eax
        public_6ef3159 : nop
        mov ebx, dword ptr ss : [esp+0x205C]
        mov ecx, ebx
        shr ecx, 1
        and cl, 1
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ds : [eax+0x85], cl
        mov ecx, ebp
        call public_6ef2de0
        push ecx
        fstp dword ptr ss : [esp]
        call public_6ef2df0
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        call public_6ef1560
        test al, al
        jne public_6ef3215
        push edi
        lea edx, ss:[esp+0x50]
/*FIXUP push offset public_6efe398 @0x6ef3198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe398
        push edx
        call public_6ef2910
        push eax
        mov eax, dword ptr ds : [public_6efc004]
        push 0x254
/*FIXUP push offset public_6efe320 @0x6ef31ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        mov ecx, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef31b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push ecx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0x20
        test ecx, ecx
        mov esi, ecx
        je public_6ef31f8
        call public_6ef1120
        lea ecx, ds:[esi+0xB8]
        call public_6ef3910
        lea ecx, ds:[esi+0xA8]
        call public_6ef3ea0
        mov ecx, esi
        call public_6ef3ec0
        push esi
        call public_6ef4507
        add esp, 4
        public_6ef31f8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ef3206
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ef3206 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x203C
        ret 0x10
        public_6ef3215 : nop
        test bl, 1
        je public_6ef3223
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6ef1d10
        public_6ef3223 : nop
        lea esi, ss:[ebp+0x20]
        push esi
        call dword ptr ds : [public_6efc050]
        mov eax, dword ptr ss : [ebp+0x50]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[ebp+0x48]
        push 1
        push eax
        call public_6ef3960
        push esi
        call dword ptr ds : [public_6efc04c]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov esi, dword ptr ss : [esp+0x14]
        je public_6ef3259
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ef3259 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x203C
        ret 0x10
        public_6ef3268 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ef3276
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ef3276 : nop
        or eax, 0xFFFFFFFF
        public_6ef3279 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x203C
        ret 0x10
        UNREACHABLE_TRAP(0x6ef3060)
    }
}

#undef public_6ef308b
#undef public_6ef311c
#undef public_6ef313b
#undef public_6ef3157
#undef public_6ef3159
#undef public_6ef31f8
#undef public_6ef3206
#undef public_6ef3215
#undef public_6ef3223
#undef public_6ef3259
#undef public_6ef3268
#undef public_6ef3276
#undef public_6ef3279
