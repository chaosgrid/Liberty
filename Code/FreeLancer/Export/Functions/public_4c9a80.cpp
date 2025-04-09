#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_420f30);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c9a80);
CLANG_FORWARD_PROC_SYMBOL(public_4c9db0);
CLANG_FORWARD_PROC_SYMBOL(public_4c9de0);
CLANG_FORWARD_PROC_SYMBOL(public_4c9e20);
CLANG_FORWARD_PROC_SYMBOL(public_4c9f00);
CLANG_FORWARD_PROC_SYMBOL(public_4ca3c0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca480);
CLANG_FORWARD_PROC_SYMBOL(public_4ca4b0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca530);
CLANG_FORWARD_PROC_SYMBOL(public_4cebc0);
CLANG_FORWARD_PROC_SYMBOL(public_4cec20);
CLANG_FORWARD_PROC_SYMBOL(public_4cec80);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd982);

#define public_4c9ab1 _public_4c9ab1
#define public_4c9ad5 _public_4c9ad5
#define public_4c9b13 _public_4c9b13
#define public_4c9b24 _public_4c9b24
#define public_4c9b70 _public_4c9b70
#define public_4c9ba2 _public_4c9ba2
#define public_4c9bcd _public_4c9bcd
#define public_4c9bd8 _public_4c9bd8
#define public_4c9bda _public_4c9bda
#define public_4c9c34 _public_4c9c34
#define public_4c9c7a _public_4c9c7a
#define public_4c9c90 _public_4c9c90
#define public_4c9ca9 _public_4c9ca9
#define public_4c9ced _public_4c9ced
#define public_4c9d04 _public_4c9d04
#define public_4c9d1b _public_4c9d1b
#define public_4c9d44 _public_4c9d44
#define public_4c9d61 _public_4c9d61
#define public_4c9d65 _public_4c9d65
#define public_4c9d89 _public_4c9d89

PROC_DECLARE(0x4c9a80, internal_4c9a80, public_4c9a80);
extern "C" NAKED register_t __cdecl internal_4c9a80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd982 @0x4c9a82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd982
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x738
        mov eax, dword ptr ds : [ecx+4]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_4c9ad5
        mov ebp, dword ptr ds : [public_5c64a8]
        public_4c9ab1 : nop
        mov eax, dword ptr ss : [esp+0x754]
        push eax
        lea edi, ds:[esi+8]
        push edi
        call ebp
        add esp, 8
        test al, al
        jne public_4c9bcd
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_4c9ab1
        public_4c9ad5 : nop
        mov edi, dword ptr ss : [esp+0x754]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x30], ecx
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x58], eax
        jle public_4c9b24
        mov edx, edi
        lea esi, ss:[esp+0x28]
        lea eax, ss:[esp+0x38]
        sub edx, esi
        public_4c9b13 : nop
        mov esi, dword ptr ds : [edx+eax]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+0x58]
        inc ecx
        add eax, 4
        cmp ecx, esi
        jl public_4c9b13
        public_4c9b24 : nop
        push 0x298
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x750], ebx
        je public_4c9bd8
/*FIXUP push offset _public_420d10 @0x4c9b46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
/*FIXUP push offset _public_420d40 @0x4c9b4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d40
        push 4
        push 0x10
        lea eax, ds:[esi+4]
        push eax
        call public_5b7fba
        lea ebp, ds:[esi+0x44]
        mov byte ptr ss : [esp+0x750], 1
        mov eax, ebp
        mov ecx, 4
        nop 
        public_4c9b70 : nop
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], bl
        add eax, 0x84
        dec ecx
        jne public_4c9b70
        lea edi, ds:[esi+0x268]
        mov ecx, edi
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ds : [esi], ebx
        lea ecx, ds:[esi+0x254]
        mov eax, ebp
        mov edx, 4
        public_4c9ba2 : nop
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], bl
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_4c9ba2
        mov edi, dword ptr ss : [esp+0x758]
        mov dword ptr ds : [esi+0x264], 0x3F800000
        mov ebp, esi
        jmp public_4c9bda
        public_4c9bcd : nop
        inc dword ptr ds : [edi+0x38]
        mov eax, dword ptr ds : [edi+0x34]
        jmp public_4c9d89
        public_4c9bd8 : nop
        xor ebp, ebp
        public_4c9bda : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x750], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x5C], ebp
        call public_4ca4b0
        push edi
        lea ecx, ss:[esp+0x184]
        call public_4c9f00
        lea ecx, ss:[esp+0x180]
        call public_4ca3c0
        mov dword ptr ss : [ebp], eax
        call dword ptr ds : [public_5c60e4]
        mov dword ptr ss : [esp+0x1C], eax
        cmp dword ptr ds : [edi+0x30], ebx
        mov dword ptr ss : [esp+0x10], ebx
        jle public_4c9d44
        mov ecx, dword ptr ss : [esp+0x758]
        add ecx, 0x10
        lea edi, ss:[ebp+4]
        mov dword ptr ss : [esp+0x14], ecx
        public_4c9c34 : nop
        cmp dword ptr ss : [esp+0x10], 4
        ja public_4c9d44
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [public_5c6198]
        mov esi, eax
        cmp esi, ebx
        je public_4c9d1b
        lea ecx, ss:[esp+0x64]
        call public_4c9de0
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x750], 2
        jne public_4c9c7a
        mov eax, dword ptr ds : [public_5c7078]
        public_4c9c7a : nop
        push eax
        lea ecx, ss:[esp+0x68]
        call public_4cec20
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        jne public_4c9c90
        mov eax, dword ptr ds : [public_5c7078]
        public_4c9c90 : nop
        push eax
        lea ecx, ss:[esp+0x130]
        call public_4cebc0
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        jne public_4c9ca9
        mov eax, dword ptr ds : [public_5c7078]
        public_4c9ca9 : nop
        push eax
        lea ecx, ss:[esp+0xEC]
        call public_4cebc0
        mov ecx, ebp
        call public_4ca480
        push eax
        lea ecx, ss:[esp+0x68]
        call public_4c9e20
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [edi+4], eax
        cmp dword ptr ds : [ecx+8], ebx
        je public_4c9d04
        lea edx, ss:[esp+0x24]
        push edx
        call public_53e430
        mov eax, dword ptr ds : [eax]
        add eax, 8
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        jne public_4c9ced
        mov eax, dword ptr ds : [public_5c7078]
        public_4c9ced : nop
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_4c9db0
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        mov ecx, edi
        call public_420f30
        public_4c9d04 : nop
        lea ecx, ss:[esp+0x170]
        mov dword ptr ss : [esp+0x750], 0xFFFFFFFF
        call public_4de730
        public_4c9d1b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, 4
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x758]
        mov edx, dword ptr ds : [ecx+0x30]
        inc eax
        add edi, 0x10
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        jl public_4c9c34
        public_4c9d44 : nop
        cmp dword ptr ss : [ebp], ebx
        jne public_4c9d65
        mov ecx, dword ptr ss : [esp+0x5C]
        cmp ecx, ebx
        mov esi, ecx
        je public_4c9d61
        call public_4ca530
        push esi
        call public_5b7e1d
        add esp, 4
        public_4c9d61 : nop
        mov dword ptr ss : [esp+0x5C], ebx
        public_4c9d65 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x6C], 1
        call public_4cec80
        mov eax, dword ptr ss : [esp+0x5C]
        pop ebx
        public_4c9d89 : nop
        mov ecx, dword ptr ss : [esp+0x744]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x744
        ret 4
        UNREACHABLE_TRAP(0x4c9a80)
    }
}

#undef public_4c9ab1
#undef public_4c9ad5
#undef public_4c9b13
#undef public_4c9b24
#undef public_4c9b70
#undef public_4c9ba2
#undef public_4c9bcd
#undef public_4c9bd8
#undef public_4c9bda
#undef public_4c9c34
#undef public_4c9c7a
#undef public_4c9c90
#undef public_4c9ca9
#undef public_4c9ced
#undef public_4c9d04
#undef public_4c9d1b
#undef public_4c9d44
#undef public_4c9d61
#undef public_4c9d65
#undef public_4c9d89
