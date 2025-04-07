#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_403e30);
CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_404490);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_4056d0);
CLANG_FORWARD_PROC_SYMBOL(public_415450);
CLANG_FORWARD_JUMP_SYMBOL(public_41a9f1);

#define public_41549e _public_41549e
#define public_4154b0 _public_4154b0
#define public_4154c7 _public_4154c7
#define public_4154fb _public_4154fb
#define public_415505 _public_415505
#define public_415519 _public_415519
#define public_415534 _public_415534
#define public_415548 _public_415548
#define public_415562 _public_415562
#define public_41557c _public_41557c
#define public_415584 _public_415584

PROC_DECLARE(0x415450, internal_415450, public_415450);
extern "C" NAKED register_t __cdecl internal_415450()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a9f1 @0x415452*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a9f1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        xor ecx, ecx
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_415584
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov al, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, dword ptr ss : [ebp+8]
        push edi
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jbe public_41549e
        or edi, 0xFFFFFFFF
        public_41549e : nop
        cmp esi, ebp
        jne public_415505
        push ebx
        or ebx, 0xFFFFFFFF
        cmp edi, ecx
        jbe public_4154b0
        call dword ptr ds : [public_41b8d0]
        public_4154b0 : nop
        mov ecx, esi
        call public_4056d0
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_4154c7
        mov ebx, eax
        test ebx, ebx
        jbe public_4154fb
        public_4154c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_403e30
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_4154fb
        push edi
        mov ecx, esi
        call public_404490
        public_4154fb : nop
        mov ecx, esi
        call public_4056d0
        pop ebx
        jmp public_41557c
        public_415505 : nop
        cmp edi, ecx
        jbe public_415548
        cmp edi, eax
        jne public_415548
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ecx
        jne public_415519
        mov eax, offset public_41c3f4
        public_415519 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_415548
        push 1
        mov ecx, esi
        call public_403e90
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_415534
        mov eax, offset public_41c3f4
        public_415534 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_41557c
        public_415548 : nop
        push 1
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_41557c
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_415562
        mov eax, offset public_41c3f4
        public_415562 : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push eax
        push edx
        call public_4031c0
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], 0
        public_41557c : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop ebp
        public_415584 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x415450)
    }
}

#undef public_41549e
#undef public_4154b0
#undef public_4154c7
#undef public_4154fb
#undef public_415505
#undef public_415519
#undef public_415534
#undef public_415548
#undef public_415562
#undef public_41557c
#undef public_415584
