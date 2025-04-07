#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4096);
CLANG_FORWARD_PROC_SYMBOL(public_6ef420f);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4286);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4374);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52ac);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52cb);
CLANG_FORWARD_JUMP_SYMBOL(public_6efbc9c);

#define public_6ef4269 _public_6ef4269

PROC_DECLARE(0x6ef420f, internal_6ef420f, public_6ef420f);
extern "C" NAKED register_t __cdecl internal_6ef420f()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, public_6efbc9c
        call public_6ef52ac
        sub esp, 0x30
        mov al, byte ptr ss : [ebp-0xD]
        push esi
        push 0
        lea ecx, ss:[ebp-0x20]
        mov byte ptr ss : [ebp-0x20], al
        call public_6ef2800
        mov esi, offset public_6efc2b4
        push esi
        call public_6ef5230
        pop ecx
        push eax
        push esi
        lea ecx, ss:[ebp-0x20]
        call public_6ef4374
        and dword ptr ss : [ebp-4], 0
        lea eax, ss:[ebp-0x20]
        push eax
        lea ecx, ss:[ebp-0x3C]
        call public_6ef4096
        lea eax, ss:[ebp-0x3C]
/*FIXUP push offset public_6efcbc0 @0x6ef4256*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efcbc0
        push eax
        mov dword ptr ss : [ebp-0x3C], offset public_6efc2a8
        call public_6ef52cb
        pop esi
        public_6ef4269 : nop
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_6ef4286
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_6efcbc0 @0x6ef427b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efcbc0
        push eax
        call public_6ef52cb
        UNREACHABLE_TRAP(0x6ef420f)
        ASM_EXPORT_ENTRY_SINGLE(0x6ef4269, public_6ef4269)
    }
}

#undef public_6ef4269

#pragma init_seg(compiler)
extern "C" void const* const public_6ef4269 = __AsmFindLabelExport(&internal_6ef420f, 0x6ef4269);
