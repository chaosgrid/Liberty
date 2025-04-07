#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246214);
CLANG_FORWARD_PROC_SYMBOL(public_62463e2);
CLANG_FORWARD_PROC_SYMBOL(public_62464b2);

#define public_6246410 _public_6246410
#define public_624642b _public_624642b
#define public_624644c _public_624644c
#define public_6246463 _public_6246463

PROC_DECLARE(0x62463e2, internal_62463e2, public_62463e2);
extern "C" NAKED register_t __cdecl internal_62463e2()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_624fe90 @0x62463e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_624fe90
/*FIXUP push offset _public_62464b2 @0x62463ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62464b2
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        xor eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-0x1C], eax
        public_6246410 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_624642b
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6246410
        public_624642b : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_624644c
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_624644c : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6246463
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6246214
        public_6246463 : nop
        ret 
        UNREACHABLE_TRAP(0x62463e2)
        ASM_EXPORT_ENTRY_SINGLE(0x624644c, public_624644c)
    }
}

#undef public_6246410
#undef public_624642b
#undef public_624644c
#undef public_6246463

#pragma init_seg(compiler)
extern "C" void const* const public_624644c = __AsmFindLabelExport(&internal_62463e2, 0x624644c);
