#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f553e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f55490);
CLANG_FORWARD_PROC_SYMBOL(public_6f554a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f56c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57370);
CLANG_FORWARD_PROC_SYMBOL(public_6f57cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f57aa1 _public_6f57aa1
#define public_6f57ab4 _public_6f57ab4
#define public_6f57ac9 _public_6f57ac9
#define public_6f57aec _public_6f57aec
#define public_6f57aff _public_6f57aff
#define public_6f57b12 _public_6f57b12
#define public_6f57b5c _public_6f57b5c
#define public_6f57b69 _public_6f57b69
#define public_6f57bb0 _public_6f57bb0
#define public_6f57bd0 _public_6f57bd0
#define public_6f57bed _public_6f57bed
#define public_6f57c08 _public_6f57c08
#define public_6f57c10 _public_6f57c10
#define public_6f57c3b _public_6f57c3b
#define public_6f57c4d _public_6f57c4d
#define public_6f57c5a _public_6f57c5a
#define public_6f57c6a _public_6f57c6a
#define public_6f57c6d _public_6f57c6d
#define public_6f57c77 _public_6f57c77

PROC_DECLARE(0x6f57a70, internal_6f57a70, public_6f57a70);
extern "C" NAKED register_t __cdecl internal_6f57a70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x120
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, 1
        push 0
        push ebx
        call public_6f4f5e0
        add esp, 8
        mov esi, eax
        call public_6f55490
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6f57c77
        public_6f57aa1 : nop
        cmp al, 0x25
        je public_6f57ab4
        movsx eax, al
        push eax
        inc esi
        call public_6f55450
        jmp public_6f57c6a
        public_6f57ab4 : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        cmp al, 0x25
        jne public_6f57ac9
        push 0x25
        inc esi
        call public_6f55450
        jmp public_6f57c6a
        public_6f57ac9 : nop
        mov eax, dword ptr ds : [public_6f5a0c0]
        mov byte ptr ss : [esp+0x14], 0x25
        cmp dword ptr ds : [eax], 1
        mov ebp, esi
        jle public_6f57aec
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 4
        push ecx
        call dword ptr ds : [public_6f5a0c4]
        add esp, 8
        jmp public_6f57aff
        public_6f57aec : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 4
        public_6f57aff : nop
        test eax, eax
        je public_6f57b12
        cmp byte ptr ds : [esi+1], 0x24
        jne public_6f57b12
        movsx ebx, byte ptr ds : [esi]
        sub ebx, 0x30
        lea ebp, ds:[esi+2]
        public_6f57b12 : nop
        xor eax, eax
        or ecx, 0xFFFFFFFF
        inc ebx
        mov edi, esi
        repne scasb
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x28]
        not ecx
        push eax
        dec ecx
        lea edx, ds:[ecx+esi+1]
/*FIXUP push offset public_6f61d94 @0x6f57b2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61d94
        push ebp
        mov dword ptr ss : [esp+0x34], edx
        call public_6f57370
        mov ecx, dword ptr ss : [esp+0x40]
        mov esi, eax
        mov eax, 2
        add esp, 0xC
        cmp ecx, eax
        jg public_6f57b5c
        cmp dword ptr ss : [esp+0x3C], eax
        jg public_6f57b5c
        mov ecx, esi
        sub ecx, ebp
        cmp ecx, 0x12
        jle public_6f57b69
/*FIXUP public_6f57b5c : nop
        push offset public_6f61d64 @0x6f57b5c*/
  FIXUP public_6f57b5c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61d64
        call public_6f4c7f0
        add esp, 4
        public_6f57b69 : nop
        mov edi, esi
        sub edi, ebp
        lea edx, ds:[edi+1]
        push edx
        lea eax, ss:[esp+0x19]
        push ebp
        push eax
        call dword ptr ds : [public_6f5a074]
        push 0x200
        mov byte ptr ss : [esp+edi+0x26], 0
        call public_6f553e0
        mov edi, eax
        movsx eax, byte ptr ds : [esi]
        add esp, 0x10
        sub eax, 0x45
        inc esi
        cmp eax, 0x33
        ja public_6f57c4d
/*FIXUP xor ecx, ecx @0x6f57ba1*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6f57c9c] @0x6f57ba3*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f57c84] @0x6f57ba9*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6f57bed
  JMPTB cmp eax, 1
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 2
  JMPTB mov ecx, 0
  JMPTB je public_6f57bed
  JMPTB cmp eax, 3
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 4
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 5
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 6
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 7
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 8
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 9
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 1
  JMPTB je public_6f57bd0
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 2
  JMPTB je public_6f57bb0
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 2
  JMPTB je public_6f57bb0
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 0
  JMPTB je public_6f57bed
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 0
  JMPTB je public_6f57bed
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 0
  JMPTB je public_6f57bed
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 2
  JMPTB je public_6f57bb0
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 1
  JMPTB je public_6f57bd0
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 3
  JMPTB je public_6f57c08
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 4
  JMPTB je public_6f57c10
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 1
  JMPTB je public_6f57bd0
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 5
  JMPTB je public_6f57c4d
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 1
  JMPTB je public_6f57bd0
  JMPTB int 3
        public_6f57bb0 : nop
        push ebx
        call public_6f4f660
        call public_6f57f16
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x10
        jmp public_6f57c5a
        public_6f57bd0 : nop
        push ebx
        call public_6f4f660
        call public_6f57f16
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x10
        jmp public_6f57c5a
        public_6f57bed : nop
        push ebx
        call public_6f4f660
        push ecx
        lea ecx, ss:[esp+0x1C]
        fstp qword ptr ss : [esp]
        push ecx
        push edi
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x10
        jmp public_6f57c5a
        public_6f57c08 : nop
        push ebx
        call public_6f57cd0
        jmp public_6f57c6a
        public_6f57c10 : nop
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        call public_6f4f5e0
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 8
        test ecx, ecx
        jne public_6f57c3b
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, 0x64
        jl public_6f57c3b
        push ecx
        push eax
        call public_6f56c30
        add esp, 8
        jmp public_6f57c6d
        public_6f57c3b : nop
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        call dword ptr ds : [public_6f5a06c]
        add esp, 0xC
        jmp public_6f57c5a
/*FIXUP public_6f57c4d : nop
        push offset public_6f61d48 @0x6f57c4d*/
  FIXUP public_6f57c4d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61d48
        call public_6f4c7f0
        add esp, 4
        public_6f57c5a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
        call public_6f554a0
        public_6f57c6a : nop
        add esp, 4
        public_6f57c6d : nop
        mov al, byte ptr ds : [esi]
        test al, al
        jne public_6f57aa1
        public_6f57c77 : nop
        call public_6f56b70
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f57a70)
        ASM_EXPORT_ENTRY_FIRST(0x6f57bb0, public_6f57bb0)
        ASM_EXPORT_ENTRY(0x6f57bd0, public_6f57bd0)
        ASM_EXPORT_ENTRY(0x6f57bed, public_6f57bed)
        ASM_EXPORT_ENTRY(0x6f57c08, public_6f57c08)
        ASM_EXPORT_ENTRY(0x6f57c10, public_6f57c10)
        ASM_EXPORT_ENTRY_LAST(0x6f57c4d, public_6f57c4d)
    }
}

#undef public_6f57aa1
#undef public_6f57ab4
#undef public_6f57ac9
#undef public_6f57aec
#undef public_6f57aff
#undef public_6f57b12
#undef public_6f57b5c
#undef public_6f57b69
#undef public_6f57bb0
#undef public_6f57bd0
#undef public_6f57bed
#undef public_6f57c08
#undef public_6f57c10
#undef public_6f57c3b
#undef public_6f57c4d
#undef public_6f57c5a
#undef public_6f57c6a
#undef public_6f57c6d
#undef public_6f57c77

#pragma init_seg(compiler)
extern "C" void const* const public_6f57bb0 = __AsmFindLabelExport(&internal_6f57a70, 0x6f57bb0);
extern "C" void const* const public_6f57bd0 = __AsmFindLabelExport(&internal_6f57a70, 0x6f57bd0);
extern "C" void const* const public_6f57bed = __AsmFindLabelExport(&internal_6f57a70, 0x6f57bed);
extern "C" void const* const public_6f57c08 = __AsmFindLabelExport(&internal_6f57a70, 0x6f57c08);
extern "C" void const* const public_6f57c10 = __AsmFindLabelExport(&internal_6f57a70, 0x6f57c10);
extern "C" void const* const public_6f57c4d = __AsmFindLabelExport(&internal_6f57a70, 0x6f57c4d);
