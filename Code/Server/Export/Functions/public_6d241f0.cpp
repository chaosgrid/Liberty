#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d241f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62998);

#define public_6d24225 _public_6d24225
#define public_6d2423a _public_6d2423a
#define public_6d2425a _public_6d2425a

PROC_DECLARE(0x6d241f0, internal_6d241f0, public_6d241f0);
/* CHUNK of public_6d1c230 */
extern "C" NAKED register_t __cdecl internal_6d241f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d62998 @0x6d241f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62998
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [ebp], offset public_6d68e7c
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+8]
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d2423a
        public_6d24225 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d23fd0
        cmp esi, ebx
        jne public_6d24225
        public_6d2423a : nop
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ss : [ebp], offset public_6d68d00
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6d2425a
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d2425a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6d68d28
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d241f0)
        ASM_EXPORT_ENTRY_FIRST(0x6d24225, public_6d24225)
        ASM_EXPORT_ENTRY(0x6d2423a, public_6d2423a)
        ASM_EXPORT_ENTRY_LAST(0x6d2425a, public_6d2425a)
    }
}

#undef public_6d24225
#undef public_6d2423a
#undef public_6d2425a

#pragma init_seg(compiler)
extern "C" void const* const public_6d24225 = __AsmFindLabelExport(&internal_6d241f0, 0x6d24225);
extern "C" void const* const public_6d2423a = __AsmFindLabelExport(&internal_6d241f0, 0x6d2423a);
extern "C" void const* const public_6d2425a = __AsmFindLabelExport(&internal_6d241f0, 0x6d2425a);
