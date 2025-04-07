#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4470);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a12b);

#define public_6bd44b3 _public_6bd44b3
#define public_6bd44c9 _public_6bd44c9
#define public_6bd44f4 _public_6bd44f4
#define public_6bd450a _public_6bd450a

PROC_DECLARE(0x6bd4470, internal_6bd4470, public_6bd4470);
/* CHUNK of public_6bd4390 */
extern "C" NAKED register_t __cdecl internal_6bd4470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6c0a12b @0x6bd4472*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a12b
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
        mov dword ptr ds : [ebx], offset public_6c0b7a0
        mov ebp, dword ptr ds : [ebx+0x90]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x8C]
        mov dword ptr ss : [esp+0x20], 1
        je public_6bd44c9
        public_6bd44b3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6c0b0c8]
        cmp esi, ebp
        jne public_6bd44b3
        public_6bd44c9 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x80]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], al
        je public_6bd450a
        public_6bd44f4 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6c0b0c4]
        cmp esi, ebp
        jne public_6bd44f4
        public_6bd450a : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6c09aaa
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x74]
        push eax
        call public_6c09aaa
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
        UNREACHABLE_TRAP(0x6bd4470)
        ASM_EXPORT_ENTRY_FIRST(0x6bd44b3, public_6bd44b3)
        ASM_EXPORT_ENTRY(0x6bd44c9, public_6bd44c9)
        ASM_EXPORT_ENTRY(0x6bd44f4, public_6bd44f4)
        ASM_EXPORT_ENTRY_LAST(0x6bd450a, public_6bd450a)
    }
}

#undef public_6bd44b3
#undef public_6bd44c9
#undef public_6bd44f4
#undef public_6bd450a

#pragma init_seg(compiler)
extern "C" void const* const public_6bd44b3 = __AsmFindLabelExport(&internal_6bd4470, 0x6bd44b3);
extern "C" void const* const public_6bd44c9 = __AsmFindLabelExport(&internal_6bd4470, 0x6bd44c9);
extern "C" void const* const public_6bd44f4 = __AsmFindLabelExport(&internal_6bd4470, 0x6bd44f4);
extern "C" void const* const public_6bd450a = __AsmFindLabelExport(&internal_6bd4470, 0x6bd450a);
