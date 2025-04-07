#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);
CLANG_FORWARD_PROC_SYMBOL(public_6d122f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61bf4);

#define public_6d1232b _public_6d1232b
#define public_6d12330 _public_6d12330
#define public_6d1234c _public_6d1234c
#define public_6d12383 _public_6d12383
#define public_6d123c9 _public_6d123c9
#define public_6d123f1 _public_6d123f1
#define public_6d12432 _public_6d12432
#define public_6d12434 _public_6d12434
#define public_6d1246e _public_6d1246e
#define public_6d12478 _public_6d12478
#define public_6d12497 _public_6d12497
#define public_6d124a1 _public_6d124a1
#define public_6d124a5 _public_6d124a5
#define public_6d124b1 _public_6d124b1
#define public_6d124b3 _public_6d124b3
#define public_6d124d6 _public_6d124d6

PROC_DECLARE(0x6d122f0, internal_6d122f0, public_6d122f0);
extern "C" NAKED register_t __cdecl internal_6d122f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61bf4 @0x6d122f2*/
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
        mov eax, dword ptr ds : [public_6d8e320]
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
        jb public_6d1234c
        public_6d1232b : nop
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6d12330 : nop
        cmp esi, 0x1000
        jb public_6d1234c
        mov ecx, offset public_6d8e120
        call public_6d15f90
        mov ecx, offset public_6d8e120
        call public_6d15f90
        public_6d1234c : nop
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov eax, esi
        shr eax, 5
        test dword ptr ds : [eax*4+public_6d8e120], edx
        je public_6d12383
        test bl, bl
        je public_6d123f1
        inc esi
        cmp esi, 0x1000
        jae public_6d1232b
        cmp esi, dword ptr ds : [public_6d8e320]
        jne public_6d12330
        xor bl, bl
        jmp public_6d12330
        public_6d12383 : nop
        test bl, bl
        je public_6d123f1
        cmp esi, 0x1000
        jb public_6d123c9
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_6d683a0 @0x6d12394*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683a0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d64ac4]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6d64abc]
/*FIXUP push offset public_6d727ac @0x6d123ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d727ac
        lea eax, ss:[esp+0x30]
        push eax
        call public_6d601a2
        public_6d123c9 : nop
        mov ecx, esi
        shr ecx, 5
        lea eax, ds : [ecx*4+public_6d8e120]
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6d8e320], esi
        public_6d123f1 : nop
        push 0x26C
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x50], 1
        je public_6d12432
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_6d68384
        mov dword ptr ds : [esi+4], 0
        mov byte ptr ds : [esi+8], 0
        call dword ptr ds : [public_6d64764]
        mov dword ptr ds : [esi], offset public_6d68394
        jmp public_6d12434
        public_6d12432 : nop
        xor esi, esi
        public_6d12434 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x50], edi
        lea edi, ds:[esi+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d64760]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [esi+4], edx
        mov byte ptr ds : [esi+8], 1
        mov al, byte ptr ss : [ebp+0x34]
        test al, al
        je public_6d1246e
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        je public_6d1246e
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0x38], ecx
        jmp public_6d12478
        public_6d1246e : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d12478 : nop
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ss : [ebp+0x30]
        test ecx, ecx
        je public_6d12497
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp+0x30], eax
        xor edi, edi
        jmp public_6d124a5
        public_6d12497 : nop
        mov dword ptr ss : [ebp+0x2C], eax
        mov dword ptr ss : [ebp+0x30], eax
        xor edi, edi
        jmp public_6d124a5
        public_6d124a1 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d124a5 : nop
        test edi, edi
        jne public_6d124b1
        mov eax, dword ptr ss : [ebp+0x24]
        mov edi, dword ptr ds : [eax+4]
        jmp public_6d124b3
        public_6d124b1 : nop
        mov edi, dword ptr ds : [edi]
        public_6d124b3 : nop
        test edi, edi
        je public_6d124d6
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [eax]
        push ecx
        push ebp
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d124a1
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx]
        jmp public_6d124a1
        public_6d124d6 : nop
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
        UNREACHABLE_TRAP(0x6d122f0)
    }
}

#undef public_6d1232b
#undef public_6d12330
#undef public_6d1234c
#undef public_6d12383
#undef public_6d123c9
#undef public_6d123f1
#undef public_6d12432
#undef public_6d12434
#undef public_6d1246e
#undef public_6d12478
#undef public_6d12497
#undef public_6d124a1
#undef public_6d124a5
#undef public_6d124b1
#undef public_6d124b3
#undef public_6d124d6
