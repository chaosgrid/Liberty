#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45cef0);
CLANG_FORWARD_PROC_SYMBOL(public_45dcc0);
CLANG_FORWARD_PROC_SYMBOL(public_4b9c60);
CLANG_FORWARD_PROC_SYMBOL(public_4b9f90);
CLANG_FORWARD_PROC_SYMBOL(public_4ba0f0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd550);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_59e6a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd459);

#define public_4b9c9b _public_4b9c9b
#define public_4b9cc3 _public_4b9cc3
#define public_4b9ccc _public_4b9ccc
#define public_4b9cda _public_4b9cda
#define public_4b9cf5 _public_4b9cf5
#define public_4b9cfa _public_4b9cfa
#define public_4b9d0c _public_4b9d0c
#define public_4b9d64 _public_4b9d64
#define public_4b9d7a _public_4b9d7a
#define public_4b9d8a _public_4b9d8a
#define public_4b9d90 _public_4b9d90
#define public_4b9db6 _public_4b9db6
#define public_4b9dd7 _public_4b9dd7
#define public_4b9dfd _public_4b9dfd
#define public_4b9e1c _public_4b9e1c
#define public_4b9e20 _public_4b9e20
#define public_4b9e25 _public_4b9e25
#define public_4b9e2b _public_4b9e2b
#define public_4b9e52 _public_4b9e52
#define public_4b9e5b _public_4b9e5b
#define public_4b9e6a _public_4b9e6a
#define public_4b9e79 _public_4b9e79
#define public_4b9e8b _public_4b9e8b
#define public_4b9e98 _public_4b9e98
#define public_4b9ed4 _public_4b9ed4
#define public_4b9f18 _public_4b9f18
#define public_4b9f2a _public_4b9f2a
#define public_4b9f39 _public_4b9f39
#define public_4b9f44 _public_4b9f44
#define public_4b9f69 _public_4b9f69

PROC_DECLARE(0x4b9c60, internal_4b9c60, public_4b9c60);
extern "C" NAKED register_t __cdecl internal_4b9c60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd459 @0x4b9c68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd459
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        cmp esi, 0xA
        push edi
        jne public_4b9c9b
        call public_4ba0f0
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_4b9c9b : nop
        xor ebx, ebx
        cmp esi, ebx
        je public_4b9cf5
        cmp esi, 1
        je public_4b9cf5
        cmp esi, 2
        je public_4b9cf5
        cmp esi, 3
        je public_4b9cf5
        cmp esi, 5
        je public_4b9cfa
        cmp esi, 7
        mov edi, dword ptr ss : [esp+0x34]
        je public_4b9cc3
        cmp esi, 9
        jne public_4b9ccc
        public_4b9cc3 : nop
        push edi
        call public_4b9f90
        add esp, 4
        public_4b9ccc : nop
        cmp esi, 8
        je public_4b9cda
        cmp esi, 9
        jne public_4b9f69
        public_4b9cda : nop
        push edi
        call public_4ba2a0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_4b9cf5 : nop
        cmp esi, 5
        jne public_4b9d0c
        public_4b9cfa : nop
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call public_4ba2a0
        add esp, 4
        jmp public_4b9e8b
        public_4b9d0c : nop
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        cmp esi, 3
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], ebx
        ja public_4b9e2b
/*FIXUP jmp dword ptr ds : [esi*4+public_4b9f7c] @0x4b9d5d*/
  JMPTB cmp esi, 0
  JMPTB je public_4b9d64
  JMPTB cmp esi, 1
  JMPTB je public_4b9d7a
  JMPTB cmp esi, 2
  JMPTB je public_4b9d90
  JMPTB cmp esi, 3
  JMPTB je public_4b9dd7
  JMPTB int 3
        public_4b9d64 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 1
        lea ecx, ss:[esp+0xC]
        jne public_4b9d8a
        push 0x412
        jmp public_4b9e25
        public_4b9d7a : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 1
        lea ecx, ss:[esp+0xC]
        je public_4b9e20
        public_4b9d8a : nop
        push eax
        jmp public_4b9e25
        public_4b9d90 : nop
        cmp byte ptr ds : [public_66d35a], bl
        jne public_4b9db6
        mov eax, dword ptr ds : [public_672328]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, offset public_672324
        call public_4bd550
        mov byte ptr ds : [public_672404], bl
        public_4b9db6 : nop
        mov eax, dword ptr ds : [public_672400]
        cmp eax, ebx
        je public_4b9e2b
        push ebx
        push eax
        call public_59dd00
        mov edx, dword ptr ds : [public_672400]
        push edx
        call public_43d2a0
        add esp, 0xC
        jmp public_4b9e2b
        public_4b9dd7 : nop
        cmp byte ptr ds : [public_66d35a], bl
        jne public_4b9dfd
        mov eax, dword ptr ds : [public_672328]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, offset public_672324
        call public_4bd550
        mov byte ptr ds : [public_672404], bl
        public_4b9dfd : nop
        mov eax, dword ptr ds : [public_672400]
        cmp eax, ebx
        je public_4b9e1c
        push ebx
        push eax
        call public_59dd00
        mov ecx, dword ptr ds : [public_672400]
        push ecx
        call public_43d2a0
        add esp, 0xC
        public_4b9e1c : nop
        lea ecx, ss:[esp+0xC]
        public_4b9e20 : nop
        push 0x4CF
        public_4b9e25 : nop
        call dword ptr ds : [public_5c633c]
        public_4b9e2b : nop
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c6338]
        cmp dword ptr ss : [esp+0x10], ebx
        je public_4b9e6a
        lea edx, ss:[esp+0xC]
        push edx
        call public_4b9f90
        add esp, 4
        cmp esi, 2
        je public_4b9e52
        cmp esi, 3
        jne public_4b9e5b
        public_4b9e52 : nop
        push edi
        call public_4ba2a0
        add esp, 4
        public_4b9e5b : nop
        lea eax, ss:[esp+0xC]
        push eax
        call public_4ba2a0
        add esp, 4
        jmp public_4b9e79
        public_4b9e6a : nop
        push edi
        call public_4b9f90
        push edi
        call public_4ba2a0
        add esp, 8
        public_4b9e79 : nop
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        public_4b9e8b : nop
        cmp esi, ebx
        je public_4b9e98
        cmp esi, 5
        jne public_4b9f69
        public_4b9e98 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_4b9ed4
        call public_59e6a0
        test al, al
        je public_4b9ed4
        mov ecx, dword ptr ds : [public_66d3f0]
        push 1
        call public_45dcc0
        push 1
        call public_41dda0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        public_4b9ed4 : nop
        push 0x40400000
        push ebx
        call public_41a0f0
        push 1
        call public_41dda0
        push ebx
/*FIXUP push offset public_5c95fc @0x4b9ee7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        mov eax, dword ptr ds : [public_6723fc]
        add esp, 0x14
        cmp eax, ebx
        je public_4b9f44
        push ebx
        push eax
        call public_59dd00
        mov edi, dword ptr ds : [public_6723fc]
        add esp, 8
        cmp edi, ebx
        je public_4b9f39
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_4b9f2a
        public_4b9f18 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_4b9f18
        public_4b9f2a : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_4b9f39 : nop
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45cef0
        public_4b9f44 : nop
        mov ecx, dword ptr ds : [public_66d3f0]
        push 1
        call public_45dcc0
        push ebx
        push 0x67
        mov byte ptr ds : [public_67dcc8], bl
        call public_5763b0
        add esp, 8
        mov byte ptr ds : [public_67dcc8], 1
        public_4b9f69 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x4b9c60)
        ASM_EXPORT_ENTRY_SINGLE(0x4b9dd7, public_4b9dd7)
    }
}

#undef public_4b9c9b
#undef public_4b9cc3
#undef public_4b9ccc
#undef public_4b9cda
#undef public_4b9cf5
#undef public_4b9cfa
#undef public_4b9d0c
#undef public_4b9d64
#undef public_4b9d7a
#undef public_4b9d8a
#undef public_4b9d90
#undef public_4b9db6
#undef public_4b9dd7
#undef public_4b9dfd
#undef public_4b9e1c
#undef public_4b9e20
#undef public_4b9e25
#undef public_4b9e2b
#undef public_4b9e52
#undef public_4b9e5b
#undef public_4b9e6a
#undef public_4b9e79
#undef public_4b9e8b
#undef public_4b9e98
#undef public_4b9ed4
#undef public_4b9f18
#undef public_4b9f2a
#undef public_4b9f39
#undef public_4b9f44
#undef public_4b9f69

#pragma init_seg(compiler)
extern "C" void const* const public_4b9dd7 = __AsmFindLabelExport(&internal_4b9c60, 0x4b9dd7);
