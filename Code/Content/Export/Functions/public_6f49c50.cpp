#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49c50);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f49c73 _public_6f49c73
#define public_6f49c91 _public_6f49c91
#define public_6f49cae _public_6f49cae
#define public_6f49cd2 _public_6f49cd2
#define public_6f49cf5 _public_6f49cf5
#define public_6f49d38 _public_6f49d38
#define public_6f49d50 _public_6f49d50
#define public_6f49d8c _public_6f49d8c
#define public_6f49da4 _public_6f49da4
#define public_6f49dac _public_6f49dac
#define public_6f49dc8 _public_6f49dc8
#define public_6f49dd8 _public_6f49dd8
#define public_6f49e00 _public_6f49e00
#define public_6f49e1f _public_6f49e1f
#define public_6f49e2a _public_6f49e2a
#define public_6f49e5b _public_6f49e5b
#define public_6f49e60 _public_6f49e60
#define public_6f49e74 _public_6f49e74
#define public_6f49f0c _public_6f49f0c
#define public_6f49f50 _public_6f49f50
#define public_6f49f6a _public_6f49f6a
#define public_6f49f73 _public_6f49f73
#define public_6f49f85 _public_6f49f85

PROC_DECLARE(0x6f49c50, internal_6f49c50, public_6f49c50);
extern "C" NAKED register_t __cdecl internal_6f49c50()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6fb3024]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        xor ebp, ebp
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], ebp
        call esi
        test al, al
        je public_6f49dd8
/*FIXUP public_6f49c73 : nop
        push offset public_6fbb20c @0x6f49c73*/
  FIXUP public_6f49c73 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb20c
        mov ecx, edi
        call dword ptr ds : [public_6fb301c]
        test al, al
        jne public_6f49c91
        mov ecx, edi
        call esi
        test al, al
        jne public_6f49c73
        jmp public_6f49dd8
        public_6f49c91 : nop
        mov ecx, dword ptr ds : [public_6fd0bd4]
        test ecx, ecx
        je public_6f49cae
        mov eax, dword ptr ds : [public_6fd0bdc]
        sub eax, ecx
        sar eax, 3
        cmp eax, 0x29
        jae public_6f49d38
        public_6f49cae : nop
        push 0x148
        call public_6fa912a
        mov esi, dword ptr ds : [public_6fd0bd4]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6fd0bd8]
        add esp, 4
        cmp esi, eax
        mov ebp, ebx
        mov dword ptr ss : [esp+0x20], eax
        je public_6f49cf5
        public_6f49cd2 : nop
        push esi
        push ebp
        call public_6f305b0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 8
        add esp, 8
        add ebp, 8
        cmp esi, eax
        jne public_6f49cd2
        mov esi, dword ptr ds : [public_6fd0bd4]
        mov eax, dword ptr ds : [public_6fd0bd8]
        public_6f49cf5 : nop
        push eax
        push esi
        mov ecx, offset public_6fd0bd0
        call public_6ea1490
        mov eax, dword ptr ds : [public_6fd0bd4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[ebx+0x148]
        mov dword ptr ds : [public_6fd0bdc], ecx
        add esp, 4
        mov ecx, offset public_6fd0bd0
        call public_6eae300
        mov ebp, dword ptr ss : [esp+0x10]
        lea edx, ds:[ebx+eax*8]
        mov dword ptr ds : [public_6fd0bd8], edx
        mov dword ptr ds : [public_6fd0bd4], ebx
        public_6f49d38 : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f49dd8
        mov esi, dword ptr ds : [public_6fb3020]
        mov edi, edi
/*FIXUP public_6f49d50 : nop
        push offset public_6fbb1fc @0x6f49d50*/
  FIXUP public_6f49d50 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb1fc
        mov ecx, edi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f49dc8
        xor eax, eax
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        call esi
        push 1
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call esi
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        jae public_6f49d8c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], ecx
        public_6f49d8c : nop
        cmp eax, 0x28
        mov dword ptr ss : [esp+0x10], ecx
        jg public_6f49da4
        cmp eax, 1
        jge public_6f49dac
        mov dword ptr ss : [esp+0x18], 1
        jmp public_6f49dac
        public_6f49da4 : nop
        mov dword ptr ss : [esp+0x18], 0x28
        public_6f49dac : nop
        mov ecx, dword ptr ds : [public_6fd0bd8]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        mov ecx, offset public_6fd0bd0
        call public_6f96770
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f49dc8 : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f49d50
        public_6f49dd8 : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f49f85
        cmp ebp, 0x3B9AC9FF
        jge public_6f49f85
        mov esi, dword ptr ds : [public_6fd0bd4]
        mov ecx, dword ptr ds : [public_6fd0bd8]
        mov edi, edi
        public_6f49e00 : nop
        mov eax, ebp
        cdq 
        and edx, 7
        add eax, edx
        sar eax, 3
        add ebp, eax
        test esi, esi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6f49e1f
        mov dword ptr ss : [esp+0x18], esi
        jmp public_6f49e2a
        public_6f49e1f : nop
        mov edx, ecx
        sub edx, esi
        sar edx, 3
        mov dword ptr ss : [esp+0x18], edx
        public_6f49e2a : nop
        mov eax, dword ptr ds : [public_6fd0bdc]
        sub eax, ecx
        sar eax, 3
        cmp eax, 1
        mov edi, ecx
        jae public_6f49f0c
        test esi, esi
        je public_6f49e5b
        sub ecx, esi
        sar ecx, 3
        cmp ecx, 1
        jbe public_6f49e5b
        mov ecx, offset public_6fd0bd0
        call public_6eae300
        mov esi, eax
        jmp public_6f49e60
        public_6f49e5b : nop
        mov esi, 1
        public_6f49e60 : nop
        mov ecx, offset public_6fd0bd0
        call public_6eae300
        mov ebp, eax
        add ebp, esi
        mov eax, ebp
        jns public_6f49e74
        xor eax, eax
        public_6f49e74 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ds : [public_6fd0bd4]
        add esp, 4
        mov esi, eax
        push esi
        push edi
        push edx
        mov ecx, offset public_6fd0bd0
        call public_6ed2700
        mov ebx, eax
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ebx
        mov ecx, offset public_6fd0bd0
        call public_6ed2730
        mov ecx, dword ptr ds : [public_6fd0bd8]
        add ebx, 8
        push ebx
        push ecx
        push edi
        mov ecx, offset public_6fd0bd0
        call public_6ed2700
        mov edx, dword ptr ds : [public_6fd0bd8]
        mov eax, dword ptr ds : [public_6fd0bd4]
        push edx
        push eax
        mov ecx, offset public_6fd0bd0
        call public_6ea1490
        mov ecx, dword ptr ds : [public_6fd0bd4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+ebp*8]
        add esp, 4
        mov ecx, offset public_6fd0bd0
        mov dword ptr ds : [public_6fd0bdc], edx
        call public_6eae300
        mov ebp, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+eax*8+8]
        mov dword ptr ds : [public_6fd0bd4], esi
        jmp public_6f49f73
        public_6f49f0c : nop
        lea eax, ds:[ecx+8]
        push eax
        push ecx
        push ecx
        mov ecx, offset public_6fd0bd0
        call public_6ed2700
        mov eax, dword ptr ds : [public_6fd0bd8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        sub edx, edi
        sar edx, 3
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, offset public_6fd0bd0
        call public_6ed2730
        mov ecx, dword ptr ds : [public_6fd0bd8]
        cmp edi, ecx
        mov eax, edi
        je public_6f49f6a
        lea esp, ss:[esp]
        public_6f49f50 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6f49f50
        mov ecx, dword ptr ds : [public_6fd0bd8]
        public_6f49f6a : nop
        mov esi, dword ptr ds : [public_6fd0bd4]
        add ecx, 8
        public_6f49f73 : nop
        cmp ebp, 0x3B9AC9FF
        mov dword ptr ds : [public_6fd0bd8], ecx
        jl public_6f49e00
        public_6f49f85 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f49c50)
    }
}

#undef public_6f49c73
#undef public_6f49c91
#undef public_6f49cae
#undef public_6f49cd2
#undef public_6f49cf5
#undef public_6f49d38
#undef public_6f49d50
#undef public_6f49d8c
#undef public_6f49da4
#undef public_6f49dac
#undef public_6f49dc8
#undef public_6f49dd8
#undef public_6f49e00
#undef public_6f49e1f
#undef public_6f49e2a
#undef public_6f49e5b
#undef public_6f49e60
#undef public_6f49e74
#undef public_6f49f0c
#undef public_6f49f50
#undef public_6f49f6a
#undef public_6f49f73
#undef public_6f49f85
