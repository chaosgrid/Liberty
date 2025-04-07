#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4bac);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4c60);

#define public_6ef4c32 _public_6ef4c32
#define public_6ef4c4f _public_6ef4c4f
#define public_6ef4c58 _public_6ef4c58

PROC_DECLARE(0x6ef4bac, internal_6ef4bac, public_6ef4bac);
extern "C" NAKED register_t __cdecl internal_6ef4bac()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x34
        push ebx
        push esi
        push edi
        and dword ptr ss : [ebp-0x28], 0
        mov dword ptr ss : [ebp-0x24], offset _public_6ef4c60
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x20], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [ebp-0x14], eax
        and dword ptr ss : [ebp-0x10], 0
        and dword ptr ss : [ebp-0xC], 0
        and dword ptr ss : [ebp-8], 0
        and dword ptr ss : [ebp-4], 0
/*FIXUP mov dword ptr ss : [ebp-0x10], offset public_6ef4c32 @0x6ef4be8*/
  FIXUP push eax
  FIXUP lea eax, ds : [public_6ef4c32]
  FIXUP mov dword ptr ss : [ebp-0x10], eax
  FIXUP pop eax
        mov dword ptr ss : [ebp-0xC], esp
        mov dword ptr ss : [ebp-8], ebp
        mov eax, dword ptr fs : [0]
        mov dword ptr ss : [ebp-0x28], eax
        lea eax, ss:[ebp-0x28]
        mov dword ptr fs : [0], eax
        mov dword ptr ss : [ebp-0x34], 1
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x30], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x2C], eax
        lea eax, ss:[ebp-0x30]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push dword ptr ds : [eax]
        call dword ptr ds : [public_6f010e8]
        pop ecx
        pop ecx
        and dword ptr ss : [ebp-0x34], 0
        public_6ef4c32 : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6ef4c4f
        mov ebx, dword ptr fs : [0]
        mov eax, dword ptr ds : [ebx]
        mov ebx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ebx], eax
        mov dword ptr fs : [0], ebx
        jmp public_6ef4c58
        public_6ef4c4f : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr fs : [0], eax
        public_6ef4c58 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef4bac)
        ASM_EXPORT_ENTRY_SINGLE(0x6ef4c32, public_6ef4c32)
    }
}

#undef public_6ef4c32
#undef public_6ef4c4f
#undef public_6ef4c58

#pragma init_seg(compiler)
extern "C" void const* const public_6ef4c32 = __AsmFindLabelExport(&internal_6ef4bac, 0x6ef4c32);
