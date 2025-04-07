#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7c08);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7ca6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef80c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8162);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);

#define public_6ef7c3a _public_6ef7c3a
#define public_6ef7c49 _public_6ef7c49
#define public_6ef7c4e _public_6ef7c4e
#define public_6ef7c69 _public_6ef7c69
#define public_6ef7c6f _public_6ef7c6f
#define public_6ef7c79 _public_6ef7c79
#define public_6ef7c89 _public_6ef7c89
#define public_6ef7c94 _public_6ef7c94

PROC_DECLARE(0x6ef7c08, internal_6ef7c08, public_6ef7c08);
extern "C" NAKED register_t __cdecl internal_6ef7c08()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc410 @0x6ef7c0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc410
/*FIXUP push offset _public_6efa070 @0x6ef7c12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp-0x1C], esi
        mov edi, dword ptr ss : [ebp+0x10]
        public_6ef7c3a : nop
        cmp esi, dword ptr ss : [ebp+0x14]
        je public_6ef7c94
        cmp esi, 0xFFFFFFFF
        jle public_6ef7c49
        cmp esi, dword ptr ds : [edi+4]
        jl public_6ef7c4e
        public_6ef7c49 : nop
        call public_6ef8162
        public_6ef7c4e : nop
        and dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax+esi*8+4]
        test eax, eax
        je public_6ef7c69
        push 0x103
        push ebx
        push eax
        call public_6ef80c0
        public_6ef7c69 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6ef7c89
        public_6ef7c6f : nop
        push dword ptr ss : [ebp-0x14]
        call public_6ef7ca6
        pop ecx
        ret 
        public_6ef7c79 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov edi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp-0x1C]
        public_6ef7c89 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax+esi*8]
        mov dword ptr ss : [ebp-0x1C], esi
        jmp public_6ef7c3a
        public_6ef7c94 : nop
        mov dword ptr ds : [ebx+8], esi
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef7c08)
        ASM_EXPORT_ENTRY_FIRST(0x6ef7c6f, public_6ef7c6f)
        ASM_EXPORT_ENTRY_LAST(0x6ef7c79, public_6ef7c79)
    }
}

#undef public_6ef7c3a
#undef public_6ef7c49
#undef public_6ef7c4e
#undef public_6ef7c69
#undef public_6ef7c6f
#undef public_6ef7c79
#undef public_6ef7c89
#undef public_6ef7c94

#pragma init_seg(compiler)
extern "C" void const* const public_6ef7c6f = __AsmFindLabelExport(&internal_6ef7c08, 0x6ef7c6f);
extern "C" void const* const public_6ef7c79 = __AsmFindLabelExport(&internal_6ef7c08, 0x6ef7c79);
