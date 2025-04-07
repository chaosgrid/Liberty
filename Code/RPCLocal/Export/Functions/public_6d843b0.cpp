#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d843b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db22fb);

#define public_6d843f3 _public_6d843f3
#define public_6d84409 _public_6d84409
#define public_6d84434 _public_6d84434
#define public_6d8444a _public_6d8444a

PROC_DECLARE(0x6d843b0, internal_6d843b0, public_6d843b0);
/* CHUNK of public_6d84230 */
extern "C" NAKED register_t __cdecl internal_6d843b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6db22fb @0x6d843b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db22fb
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
        mov dword ptr ds : [ebx], offset public_6db3750
        mov ebp, dword ptr ds : [ebx+0x90]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x8C]
        mov dword ptr ss : [esp+0x20], 1
        je public_6d84409
        public_6d843f3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db30a0]
        cmp esi, ebp
        jne public_6d843f3
        public_6d84409 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov ebp, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x80]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x20], al
        je public_6d8444a
        public_6d84434 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6db309c]
        cmp esi, ebp
        jne public_6d84434
        public_6d8444a : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6db1dc2
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x74]
        push eax
        call public_6db1dc2
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
        UNREACHABLE_TRAP(0x6d843b0)
        ASM_EXPORT_ENTRY_FIRST(0x6d843f3, public_6d843f3)
        ASM_EXPORT_ENTRY(0x6d84409, public_6d84409)
        ASM_EXPORT_ENTRY(0x6d84434, public_6d84434)
        ASM_EXPORT_ENTRY_LAST(0x6d8444a, public_6d8444a)
    }
}

#undef public_6d843f3
#undef public_6d84409
#undef public_6d84434
#undef public_6d8444a

#pragma init_seg(compiler)
extern "C" void const* const public_6d843f3 = __AsmFindLabelExport(&internal_6d843b0, 0x6d843f3);
extern "C" void const* const public_6d84409 = __AsmFindLabelExport(&internal_6d843b0, 0x6d84409);
extern "C" void const* const public_6d84434 = __AsmFindLabelExport(&internal_6d843b0, 0x6d84434);
extern "C" void const* const public_6d8444a = __AsmFindLabelExport(&internal_6d843b0, 0x6d8444a);
