#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_44ced0);
CLANG_FORWARD_PROC_SYMBOL(public_44d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_44d310);
CLANG_FORWARD_PROC_SYMBOL(public_44d410);
CLANG_FORWARD_PROC_SYMBOL(public_44d540);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9ca2);

#define public_44cefc _public_44cefc
#define public_44cf11 _public_44cf11
#define public_44cf1c _public_44cf1c
#define public_44cf89 _public_44cf89
#define public_44cf9d _public_44cf9d
#define public_44cfcc _public_44cfcc
#define public_44d008 _public_44d008
#define public_44d056 _public_44d056
#define public_44d067 _public_44d067
#define public_44d09c _public_44d09c
#define public_44d0ad _public_44d0ad
#define public_44d0d5 _public_44d0d5
#define public_44d0d7 _public_44d0d7
#define public_44d0e4 _public_44d0e4
#define public_44d104 _public_44d104
#define public_44d12f _public_44d12f
#define public_44d16b _public_44d16b
#define public_44d171 _public_44d171

PROC_DECLARE(0x44ced0, internal_44ced0, public_44ced0);
extern "C" NAKED register_t __cdecl internal_44ced0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9ca2 @0x44ced8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9ca2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov dword ptr ds : [edi+0x13A8], esi
        mov dword ptr ds : [edi+0x1334], esi
        public_44cefc : nop
        mov eax, dword ptr ds : [edi+0x40]
        mov edx, dword ptr ds : [eax+0x198]
        test edx, edx
        mov dword ptr ss : [esp+0x10], esi
        jne public_44cf11
        xor ecx, ecx
        jmp public_44cf1c
        public_44cf11 : nop
        mov ecx, dword ptr ds : [eax+0x19C]
        sub ecx, edx
        sar ecx, 2
        public_44cf1c : nop
        cmp esi, ecx
        jge public_44d171
        mov eax, dword ptr ds : [eax+0x198]
        mov ebp, dword ptr ds : [eax+esi*4]
        mov ebx, dword ptr ss : [ebp+0x10]
        cmp ebx, 1
        mov eax, dword ptr ds : [edi+0x1334]
        mov dword ptr ds : [edi+eax*4+0x1134], 0
        jne public_44cf9d
        push 0x18
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x20], 0
        je public_44cf89
        mov ecx, esi
        call public_44d2c0
        xor eax, eax
        mov dword ptr ds : [esi], offset public_5cc068
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x1334]
        mov dword ptr ds : [edi+ecx*4+0x1134], esi
        jmp public_44d0e4
        public_44cf89 : nop
        mov ecx, dword ptr ds : [edi+0x1334]
        xor esi, esi
        mov dword ptr ds : [edi+ecx*4+0x1134], esi
        jmp public_44d0e4
        public_44cf9d : nop
        cmp ebx, 2
        jne public_44cfcc
        push 0xC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_44d0d5
        mov ecx, eax
        call public_44d410
        jmp public_44d0d7
        public_44cfcc : nop
        cmp ebx, 3
        jne public_44d008
        push 0xC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 2
        je public_44d09c
        mov ecx, eax
        call public_44d540
        mov ecx, dword ptr ds : [edi+0x1334]
        mov dword ptr ds : [edi+ecx*4+0x1134], eax
        jmp public_44d0e4
        public_44d008 : nop
        cmp ebx, 4
        jne public_44d067
        push 0x18
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x20], 3
        je public_44d056
        mov ecx, esi
        call public_44d2c0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi], offset public_5cc058
        mov dword ptr ds : [esi+0x10], 1
        mov edx, dword ptr ds : [edi+0x1334]
        mov dword ptr ds : [edi+edx*4+0x1134], esi
        jmp public_44d0e4
        public_44d056 : nop
        mov edx, dword ptr ds : [edi+0x1334]
        xor esi, esi
        mov dword ptr ds : [edi+edx*4+0x1134], esi
        jmp public_44d0e4
        public_44d067 : nop
        cmp ebx, 5
        jne public_44d0ad
        push 0xC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 4
        je public_44d09c
        mov ecx, eax
        call public_44d2c0
        mov ecx, dword ptr ds : [edi+0x1334]
        mov dword ptr ds : [edi+ecx*4+0x1134], eax
        jmp public_44d0e4
        public_44d09c : nop
        mov ecx, dword ptr ds : [edi+0x1334]
        xor eax, eax
        mov dword ptr ds : [edi+ecx*4+0x1134], eax
        jmp public_44d0e4
        public_44d0ad : nop
        cmp ebx, 6
        jne public_44d12f
        push 0xC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x20], 5
        je public_44d0d5
        mov ecx, eax
        call public_44d2c0
        jmp public_44d0d7
        public_44d0d5 : nop
        xor eax, eax
        public_44d0d7 : nop
        mov edx, dword ptr ds : [edi+0x1334]
        mov dword ptr ds : [edi+edx*4+0x1134], eax
        public_44d0e4 : nop
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_44d104
        mov eax, dword ptr ds : [edi+0x34]
        push ecx
        push eax
        mov ecx, offset public_668708
        call public_43a4f0
        public_44d104 : nop
        push ebx
        push eax
        mov eax, dword ptr ds : [edi+0x1334]
        mov ecx, dword ptr ds : [edi+eax*4+0x1134]
        call public_44d310
        mov eax, dword ptr ds : [edi+0x1334]
        mov esi, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ds : [edi+0x1334], eax
        inc esi
        jmp public_44cefc
        public_44d12f : nop
        cmp ebx, 7
        je public_44d16b
        cmp ebx, 8
        je public_44d16b
        cmp ebx, 9
        je public_44d16b
        cmp ebx, 0xA
        je public_44d16b
        cmp ebx, 0xB
        je public_44d16b
        cmp ebx, 0xC
        je public_44d16b
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x5B
/*FIXUP push offset public_5cc01c @0x44d156*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc01c
        mov eax, 0x100002
/*FIXUP push offset public_5cbfe4 @0x44d160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbfe4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_44d16b : nop
        inc esi
        jmp public_44cefc
        public_44d171 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x44ced0)
    }
}

#undef public_44cefc
#undef public_44cf11
#undef public_44cf1c
#undef public_44cf89
#undef public_44cf9d
#undef public_44cfcc
#undef public_44d008
#undef public_44d056
#undef public_44d067
#undef public_44d09c
#undef public_44d0ad
#undef public_44d0d5
#undef public_44d0d7
#undef public_44d0e4
#undef public_44d104
#undef public_44d12f
#undef public_44d16b
#undef public_44d171
