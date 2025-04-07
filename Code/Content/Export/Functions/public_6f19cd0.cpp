#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6f19cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f19f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadbc8);

#define public_6f19d04 _public_6f19d04
#define public_6f19d37 _public_6f19d37
#define public_6f19d6e _public_6f19d6e
#define public_6f19da5 _public_6f19da5
#define public_6f19e0b _public_6f19e0b
#define public_6f19e1c _public_6f19e1c
#define public_6f19e5d _public_6f19e5d
#define public_6f19e9e _public_6f19e9e
#define public_6f19f01 _public_6f19f01
#define public_6f19f11 _public_6f19f11
#define public_6f19f41 _public_6f19f41
#define public_6f19f43 _public_6f19f43
#define public_6f19f46 _public_6f19f46

PROC_DECLARE(0x6f19cd0, internal_6f19cd0, public_6f19cd0);
extern "C" NAKED register_t __cdecl internal_6f19cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fadbc8 @0x6f19cd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadbc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        dec eax
        push esi
        xor ebx, ebx
        cmp eax, 7
        push edi
        ja public_6f19f46
/*FIXUP jmp dword ptr ds : [eax*4+public_6f19f64] @0x6f19cfd*/
  JMPTB cmp eax, 0
  JMPTB je public_6f19d04
  JMPTB cmp eax, 1
  JMPTB je public_6f19d37
  JMPTB cmp eax, 2
  JMPTB je public_6f19d6e
  JMPTB cmp eax, 3
  JMPTB je public_6f19da5
  JMPTB cmp eax, 4
  JMPTB je public_6f19e1c
  JMPTB cmp eax, 5
  JMPTB je public_6f19e5d
  JMPTB cmp eax, 6
  JMPTB je public_6f19e9e
  JMPTB cmp eax, 7
  JMPTB je public_6f19f11
  JMPTB int 3
        public_6f19d04 : nop
        push 0x3C
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f19f41
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, esi
        call public_6f19f90
        mov dword ptr ds : [esi], offset public_6fb8d20
        jmp public_6f19f43
        public_6f19d37 : nop
        push 0x4C
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_6f19f41
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        mov ecx, esi
        call public_6f19f90
        mov dword ptr ds : [esi], offset public_6fb8d04
        jmp public_6f19f43
        public_6f19d6e : nop
        push 0x38
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 2
        je public_6f19f41
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, esi
        call public_6f19f90
        mov dword ptr ds : [esi], offset public_6fb8ce8
        jmp public_6f19f43
        public_6f19da5 : nop
        push 0x80
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 3
        je public_6f19f41
        lea ecx, ds:[esi+8]
        mov byte ptr ds : [esi+4], bl
        call dword ptr ds : [public_6fb3030]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x14], ecx
        lea edi, ds:[esi+0x1C]
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x18], ebx
        call public_6f1a5d0
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov dword ptr ds : [esi], offset public_6fb8ccc
        mov dword ptr ds : [edi], 4
        je public_6f19e0b
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x18], edx
        public_6f19e0b : nop
        mov dword ptr ds : [esi+0x38], ebx
        mov byte ptr ds : [esi+0x3C], bl
        mov dword ptr ds : [esi], offset public_6fb8cb0
        jmp public_6f19f43
        public_6f19e1c : nop
        push 0x54
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 4
        je public_6f19f41
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, esi
        call public_6f19f90
        mov dword ptr ds : [esi+0x38], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi], offset public_6fb8c94
        jmp public_6f19f43
        public_6f19e5d : nop
        push 0x54
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 5
        je public_6f19f41
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, esi
        call public_6f19f90
        mov dword ptr ds : [esi+0x38], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi], offset public_6fb8c78
        jmp public_6f19f43
        public_6f19e9e : nop
        push 0x50
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 6
        je public_6f19f41
        lea ecx, ds:[esi+8]
        mov byte ptr ds : [esi+4], bl
        call dword ptr ds : [public_6fb3030]
        mov edx, dword ptr ss : [esp+0x24]
        lea edi, ds:[esi+0x1C]
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x18], ebx
        call public_6f1a5d0
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov dword ptr ds : [esi], offset public_6fb8ccc
        mov dword ptr ds : [edi], 4
        je public_6f19f01
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x18], eax
        public_6f19f01 : nop
        lea ecx, ds:[esi+0x38]
        call public_6eac680
        mov dword ptr ds : [esi], offset public_6fb8c5c
        jmp public_6f19f43
        public_6f19f11 : nop
        push 0x3C
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 7
        je public_6f19f41
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, esi
        call public_6f19f90
        mov dword ptr ds : [esi], offset public_6fb8c40
        jmp public_6f19f43
        public_6f19f41 : nop
        xor esi, esi
        public_6f19f43 : nop
        mov dword ptr ss : [ebp], esi
        public_6f19f46 : nop
        mov ecx, dword ptr ss : [ebp]
        pop edi
        xor eax, eax
        cmp ecx, ebx
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        setne al
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f19cd0)
        ASM_EXPORT_ENTRY_FIRST(0x6f19d04, public_6f19d04)
        ASM_EXPORT_ENTRY(0x6f19d37, public_6f19d37)
        ASM_EXPORT_ENTRY(0x6f19d6e, public_6f19d6e)
        ASM_EXPORT_ENTRY(0x6f19da5, public_6f19da5)
        ASM_EXPORT_ENTRY(0x6f19e1c, public_6f19e1c)
        ASM_EXPORT_ENTRY(0x6f19e5d, public_6f19e5d)
        ASM_EXPORT_ENTRY(0x6f19e9e, public_6f19e9e)
        ASM_EXPORT_ENTRY_LAST(0x6f19f11, public_6f19f11)
    }
}

#undef public_6f19d04
#undef public_6f19d37
#undef public_6f19d6e
#undef public_6f19da5
#undef public_6f19e0b
#undef public_6f19e1c
#undef public_6f19e5d
#undef public_6f19e9e
#undef public_6f19f01
#undef public_6f19f11
#undef public_6f19f41
#undef public_6f19f43
#undef public_6f19f46

#pragma init_seg(compiler)
extern "C" void const* const public_6f19d04 = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19d04);
extern "C" void const* const public_6f19d37 = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19d37);
extern "C" void const* const public_6f19d6e = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19d6e);
extern "C" void const* const public_6f19da5 = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19da5);
extern "C" void const* const public_6f19e1c = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19e1c);
extern "C" void const* const public_6f19e5d = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19e5d);
extern "C" void const* const public_6f19e9e = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19e9e);
extern "C" void const* const public_6f19f11 = __AsmFindLabelExport(&internal_6f19cd0, 0x6f19f11);
