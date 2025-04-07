#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf83c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60bbb);

#define public_6cf8403 _public_6cf8403
#define public_6cf8419 _public_6cf8419
#define public_6cf8444 _public_6cf8444
#define public_6cf845a _public_6cf845a

PROC_DECLARE(0x6cf83c0, internal_6cf83c0, public_6cf83c0);
/* CHUNK of public_6cf80d0 */
extern "C" NAKED register_t __cdecl internal_6cf83c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d60bbb @0x6cf83c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60bbb
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
        je public_6cf8419
        public_6cf8403 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d641e8]
        cmp esi, ebp
        jne public_6cf8403
        public_6cf8419 : nop
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
        je public_6cf845a
        public_6cf8444 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d643d0]
        cmp esi, ebp
        jne public_6cf8444
        public_6cf845a : nop
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
        UNREACHABLE_TRAP(0x6cf83c0)
        ASM_EXPORT_ENTRY_FIRST(0x6cf8403, public_6cf8403)
        ASM_EXPORT_ENTRY(0x6cf8419, public_6cf8419)
        ASM_EXPORT_ENTRY(0x6cf8444, public_6cf8444)
        ASM_EXPORT_ENTRY_LAST(0x6cf845a, public_6cf845a)
    }
}

#undef public_6cf8403
#undef public_6cf8419
#undef public_6cf8444
#undef public_6cf845a

#pragma init_seg(compiler)
extern "C" void const* const public_6cf8403 = __AsmFindLabelExport(&internal_6cf83c0, 0x6cf8403);
extern "C" void const* const public_6cf8419 = __AsmFindLabelExport(&internal_6cf83c0, 0x6cf8419);
extern "C" void const* const public_6cf8444 = __AsmFindLabelExport(&internal_6cf83c0, 0x6cf8444);
extern "C" void const* const public_6cf845a = __AsmFindLabelExport(&internal_6cf83c0, 0x6cf845a);
