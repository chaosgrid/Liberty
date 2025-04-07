#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4fcbe0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcbf0);
CLANG_FORWARD_PROC_SYMBOL(public_514010);
CLANG_FORWARD_PROC_SYMBOL(public_514110);
CLANG_FORWARD_PROC_SYMBOL(public_515200);
CLANG_FORWARD_PROC_SYMBOL(public_5154a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfd8a);

#define public_515245 _public_515245
#define public_515247 _public_515247
#define public_515260 _public_515260
#define public_515268 _public_515268
#define public_51526a _public_51526a
#define public_51527a _public_51527a
#define public_51527c _public_51527c
#define public_51529a _public_51529a
#define public_515328 _public_515328
#define public_515334 _public_515334
#define public_51534a _public_51534a
#define public_51534e _public_51534e
#define public_51535f _public_51535f
#define public_515365 _public_515365
#define public_51536b _public_51536b
#define public_515378 _public_515378
#define public_51537a _public_51537a
#define public_5153b9 _public_5153b9
#define public_5153bb _public_5153bb
#define public_5153d4 _public_5153d4
#define public_5153df _public_5153df
#define public_5153e2 _public_5153e2
#define public_5153ed _public_5153ed
#define public_5153ef _public_5153ef
#define public_515463 _public_515463
#define public_515469 _public_515469
#define public_515475 _public_515475
#define public_515477 _public_515477
#define public_515486 _public_515486

PROC_DECLARE(0x515200, internal_515200, public_515200);
extern "C" NAKED register_t __cdecl internal_515200()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bfd8a @0x515208*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfd8a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        xor ebx, ebx
        xor eax, eax
        cmp ebp, ebx
        je public_515245
        lea ecx, ss:[ebp+0xC]
        cmp ecx, ebx
        je public_515245
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, ebx
        je public_515245
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_515247
        public_515245 : nop
        xor ecx, ecx
        public_515247 : nop
        mov ecx, dword ptr ds : [ecx+0xE0]
        shr ecx, 7
        test cl, 1
        je public_515486
        mov edx, dword ptr ds : [public_6751c0]
        nop 
        public_515260 : nop
        cmp eax, ebx
        jne public_515268
        mov eax, edx
        jmp public_51526a
        public_515268 : nop
        mov eax, dword ptr ds : [eax]
        public_51526a : nop
        cmp eax, ebx
        je public_51529a
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, ebx
        je public_51527a
        add ecx, 0xFFFFFFF8
        jmp public_51527c
        public_51527a : nop
        xor ecx, ecx
        public_51527c : nop
        cmp ecx, ebp
        jne public_515260
        mov cl, byte ptr ss : [esp+0x64]
        cmp byte ptr ds : [eax+0x1C], cl
        jne public_515260
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 
        public_51529a : nop
        mov cl, byte ptr ss : [esp+0x68]
        test cl, cl
        je public_515486
        cmp dword ptr ds : [public_6751bc], ebx
        push esi
        push edi
        jne public_515334
        push 0x40
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x70], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x60], ebx
        je public_515328
        mov dl, byte ptr ss : [esp+0x6C]
        lea edi, ds:[esi+8]
        push ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        push ebx
        mov ecx, edi
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        push ebx
        mov byte ptr ss : [esp+0x64], 2
        call dword ptr ds : [public_5c645c]
        lea ecx, ds:[esi+0x20]
        mov byte ptr ss : [esp+0x60], 3
        mov byte ptr ds : [esi+0x1D], 1
        call public_4fcbe0
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[esi+0x30]
        call public_5154a0
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        jmp public_51536b
        public_515328 : nop
        xor esi, esi
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        jmp public_51536b
        public_515334 : nop
        mov esi, dword ptr ds : [public_6751b4]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_51534a
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [public_6751b4], eax
        jmp public_51534e
        public_51534a : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_51534e : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_51535f
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6751b8], edx
        jmp public_515365
        public_51535f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_515365 : nop
        dec dword ptr ds : [public_6751bc]
        public_51536b : nop
        cmp ebp, ebx
        mov byte ptr ds : [esi+0x1D], 1
        je public_515378
        lea eax, ss:[ebp+8]
        jmp public_51537a
        public_515378 : nop
        xor eax, eax
        public_51537a : nop
        lea edi, ds:[esi+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c645c]
        mov dl, byte ptr ss : [esp+0x6C]
        mov byte ptr ds : [esi+0x1C], dl
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_5153b9
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_5153b9
        add eax, 0xC
        cmp eax, ebx
        je public_5153b9
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_5153b9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_5153bb
        public_5153b9 : nop
        xor eax, eax
        public_5153bb : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        cmp eax, ebx
        jne public_5153d4
        xor ebp, ebp
        jmp public_5153e2
        public_5153d4 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebx
        jne public_5153df
        xor ebp, ebp
        jmp public_5153e2
        public_5153df : nop
        mov ebp, dword ptr ds : [eax+4]
        public_5153e2 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_5153ed
        lea edi, ds:[eax-8]
        jmp public_5153ef
        public_5153ed : nop
        xor edi, edi
        public_5153ef : nop
        mov dl, byte ptr ds : [esi+0x1C]
        mov byte ptr ss : [esp+0x6C], dl
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x20]
        push edi
        push ecx
        call public_514110
        mov edx, dword ptr ds : [edi]
        add esp, 0xC
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [edx+0x10]
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call public_4e7090
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_514010
        mov dword ptr ds : [esi+0x28], 0
        mov eax, dword ptr ss : [ebp+0xA0]
        mov ecx, dword ptr ss : [ebp+0xA4]
        push eax
        push ecx
        push 0
        lea ecx, ds:[esi+0x20]
        call public_4fcbf0
        mov eax, dword ptr ds : [public_6751c0]
        test eax, eax
        jne public_515463
        mov ecx, dword ptr ds : [public_6751c4]
        mov dword ptr ds : [public_6751c4], esi
        jmp public_515469
        public_515463 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+4], esi
        public_515469 : nop
        test ecx, ecx
        jne public_515475
        mov dword ptr ds : [public_6751c0], esi
        jmp public_515477
        public_515475 : nop
        mov dword ptr ds : [ecx], esi
        public_515477 : nop
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        inc dword ptr ds : [public_6751c8]
        pop edi
        mov eax, esi
        pop esi
        public_515486 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x515200)
    }
}

#undef public_515245
#undef public_515247
#undef public_515260
#undef public_515268
#undef public_51526a
#undef public_51527a
#undef public_51527c
#undef public_51529a
#undef public_515328
#undef public_515334
#undef public_51534a
#undef public_51534e
#undef public_51535f
#undef public_515365
#undef public_51536b
#undef public_515378
#undef public_51537a
#undef public_5153b9
#undef public_5153bb
#undef public_5153d4
#undef public_5153df
#undef public_5153e2
#undef public_5153ed
#undef public_5153ef
#undef public_515463
#undef public_515469
#undef public_515475
#undef public_515477
#undef public_515486
