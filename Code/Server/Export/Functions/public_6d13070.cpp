#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);
CLANG_FORWARD_PROC_SYMBOL(public_6d13070);
CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61bf4);

#define public_6d130ab _public_6d130ab
#define public_6d130b0 _public_6d130b0
#define public_6d130cc _public_6d130cc
#define public_6d13103 _public_6d13103
#define public_6d13149 _public_6d13149
#define public_6d13171 _public_6d13171
#define public_6d131af _public_6d131af
#define public_6d131b1 _public_6d131b1
#define public_6d131eb _public_6d131eb
#define public_6d131f5 _public_6d131f5
#define public_6d13214 _public_6d13214
#define public_6d1321e _public_6d1321e
#define public_6d13222 _public_6d13222
#define public_6d1322e _public_6d1322e
#define public_6d13230 _public_6d13230
#define public_6d13253 _public_6d13253

PROC_DECLARE(0x6d13070, internal_6d13070, public_6d13070);
extern "C" NAKED register_t __cdecl internal_6d13070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61bf4 @0x6d13072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61bf4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        mov eax, dword ptr ds : [public_6d8df10]
        push ebx
        push ebp
        push esi
        push edi
        or edi, 0xFFFFFFFF
        lea esi, ds:[eax+1]
        cmp esi, 0x1000
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], edi
        mov bl, 1
        jb public_6d130cc
        public_6d130ab : nop
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6d130b0 : nop
        cmp esi, 0x1000
        jb public_6d130cc
        mov ecx, offset public_6d8dd10
        call public_6d15f90
        mov ecx, offset public_6d8dd10
        call public_6d15f90
        public_6d130cc : nop
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov eax, esi
        shr eax, 5
        test dword ptr ds : [eax*4+public_6d8dd10], edx
        je public_6d13103
        test bl, bl
        je public_6d13171
        inc esi
        cmp esi, 0x1000
        jae public_6d130ab
        cmp esi, dword ptr ds : [public_6d8df10]
        jne public_6d130b0
        xor bl, bl
        jmp public_6d130b0
        public_6d13103 : nop
        test bl, bl
        je public_6d13171
        cmp esi, 0x1000
        jb public_6d13149
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_6d683a0 @0x6d13114*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683a0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d64ac4]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6d64abc]
/*FIXUP push offset public_6d727ac @0x6d1313a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d727ac
        lea eax, ss:[esp+0x30]
        push eax
        call public_6d601a2
        public_6d13149 : nop
        mov ecx, esi
        shr ecx, 5
        lea eax, ds : [ecx*4+public_6d8dd10]
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6d8df10], esi
        public_6d13171 : nop
        push 0x6C
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x50], 1
        je public_6d131af
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_6d68384
        mov dword ptr ds : [esi+4], 0
        mov byte ptr ds : [esi+8], 0
        call dword ptr ds : [public_6d6477c]
        mov dword ptr ds : [esi], offset public_6d6843c
        jmp public_6d131b1
        public_6d131af : nop
        xor esi, esi
        public_6d131b1 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x50], edi
        lea edi, ds:[esi+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d64778]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [esi+4], edx
        mov byte ptr ds : [esi+8], 1
        mov al, byte ptr ss : [ebp+0x20]
        test al, al
        je public_6d131eb
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        je public_6d131eb
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0x24], ecx
        jmp public_6d131f5
        public_6d131eb : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d131f5 : nop
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6d13214
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp+0x1C], eax
        xor edi, edi
        jmp public_6d13222
        public_6d13214 : nop
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x1C], eax
        xor edi, edi
        jmp public_6d13222
        public_6d1321e : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d13222 : nop
        test edi, edi
        jne public_6d1322e
        mov eax, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ds : [eax+4]
        jmp public_6d13230
        public_6d1322e : nop
        mov edi, dword ptr ds : [edi]
        public_6d13230 : nop
        test edi, edi
        je public_6d13253
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [eax]
        push ecx
        push ebp
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d1321e
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx]
        jmp public_6d1321e
        public_6d13253 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov byte ptr ds : [esi+8], 0
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6d13070)
    }
}

#undef public_6d130ab
#undef public_6d130b0
#undef public_6d130cc
#undef public_6d13103
#undef public_6d13149
#undef public_6d13171
#undef public_6d131af
#undef public_6d131b1
#undef public_6d131eb
#undef public_6d131f5
#undef public_6d13214
#undef public_6d1321e
#undef public_6d13222
#undef public_6d1322e
#undef public_6d13230
#undef public_6d13253
