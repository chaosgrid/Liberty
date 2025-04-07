#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf0540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6083b);

#define public_6cf0583 _public_6cf0583
#define public_6cf0599 _public_6cf0599
#define public_6cf05c4 _public_6cf05c4
#define public_6cf05da _public_6cf05da

PROC_DECLARE(0x6cf0540, internal_6cf0540, public_6cf0540);
/* CHUNK of public_6cefb20 */
extern "C" NAKED register_t __cdecl internal_6cf0540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d6083b @0x6cf0542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6083b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_6d65f68
        mov ebp, dword ptr ds : [ebx+0x90]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x8C]
        mov dword ptr ss : [esp+0x20], 1
        je public_6cf0599
        public_6cf0583 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d641e8]
        cmp esi, ebp
        jne public_6cf0583
        public_6cf0599 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x80]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], al
        je public_6cf05da
        public_6cf05c4 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d643d0]
        cmp esi, ebp
        jne public_6cf05c4
        public_6cf05da : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6d5ffb0
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x74]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ds : [ebx+0x74], esi
        mov dword ptr ds : [ebx+0x78], esi
        mov dword ptr ds : [ebx+0x7C], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cf0540)
        ASM_EXPORT_ENTRY_FIRST(0x6cf0583, public_6cf0583)
        ASM_EXPORT_ENTRY(0x6cf0599, public_6cf0599)
        ASM_EXPORT_ENTRY(0x6cf05c4, public_6cf05c4)
        ASM_EXPORT_ENTRY_LAST(0x6cf05da, public_6cf05da)
    }
}

#undef public_6cf0583
#undef public_6cf0599
#undef public_6cf05c4
#undef public_6cf05da

#pragma init_seg(compiler)
extern "C" void const* const public_6cf0583 = __AsmFindLabelExport(&internal_6cf0540, 0x6cf0583);
extern "C" void const* const public_6cf0599 = __AsmFindLabelExport(&internal_6cf0540, 0x6cf0599);
extern "C" void const* const public_6cf05c4 = __AsmFindLabelExport(&internal_6cf0540, 0x6cf05c4);
extern "C" void const* const public_6cf05da = __AsmFindLabelExport(&internal_6cf0540, 0x6cf05da);
