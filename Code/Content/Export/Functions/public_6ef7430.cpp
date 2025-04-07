#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7430);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac478);

#define public_6ef7480 _public_6ef7480
#define public_6ef7491 _public_6ef7491
#define public_6ef749c _public_6ef749c
#define public_6ef749e _public_6ef749e
#define public_6ef74b0 _public_6ef74b0
#define public_6ef74bb _public_6ef74bb
#define public_6ef74bd _public_6ef74bd
#define public_6ef74e1 _public_6ef74e1
#define public_6ef74ec _public_6ef74ec
#define public_6ef74ee _public_6ef74ee
#define public_6ef74f9 _public_6ef74f9
#define public_6ef7519 _public_6ef7519
#define public_6ef7529 _public_6ef7529
#define public_6ef753b _public_6ef753b
#define public_6ef7540 _public_6ef7540
#define public_6ef7548 _public_6ef7548

PROC_DECLARE(0x6ef7430, internal_6ef7430, public_6ef7430);
extern "C" NAKED register_t __cdecl internal_6ef7430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac478 @0x6ef7432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac478
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        xor edx, edx
        mov dword ptr ss : [esp+8], edx
        mov al, byte ptr ss : [esp+0x38]
        push esi
        push edi
        xor edi, edi
        xor ecx, ecx
        mov byte ptr ss : [esp+0x1C], al
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov ebx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x34], edx
        je public_6ef7529
        mov edi, edi
        public_6ef7480 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        cmp eax, edx
        je public_6ef749c
        mov esi, dword ptr ss : [ebp]
        public_6ef7491 : nop
        cmp dword ptr ds : [eax], esi
        je public_6ef749e
        add eax, 4
        cmp eax, edx
        jne public_6ef7491
        public_6ef749c : nop
        mov eax, edx
        public_6ef749e : nop
        cmp eax, edx
        je public_6ef7519
        cmp edi, ecx
        mov eax, edi
        je public_6ef74bb
        mov edx, dword ptr ss : [ebp]
        nop 
        lea esp, ss:[esp]
        public_6ef74b0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef74bd
        add eax, 4
        cmp eax, ecx
        jne public_6ef74b0
        public_6ef74bb : nop
        mov eax, ecx
        public_6ef74bd : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ef74f9
        push ebp
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6eb5770
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp edi, ecx
        mov eax, edi
        je public_6ef74ec
        mov edx, dword ptr ss : [ebp]
        public_6ef74e1 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef74ee
        add eax, 4
        cmp eax, ecx
        jne public_6ef74e1
        public_6ef74ec : nop
        mov eax, ecx
        public_6ef74ee : nop
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x18], 1
        jmp public_6ef7519
        public_6ef74f9 : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x48], 0
        call public_6fa6e80
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        public_6ef7519 : nop
        mov eax, dword ptr ds : [ebx+8]
        add ebp, 4
        cmp ebp, eax
        jne public_6ef7480
        xor edx, edx
        public_6ef7529 : nop
        cmp edi, edx
        mov esi, dword ptr ss : [esp+0x3C]
        mov al, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi], al
        jne public_6ef753b
        xor ecx, ecx
        jmp public_6ef7540
        public_6ef753b : nop
        sub ecx, edi
        sar ecx, 2
        public_6ef7540 : nop
        cmp ecx, edx
        mov eax, ecx
        jge public_6ef7548
        xor eax, eax
        public_6ef7548 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 4
        push eax
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6ef7430)
    }
}

#undef public_6ef7480
#undef public_6ef7491
#undef public_6ef749c
#undef public_6ef749e
#undef public_6ef74b0
#undef public_6ef74bb
#undef public_6ef74bd
#undef public_6ef74e1
#undef public_6ef74ec
#undef public_6ef74ee
#undef public_6ef74f9
#undef public_6ef7519
#undef public_6ef7529
#undef public_6ef753b
#undef public_6ef7540
#undef public_6ef7548
