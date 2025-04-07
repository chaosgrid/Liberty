#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6f54ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f55040);
CLANG_FORWARD_PROC_SYMBOL(public_6f55100);
CLANG_FORWARD_PROC_SYMBOL(public_6f551f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55380);

#define public_6f5514a _public_6f5514a
#define public_6f5516f _public_6f5516f
#define public_6f55182 _public_6f55182
#define public_6f55190 _public_6f55190
#define public_6f551a3 _public_6f551a3
#define public_6f551b3 _public_6f551b3
#define public_6f551c7 _public_6f551c7

PROC_DECLARE(0x6f55100, internal_6f55100, public_6f55100);
extern "C" NAKED register_t __cdecl internal_6f55100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_6f61550 @0x6f55109*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61550
        push edi
        call public_6f54f00
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, eax
        xor ebp, ebp
        add esp, 8
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ebx+0xC], esi
        je public_6f551c7
        shl eax, 4
        push eax
        push ebp
        call public_6f4fe10
        add esp, 8
        cmp esi, ebp
        mov dword ptr ds : [ebx+8], eax
        jle public_6f551c7
        mov dword ptr ss : [esp+0x1C], ebp
        public_6f5514a : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        add esi, eax
        call public_6f54f50
        neg eax
        mov dword ptr ds : [esi], eax
        add eax, 6
        add esp, 4
        cmp eax, 5
        ja public_6f551a3
/*FIXUP jmp dword ptr ds : [eax*4+public_6f551d0] @0x6f55168*/
  JMPTB cmp eax, 0
  JMPTB je public_6f551b3
  JMPTB cmp eax, 1
  JMPTB je public_6f551a3
  JMPTB cmp eax, 2
  JMPTB je public_6f55190
  JMPTB cmp eax, 3
  JMPTB je public_6f551a3
  JMPTB cmp eax, 4
  JMPTB je public_6f55182
  JMPTB cmp eax, 5
  JMPTB je public_6f5516f
  JMPTB int 3
        public_6f5516f : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push edi
        call public_6f551f0
        fstp qword ptr ds : [esi+8]
        add esp, 8
        jmp public_6f551b3
        public_6f55182 : nop
        push edi
        call public_6f55040
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_6f551b3
        public_6f55190 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_6f54ea0
        add esp, 8
        mov dword ptr ds : [esi+8], eax
        jmp public_6f551b3
        public_6f551a3 : nop
        push ebx
        push esi
        push ebp
/*FIXUP push offset public_6f61548 @0x6f551a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61548
        call public_6f55380
        add esp, 0x10
        public_6f551b3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        add ecx, 0x10
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_6f5514a
        public_6f551c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f55100)
        ASM_EXPORT_ENTRY_FIRST(0x6f5516f, public_6f5516f)
        ASM_EXPORT_ENTRY(0x6f55182, public_6f55182)
        ASM_EXPORT_ENTRY(0x6f55190, public_6f55190)
        ASM_EXPORT_ENTRY(0x6f551a3, public_6f551a3)
        ASM_EXPORT_ENTRY_LAST(0x6f551b3, public_6f551b3)
    }
}

#undef public_6f5514a
#undef public_6f5516f
#undef public_6f55182
#undef public_6f55190
#undef public_6f551a3
#undef public_6f551b3
#undef public_6f551c7

#pragma init_seg(compiler)
extern "C" void const* const public_6f5516f = __AsmFindLabelExport(&internal_6f55100, 0x6f5516f);
extern "C" void const* const public_6f55182 = __AsmFindLabelExport(&internal_6f55100, 0x6f55182);
extern "C" void const* const public_6f55190 = __AsmFindLabelExport(&internal_6f55100, 0x6f55190);
extern "C" void const* const public_6f551a3 = __AsmFindLabelExport(&internal_6f55100, 0x6f551a3);
extern "C" void const* const public_6f551b3 = __AsmFindLabelExport(&internal_6f55100, 0x6f551b3);
