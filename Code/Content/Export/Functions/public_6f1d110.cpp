#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c980);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9036);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9174);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadd5b);

#define public_6f1d16f _public_6f1d16f
#define public_6f1d190 _public_6f1d190
#define public_6f1d1a4 _public_6f1d1a4
#define public_6f1d1f0 _public_6f1d1f0
#define public_6f1d215 _public_6f1d215
#define public_6f1d240 _public_6f1d240
#define public_6f1d25b _public_6f1d25b
#define public_6f1d26b _public_6f1d26b
#define public_6f1d28d _public_6f1d28d
#define public_6f1d2a5 _public_6f1d2a5
#define public_6f1d2e1 _public_6f1d2e1
#define public_6f1d2f6 _public_6f1d2f6
#define public_6f1d300 _public_6f1d300
#define public_6f1d315 _public_6f1d315
#define public_6f1d320 _public_6f1d320
#define public_6f1d327 _public_6f1d327
#define public_6f1d332 _public_6f1d332
#define public_6f1d38d _public_6f1d38d
#define public_6f1d3b4 _public_6f1d3b4

PROC_DECLARE(0x6f1d110, internal_6f1d110, public_6f1d110);
extern "C" NAKED register_t __cdecl internal_6f1d110()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fadd5b @0x6f1d118*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadd5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x1C]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_6f1d3b4
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1d3b4
        mov ecx, dword ptr ss : [ebp+0x20]
        call public_6f487c0
        mov ecx, dword ptr ss : [ebp+0x1C]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f1d16f
        mov ecx, dword ptr ss : [ebp+0x20]
        call public_6f487c0
        test eax, eax
        jne public_6f1d3b4
        public_6f1d16f : nop
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [edx+0x84], edi
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f1d38d
        nop 
        lea esp, ss:[esp]
        public_6f1d190 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [ecx+4]
        test al, al
        jne public_6f1d1a4
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6f1d1a4
        inc ebx
        public_6f1d1a4 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x10]
        jne public_6f1d190
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f1d38d
        mov ecx, ebx
        imul ecx, 0x1C
        add ecx, 4
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x30], edi
        je public_6f1d1f0
/*FIXUP push offset _public_6f1c980 @0x6f1d1d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f1c980
/*FIXUP push offset _public_6f1a5d0 @0x6f1d1db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f1a5d0
        push ebx
        lea esi, ds:[eax+4]
        push 0x1C
        push esi
        mov dword ptr ds : [eax], ebx
        call public_6fa9174
        mov edi, esi
        public_6f1d1f0 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0
        je public_6f1d332
        mov dword ptr ss : [esp+0x14], edi
        public_6f1d215 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+4]
        test cl, cl
        jne public_6f1d320
        mov cl, byte ptr ss : [ebp+0x25]
        test cl, cl
        jne public_6f1d28d
        test byte ptr ds : [eax+0x1C], 0x10
        je public_6f1d28d
        mov eax, dword ptr ss : [ebp+0x30]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f1d25b
        lea esp, ss:[esp]
        public_6f1d240 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x18]
        test al, al
        jne public_6f1d2e1
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0x30]
        jne public_6f1d240
        public_6f1d25b : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x1C]
        test al, 0x40
        je public_6f1d26b
        and eax, 0xFFFFFFBF
        mov dword ptr ds : [ecx+0x1C], eax
        public_6f1d26b : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x30]
        lea ecx, ss:[ebp+0x2C]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f1e390
        public_6f1d28d : nop
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0xC], 1
        jne public_6f1d2a5
        mov ecx, dword ptr ds : [eax+0x1C]
        and ecx, 0x80
        or ecx, 9
        mov dword ptr ds : [eax+0x1C], ecx
        public_6f1d2a5 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x10], ebx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x1C]
        add eax, 0x1C
        add eax, 4
        mov dword ptr ds : [edi], ecx
        push eax
        lea ecx, ds:[edi+4]
        call dword ptr ds : [public_6fb3088]
        inc ebx
        add edi, 0x1C
        mov dword ptr ss : [esp+0x10], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], edi
        mov edi, dword ptr ss : [esp+0x18]
        jmp public_6f1d327
        public_6f1d2e1 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x1C]
        test ah, 1
        je public_6f1d2f6
        and eax, 0xFFFFFEFF
        mov dword ptr ds : [ecx+0x1C], eax
        jmp public_6f1d28d
        public_6f1d2f6 : nop
        test al, 0x20
        je public_6f1d300
        and eax, 0xFFFFFFDF
        mov dword ptr ds : [ecx+0x1C], eax
        public_6f1d300 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x1C]
        test al, 0x40
        je public_6f1d315
        and eax, 0xFFFFFFBF
        mov dword ptr ds : [ecx+0x1C], eax
        jmp public_6f1d28d
        public_6f1d315 : nop
        and eax, 0xFFFFFFEF
        mov dword ptr ds : [ecx+0x1C], eax
        jmp public_6f1d28d
        public_6f1d320 : nop
        mov dword ptr ds : [eax+0x10], 0xFFFFFFFF
        public_6f1d327 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x10]
        jne public_6f1d215
        public_6f1d332 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor ecx, ecx
        mov cl, byte ptr ds : [eax+0x80]
        lea edx, ds:[eax+0x68]
        push edx
        lea edx, ds:[eax+0x50]
        add eax, 4
        add ebp, 4
        push ecx
        push edx
        push ebx
        push edi
        push eax
        push ebp
        call dword ptr ds : [public_6fb3698]
        add esp, 0x1C
        test edi, edi
        je public_6f1d3b4
        mov eax, dword ptr ds : [edi-4]
/*FIXUP push offset _public_6f1c980 @0x6f1d360*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f1c980
        lea esi, ds:[edi-4]
        push eax
        push 0x1C
        push edi
        call public_6fa9036
        push esi
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_6f1d38d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor edx, edx
        mov dl, byte ptr ds : [eax+0x80]
        lea ecx, ds:[eax+0x68]
        push ecx
        lea ecx, ds:[eax+0x50]
        add eax, 4
        add ebp, 4
        push edx
        push ecx
        push edi
        push edi
        push eax
        push ebp
        call dword ptr ds : [public_6fb3698]
        add esp, 0x1C
        public_6f1d3b4 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f1d110)
    }
}

#undef public_6f1d16f
#undef public_6f1d190
#undef public_6f1d1a4
#undef public_6f1d1f0
#undef public_6f1d215
#undef public_6f1d240
#undef public_6f1d25b
#undef public_6f1d26b
#undef public_6f1d28d
#undef public_6f1d2a5
#undef public_6f1d2e1
#undef public_6f1d2f6
#undef public_6f1d300
#undef public_6f1d315
#undef public_6f1d320
#undef public_6f1d327
#undef public_6f1d332
#undef public_6f1d38d
#undef public_6f1d3b4
