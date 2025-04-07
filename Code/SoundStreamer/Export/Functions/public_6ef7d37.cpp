#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4b33);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4d92);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4dfa);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7d37);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7e43);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8031);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);

#define public_6ef7dc4 _public_6ef7dc4
#define public_6ef7dd3 _public_6ef7dd3
#define public_6ef7ddd _public_6ef7ddd
#define public_6ef7df5 _public_6ef7df5
#define public_6ef7dfd _public_6ef7dfd
#define public_6ef7e42 _public_6ef7e42

PROC_DECLARE(0x6ef7d37, internal_6ef7d37, public_6ef7d37);
extern "C" NAKED register_t __cdecl internal_6ef7d37()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc420 @0x6ef7d3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc420
/*FIXUP push offset _public_6efa070 @0x6ef7d41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x2C], eax
        xor ebx, ebx
        mov dword ptr ss : [ebp-0x24], ebx
        mov esi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [esi-4]
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ds : [public_6f010e0]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, dword ptr ds : [public_6f010e4]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_6f010e0], edi
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [public_6f010e4], ecx
        mov dword ptr ss : [ebp-4], ebx
        mov dword ptr ss : [ebp-4], 1
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push eax
        push dword ptr ss : [ebp+0x14]
        push esi
        call public_6ef4b33
        add esp, 0x14
        mov dword ptr ss : [ebp-0x2C], eax
        mov dword ptr ss : [ebp-4], ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ef7dfd
        mov eax, dword ptr ss : [ebp-0x2C]
        public_6ef7dc4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ef7dd3 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6ef7e43
        pop ecx
        ret 
        public_6ef7ddd : nop
        mov esp, dword ptr ss : [ebp-0x18]
        and dword ptr ss : [ebp-0x2C], 0
        push 0xFFFFFFFF
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ef4d92
        pop ecx
        pop ecx
        xor eax, eax
        jmp public_6ef7dc4
        public_6ef7df5 : nop
        xor ebx, ebx
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        public_6ef7dfd : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [esi-4], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [public_6f010e0], eax
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [public_6f010e4], eax
        cmp dword ptr ds : [edi], 0xE06D7363
        jne public_6ef7e42
        cmp dword ptr ds : [edi+0x10], 3
        jne public_6ef7e42
        cmp dword ptr ds : [edi+0x14], 0x19930520
        jne public_6ef7e42
        cmp dword ptr ss : [ebp-0x24], ebx
        jne public_6ef7e42
        cmp dword ptr ss : [ebp-0x2C], ebx
        je public_6ef7e42
        call public_6ef4dfa
        push eax
        push edi
        call public_6ef8031
        pop ecx
        pop ecx
        public_6ef7e42 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef7d37)
        ASM_EXPORT_ENTRY_FIRST(0x6ef7dd3, public_6ef7dd3)
        ASM_EXPORT_ENTRY(0x6ef7ddd, public_6ef7ddd)
        ASM_EXPORT_ENTRY_LAST(0x6ef7df5, public_6ef7df5)
    }
}

#undef public_6ef7dc4
#undef public_6ef7dd3
#undef public_6ef7ddd
#undef public_6ef7df5
#undef public_6ef7dfd
#undef public_6ef7e42

#pragma init_seg(compiler)
extern "C" void const* const public_6ef7dd3 = __AsmFindLabelExport(&internal_6ef7d37, 0x6ef7dd3);
extern "C" void const* const public_6ef7ddd = __AsmFindLabelExport(&internal_6ef7d37, 0x6ef7ddd);
extern "C" void const* const public_6ef7df5 = __AsmFindLabelExport(&internal_6ef7d37, 0x6ef7df5);
