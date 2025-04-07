#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b140);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b3d0);

#define public_6f6b170 _public_6f6b170
#define public_6f6b1d3 _public_6f6b1d3
#define public_6f6b1e4 _public_6f6b1e4
#define public_6f6b1ea _public_6f6b1ea
#define public_6f6b1fb _public_6f6b1fb
#define public_6f6b201 _public_6f6b201
#define public_6f6b205 _public_6f6b205
#define public_6f6b21a _public_6f6b21a
#define public_6f6b25b _public_6f6b25b
#define public_6f6b296 _public_6f6b296
#define public_6f6b2a6 _public_6f6b2a6
#define public_6f6b2b4 _public_6f6b2b4
#define public_6f6b2d4 _public_6f6b2d4
#define public_6f6b2e0 _public_6f6b2e0
#define public_6f6b303 _public_6f6b303
#define public_6f6b347 _public_6f6b347
#define public_6f6b38f _public_6f6b38f
#define public_6f6b3a1 _public_6f6b3a1
#define public_6f6b3c3 _public_6f6b3c3

PROC_DECLARE(0x6f6b140, internal_6f6b140, public_6f6b140);
extern "C" NAKED register_t __cdecl internal_6f6b140()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x64]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        mov eax, edx
        sar eax, 1
        mov ecx, eax
        shr ecx, 0x1F
        add eax, ecx
        cmp eax, 0x10
        jle public_6f6b3c3
        mov edi, edi
        public_6f6b170 : nop
        mov dl, byte ptr ss : [esp+0x68]
        mov byte ptr ss : [esp+0x10], dl
        lea ecx, ds:[edi-0xC]
        mov edx, ecx
        mov ebp, dword ptr ds : [edx]
        mov esi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x1C], edx
        cdq 
        sub eax, edx
        sar eax, 1
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ebx+eax*4]
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [ebx]
        cmp eax, esi
        mov edx, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x40], ebx
        jb public_6f6b1d3
        ja public_6f6b21a
        cmp edx, edi
        setb bl
        test bl, bl
        je public_6f6b21a
        public_6f6b1d3 : nop
        cmp esi, ebp
        jb public_6f6b1e4
        ja public_6f6b1ea
        cmp edi, dword ptr ss : [esp+0x18]
        setb cl
        test cl, cl
        je public_6f6b1ea
        public_6f6b1e4 : nop
        lea eax, ss:[esp+0x2C]
        jmp public_6f6b205
        public_6f6b1ea : nop
        cmp eax, ebp
        jb public_6f6b1fb
        ja public_6f6b201
        cmp edx, dword ptr ss : [esp+0x18]
        setb al
        test al, al
        je public_6f6b201
        public_6f6b1fb : nop
        lea eax, ss:[esp+0x14]
        jmp public_6f6b205
        public_6f6b201 : nop
        lea eax, ss:[esp+0x38]
        public_6f6b205 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        jmp public_6f6b2a6
        public_6f6b21a : nop
        mov edx, dword ptr ds : [ecx]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [edx]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ds : [eax+8], edx
        call public_6f6b3d0
        test al, al
        je public_6f6b25b
        lea eax, ss:[esp+0x38]
        jmp public_6f6b296
        public_6f6b25b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+8], edx
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], ecx
        lea ecx, ss:[esp+0x28]
        call public_6f6b3d0
        test al, al
        lea eax, ss:[esp+0x14]
        jne public_6f6b296
        lea eax, ss:[esp+0x2C]
        public_6f6b296 : nop
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        public_6f6b2a6 : nop
        mov ebx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x20], edi
        mov esi, ebx
        public_6f6b2b4 : nop
        mov ebp, esi
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, edi
        mov edx, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x58], ebp
        jb public_6f6b2d4
        ja public_6f6b2e0
        cmp edx, dword ptr ss : [esp+0x24]
        setb cl
        test cl, cl
        je public_6f6b2e0
        public_6f6b2d4 : nop
        add esi, 0xC
        jmp public_6f6b2b4
        lea esp, ss:[esp]
        public_6f6b2e0 : nop
        sub eax, 0xC
        mov ebp, eax
        mov ecx, dword ptr ss : [ebp]
        cmp edi, ecx
        mov edx, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x58], ebp
        jb public_6f6b2e0
        ja public_6f6b303
        cmp dword ptr ss : [esp+0x24], edx
        setb cl
        test cl, cl
        jne public_6f6b2e0
        public_6f6b303 : nop
        cmp eax, esi
        jbe public_6f6b347
        mov edi, esi
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x4C], edi
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], edi
        mov ebx, dword ptr ss : [esp+0x60]
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], ecx
        mov edi, dword ptr ss : [esp+0x20]
        add esi, 0xC
        jmp public_6f6b2b4
        public_6f6b347 : nop
        mov edi, dword ptr ss : [esp+0x64]
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        mov ecx, edx
        sar ecx, 1
        mov edx, ecx
        shr edx, 0x1F
        add ecx, edx
        mov edx, esi
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        push 0
        jg public_6f6b38f
        mov ecx, dword ptr ss : [esp+0x6C]
        push ecx
        push edi
        push esi
        call public_6f6b140
        mov edi, esi
        mov dword ptr ss : [esp+0x74], edi
        jmp public_6f6b3a1
        public_6f6b38f : nop
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        push esi
        push ebx
        call public_6f6b140
        mov ebx, esi
        mov dword ptr ss : [esp+0x70], ebx
        public_6f6b3a1 : nop
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        add esp, 0x10
        cmp eax, 0x10
        jg public_6f6b170
        public_6f6b3c3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x6f6b140)
    }
}

#undef public_6f6b170
#undef public_6f6b1d3
#undef public_6f6b1e4
#undef public_6f6b1ea
#undef public_6f6b1fb
#undef public_6f6b201
#undef public_6f6b205
#undef public_6f6b21a
#undef public_6f6b25b
#undef public_6f6b296
#undef public_6f6b2a6
#undef public_6f6b2b4
#undef public_6f6b2d4
#undef public_6f6b2e0
#undef public_6f6b303
#undef public_6f6b347
#undef public_6f6b38f
#undef public_6f6b3a1
#undef public_6f6b3c3
