#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);
CLANG_FORWARD_PROC_SYMBOL(public_6d13350);
CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61bf4);

#define public_6d1338b _public_6d1338b
#define public_6d13390 _public_6d13390
#define public_6d133ac _public_6d133ac
#define public_6d133e3 _public_6d133e3
#define public_6d13429 _public_6d13429
#define public_6d13451 _public_6d13451
#define public_6d1348f _public_6d1348f
#define public_6d13491 _public_6d13491
#define public_6d134cb _public_6d134cb
#define public_6d134d5 _public_6d134d5
#define public_6d134f4 _public_6d134f4
#define public_6d134fe _public_6d134fe
#define public_6d13502 _public_6d13502
#define public_6d1350e _public_6d1350e
#define public_6d13510 _public_6d13510
#define public_6d13533 _public_6d13533

PROC_DECLARE(0x6d13350, internal_6d13350, public_6d13350);
extern "C" NAKED register_t __cdecl internal_6d13350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61bf4 @0x6d13352*/
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
        mov eax, dword ptr ds : [public_6d8dd08]
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
        jb public_6d133ac
        public_6d1338b : nop
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6d13390 : nop
        cmp esi, 0x1000
        jb public_6d133ac
        mov ecx, offset public_6d8db08
        call public_6d15f90
        mov ecx, offset public_6d8db08
        call public_6d15f90
        public_6d133ac : nop
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov eax, esi
        shr eax, 5
        test dword ptr ds : [eax*4+public_6d8db08], edx
        je public_6d133e3
        test bl, bl
        je public_6d13451
        inc esi
        cmp esi, 0x1000
        jae public_6d1338b
        cmp esi, dword ptr ds : [public_6d8dd08]
        jne public_6d13390
        xor bl, bl
        jmp public_6d13390
        public_6d133e3 : nop
        test bl, bl
        je public_6d13451
        cmp esi, 0x1000
        jb public_6d13429
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_6d683a0 @0x6d133f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683a0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d64ac4]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6d64abc]
/*FIXUP push offset public_6d727ac @0x6d1341a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d727ac
        lea eax, ss:[esp+0x30]
        push eax
        call public_6d601a2
        public_6d13429 : nop
        mov ecx, esi
        shr ecx, 5
        lea eax, ds : [ecx*4+public_6d8db08]
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6d8dd08], esi
        public_6d13451 : nop
        push 0x6C
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x50], 1
        je public_6d1348f
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_6d68384
        mov dword ptr ds : [esi+4], 0
        mov byte ptr ds : [esi+8], 0
        call dword ptr ds : [public_6d64794]
        mov dword ptr ds : [esi], offset public_6d6844c
        jmp public_6d13491
        public_6d1348f : nop
        xor esi, esi
        public_6d13491 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x50], edi
        lea edi, ds:[esi+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d64790]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [esi+4], edx
        mov byte ptr ds : [esi+8], 1
        mov al, byte ptr ss : [ebp+0x38]
        test al, al
        je public_6d134cb
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        je public_6d134cb
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0x3C], ecx
        jmp public_6d134d5
        public_6d134cb : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d134d5 : nop
        mov edx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ss : [ebp+0x34]
        test ecx, ecx
        je public_6d134f4
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp+0x34], eax
        xor edi, edi
        jmp public_6d13502
        public_6d134f4 : nop
        mov dword ptr ss : [ebp+0x30], eax
        mov dword ptr ss : [ebp+0x34], eax
        xor edi, edi
        jmp public_6d13502
        public_6d134fe : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d13502 : nop
        test edi, edi
        jne public_6d1350e
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [eax+4]
        jmp public_6d13510
        public_6d1350e : nop
        mov edi, dword ptr ds : [edi]
        public_6d13510 : nop
        test edi, edi
        je public_6d13533
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [eax]
        push ecx
        push ebp
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d134fe
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx]
        jmp public_6d134fe
        public_6d13533 : nop
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
        UNREACHABLE_TRAP(0x6d13350)
    }
}

#undef public_6d1338b
#undef public_6d13390
#undef public_6d133ac
#undef public_6d133e3
#undef public_6d13429
#undef public_6d13451
#undef public_6d1348f
#undef public_6d13491
#undef public_6d134cb
#undef public_6d134d5
#undef public_6d134f4
#undef public_6d134fe
#undef public_6d13502
#undef public_6d1350e
#undef public_6d13510
#undef public_6d13533
