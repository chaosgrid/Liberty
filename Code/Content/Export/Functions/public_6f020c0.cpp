#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f02aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facbb8);

#define public_6f02161 _public_6f02161
#define public_6f021c4 _public_6f021c4
#define public_6f021d0 _public_6f021d0
#define public_6f021da _public_6f021da
#define public_6f021e0 _public_6f021e0
#define public_6f021ef _public_6f021ef
#define public_6f02209 _public_6f02209
#define public_6f0221e _public_6f0221e
#define public_6f02230 _public_6f02230
#define public_6f02249 _public_6f02249
#define public_6f02252 _public_6f02252
#define public_6f02259 _public_6f02259
#define public_6f02273 _public_6f02273
#define public_6f02280 _public_6f02280
#define public_6f02286 _public_6f02286
#define public_6f0228b _public_6f0228b
#define public_6f0228d _public_6f0228d
#define public_6f022a6 _public_6f022a6
#define public_6f022b6 _public_6f022b6
#define public_6f022c6 _public_6f022c6
#define public_6f022dc _public_6f022dc
#define public_6f022e8 _public_6f022e8
#define public_6f02315 _public_6f02315
#define public_6f02317 _public_6f02317

PROC_DECLARE(0x6f020c0, internal_6f020c0, public_6f020c0);
extern "C" NAKED register_t __cdecl internal_6f020c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facbb8 @0x6f020c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facbb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        xor eax, eax
        push esi
        cmp ebp, 1
        setne al
        xor ecx, ecx
        push edi
        xor edi, edi
        cmp ebx, edi
        setne cl
        lea eax, ds:[eax+edx*2]
        lea edx, ss:[esp+0x38]
        lea ecx, ds:[ecx+eax*2]
        shl ecx, 4
        mov dword ptr ss : [esp+0x30], ecx
        lea ebp, ds : [ecx+public_6fcf478]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edx
        mov ecx, offset public_6fd04f8
        call public_6f7b0f0
        mov ebx, dword ptr ss : [esp+0x38]
        cmp ebx, dword ptr ds : [public_6fd04fc]
        je public_6f022a6
        mov al, byte ptr ss : [esp+0x34]
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], edi
        je public_6f021c4
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 4
        cmp esi, edi
        jbe public_6f021c4
        mov eax, esi
        jge public_6f02161
        xor eax, eax
        public_6f02161 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        push edx
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+esi*4]
        mov dword ptr ss : [esp+0x20], ecx
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call public_6fa3db0
        lea edx, ds:[edi+eax*4]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edx
        xor edi, edi
        public_6f021c4 : nop
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x34], ecx
        je public_6f02230
        public_6f021d0 : nop
        mov esi, dword ptr ds : [ebx+0x14]
        cmp esi, dword ptr ds : [ebx+0x18]
        je public_6f02209
        jmp public_6f021e0
        public_6f021da : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edi, edi
        public_6f021e0 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        mov edx, dword ptr ds : [esi+8]
        jne public_6f021ef
        mov eax, offset public_6fb8014
        public_6f021ef : nop
        push edx
        push eax
        mov eax, dword ptr ds : [ecx+8]
        push eax
        push edi
        call public_6f02aa0
        test eax, eax
        je public_6f0221e
        mov eax, dword ptr ds : [ebx+0x18]
        add esi, 0x10
        cmp esi, eax
        jne public_6f021da
        public_6f02209 : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x34]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6f937c0
        public_6f0221e : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [ebp+8]
        add ecx, 0x10
        cmp ecx, eax
        mov dword ptr ss : [esp+0x34], ecx
        jne public_6f021d0
        public_6f02230 : nop
        lea ecx, ss:[esp+0x10]
        call public_6fa3db0
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        je public_6f02286
        cmp ecx, edi
        jne public_6f02249
        xor esi, esi
        jmp public_6f02252
        public_6f02249 : nop
        mov esi, dword ptr ss : [esp+0x18]
        sub esi, ecx
        sar esi, 2
        public_6f02252 : nop
        dec esi
        jne public_6f02259
        xor eax, eax
        jmp public_6f02273
        public_6f02259 : nop
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x14]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f02273 : nop
        cmp eax, edi
        mov edx, ecx
        jbe public_6f02280
        lea edx, ds:[ecx+eax*4]
        lea esp, ss:[esp]
        public_6f02280 : nop
        cmp edx, dword ptr ss : [esp+0x18]
        jne public_6f0228b
        public_6f02286 : nop
        mov edx, dword ptr ss : [ebp+8]
        jmp public_6f0228d
        public_6f0228b : nop
        mov edx, dword ptr ds : [edx]
        public_6f0228d : nop
        push ecx
        mov esi, edx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        jmp public_6f022e8
        public_6f022a6 : nop
        mov ecx, ebp
        call public_6ead810
        test eax, eax
        jne public_6f022b6
        mov esi, dword ptr ss : [ebp+8]
        jmp public_6f022e8
        public_6f022b6 : nop
        mov ecx, ebp
        call public_6ead810
        mov esi, eax
        dec esi
        jne public_6f022c6
        xor eax, eax
        jmp public_6f022dc
        public_6f022c6 : nop
        call dword ptr ds : [public_6fb3370]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f022dc : nop
        cmp eax, edi
        mov esi, dword ptr ss : [ebp+4]
        jbe public_6f022e8
        shl eax, 4
        add esi, eax
        public_6f022e8 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp esi, dword ptr ds : [eax+public_6fcf480]
        je public_6f02315
        mov esi, dword ptr ds : [esi+4]
        cmp esi, edi
        mov eax, offset public_6fb8014
        je public_6f02317
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6f02315 : nop
        xor eax, eax
        public_6f02317 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f020c0)
    }
}

#undef public_6f02161
#undef public_6f021c4
#undef public_6f021d0
#undef public_6f021da
#undef public_6f021e0
#undef public_6f021ef
#undef public_6f02209
#undef public_6f0221e
#undef public_6f02230
#undef public_6f02249
#undef public_6f02252
#undef public_6f02259
#undef public_6f02273
#undef public_6f02280
#undef public_6f02286
#undef public_6f0228b
#undef public_6f0228d
#undef public_6f022a6
#undef public_6f022b6
#undef public_6f022c6
#undef public_6f022dc
#undef public_6f022e8
#undef public_6f02315
#undef public_6f02317
