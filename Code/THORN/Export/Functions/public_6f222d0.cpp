#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f222d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23630);
CLANG_FORWARD_PROC_SYMBOL(public_6f23de0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24130);
CLANG_FORWARD_PROC_SYMBOL(public_6f24140);
CLANG_FORWARD_PROC_SYMBOL(public_6f247d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24800);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58428);

#define public_6f2230e _public_6f2230e
#define public_6f22317 _public_6f22317
#define public_6f2231d _public_6f2231d
#define public_6f22340 _public_6f22340
#define public_6f22358 _public_6f22358
#define public_6f22377 _public_6f22377
#define public_6f22380 _public_6f22380
#define public_6f223ba _public_6f223ba
#define public_6f223c1 _public_6f223c1
#define public_6f223cc _public_6f223cc
#define public_6f223d4 _public_6f223d4
#define public_6f223e0 _public_6f223e0
#define public_6f223ee _public_6f223ee
#define public_6f22402 _public_6f22402
#define public_6f2245a _public_6f2245a
#define public_6f22484 _public_6f22484
#define public_6f224ac _public_6f224ac
#define public_6f224af _public_6f224af

PROC_DECLARE(0x6f222d0, internal_6f222d0, public_6f222d0);
extern "C" NAKED register_t __cdecl internal_6f222d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58428 @0x6f222d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58428
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x48]
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        shl edi, 4
        mov al, byte ptr ds : [edi+esi]
        lea ebx, ds:[edi+esi+4]
        mov dword ptr ss : [esp+0xC], ecx
        mov byte ptr ss : [esp+0x10], al
        mov ecx, dword ptr ds : [ebx]
        test ecx, ecx
        jne public_6f2230e
        xor eax, eax
        jmp public_6f22317
        public_6f2230e : nop
        mov eax, dword ptr ds : [edi+esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f22317 : nop
        test eax, eax
        jge public_6f2231d
        xor eax, eax
        public_6f2231d : nop
        lea ecx, ds:[eax*4]
        push ebp
        push ecx
        call public_6f57e9c
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, dword ptr ds : [edi+esi+8]
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        cmp esi, ebp
        mov ebx, eax
        je public_6f22358
        mov edi, edi
        public_6f22340 : nop
        push esi
        push ebx
        call public_6f24800
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, ebp
        jne public_6f22340
        mov eax, dword ptr ss : [esp+0x18]
        public_6f22358 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        fld dword ptr ds : [public_6f5a1b8]
        fdiv dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x2C], 0
        xor ecx, ecx
        pop ebp
        jmp public_6f22380
        public_6f22377 : nop
        mov eax, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6f22380 : nop
        mov edx, dword ptr ss : [esp+0xC]
        fld st(0)
        fmul dword ptr ds : [eax+ecx*4]
        inc ecx
        fstp dword ptr ds : [eax+ecx*4-4]
        mov eax, dword ptr ds : [edx+8]
        cmp ecx, eax
        jbe public_6f22377
        mov eax, edx
        fstp st(0)
        mov esi, dword ptr ds : [eax+0x48]
        add esi, edi
        lea ecx, ss:[esp+0x10]
        cmp esi, ecx
        je public_6f224af
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov ebx, dword ptr ss : [esp+0x18]
        jne public_6f223ba
        xor edi, edi
        jmp public_6f223c1
        public_6f223ba : nop
        mov edi, ebx
        sub edi, eax
        sar edi, 2
        public_6f223c1 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f223cc
        xor edx, edx
        jmp public_6f223d4
        public_6f223cc : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f223d4 : nop
        cmp edi, edx
        ja public_6f22402
        cmp eax, ebx
        mov edx, ebx
        je public_6f223ee
        mov edi, edi
        public_6f223e0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f223e0
        public_6f223ee : nop
        lea ecx, ss:[esp+0x10]
        call public_6f23630
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f224ac
        public_6f22402 : nop
        mov ecx, esi
        call public_6f23de0
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_6f23630
        cmp eax, edi
        ja public_6f2245a
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, esi
        call public_6f23630
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        lea edi, ds:[edi+eax*4]
        push edi
        push edx
        call public_6f247d0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f24140
        lea ecx, ss:[esp+0x10]
        call public_6f23630
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f224ac
        public_6f2245a : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f24130
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call public_6f23630
        test eax, eax
        jge public_6f22484
        xor eax, eax
        public_6f22484 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov ecx, esi
        call public_6f24140
        mov dword ptr ds : [esi+0xC], eax
        public_6f224ac : nop
        mov dword ptr ds : [esi+8], eax
        public_6f224af : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6f222d0)
    }
}

#undef public_6f2230e
#undef public_6f22317
#undef public_6f2231d
#undef public_6f22340
#undef public_6f22358
#undef public_6f22377
#undef public_6f22380
#undef public_6f223ba
#undef public_6f223c1
#undef public_6f223cc
#undef public_6f223d4
#undef public_6f223e0
#undef public_6f223ee
#undef public_6f22402
#undef public_6f2245a
#undef public_6f22484
#undef public_6f224ac
#undef public_6f224af
