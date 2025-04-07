#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63487f0);
CLANG_FORWARD_PROC_SYMBOL(public_6348960);
CLANG_FORWARD_PROC_SYMBOL(public_6348e10);
CLANG_FORWARD_PROC_SYMBOL(public_6349400);
CLANG_FORWARD_PROC_SYMBOL(public_63557c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397bcb);

#define public_634897e _public_634897e
#define public_63489a9 _public_63489a9
#define public_63489ab _public_63489ab
#define public_63489dd _public_63489dd
#define public_6348a04 _public_6348a04
#define public_6348a0a _public_6348a0a
#define public_6348a17 _public_6348a17
#define public_6348a2d _public_6348a2d
#define public_6348a45 _public_6348a45
#define public_6348a61 _public_6348a61
#define public_6348a65 _public_6348a65
#define public_6348a74 _public_6348a74
#define public_6348a8b _public_6348a8b

PROC_DECLARE(0x6348960, internal_6348960, public_6348960);
extern "C" NAKED register_t __cdecl internal_6348960()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397bcb @0x6348968*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397bcb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        public_634897e : nop
        xor esi, esi
        push 0x24
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x24], esi
        je public_63489a9
        mov ecx, eax
        call public_6348e10
        mov ebp, eax
        jmp public_63489ab
        public_63489a9 : nop
        xor ebp, ebp
        public_63489ab : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x2C]
        and eax, 0xFFFFFF01
        or eax, 1
        mov dword ptr ss : [ebp], eax
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [edx+8]
        push ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6349400
        xor ebx, ebx
        cmp word ptr ds : [edi+0xE], bx
        jbe public_6348a74
        public_63489dd : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [eax+ebx*4]
        mov dword ptr ss : [esp+0x18], ecx
        call public_63557c0
        cmp eax, dword ptr ss : [esp+0x2C]
        je public_6348a0a
        test esi, esi
        je public_6348a04
        cmp eax, esi
        je public_6348a65
        mov dword ptr ss : [esp+0x14], 1
        jmp public_6348a65
        public_6348a04 : nop
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6348a61
        public_6348a0a : nop
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0xE]
        mov eax, ebx
        dec ecx
        cmp ebx, ecx
        jge public_6348a2d
        public_6348a17 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0xE]
        inc eax
        dec ecx
        cmp eax, ecx
        jl public_6348a17
        public_6348a2d : nop
        dec word ptr ds : [edi+0xE]
        mov dx, word ptr ss : [ebp+0xE]
        lea esi, ss:[ebp+0xC]
        dec ebx
        cmp dx, word ptr ds : [esi]
        jb public_6348a45
        mov ecx, esi
        call public_63441a0
        public_6348a45 : nop
        mov edx, dword ptr ds : [esi+4]
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        mov dword ptr ds : [eax+0x15C], ebp
        public_6348a61 : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_6348a65 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0xE]
        inc ebx
        cmp ebx, eax
        jl public_63489dd
        public_6348a74 : nop
        mov ecx, ebp
        call public_63487f0
        cmp dword ptr ss : [esp+0x14], 1
        jne public_6348a8b
        mov dword ptr ss : [esp+0x2C], esi
        jmp public_634897e
        public_6348a8b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6348960)
    }
}

#undef public_634897e
#undef public_63489a9
#undef public_63489ab
#undef public_63489dd
#undef public_6348a04
#undef public_6348a0a
#undef public_6348a17
#undef public_6348a2d
#undef public_6348a45
#undef public_6348a61
#undef public_6348a65
#undef public_6348a74
#undef public_6348a8b
