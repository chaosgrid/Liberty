#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5620);
CLANG_FORWARD_PROC_SYMBOL(public_4f5410);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf37f);

#define public_4f544b _public_4f544b
#define public_4f5457 _public_4f5457
#define public_4f5460 _public_4f5460
#define public_4f547a _public_4f547a
#define public_4f5483 _public_4f5483
#define public_4f54c2 _public_4f54c2
#define public_4f54cb _public_4f54cb
#define public_4f5500 _public_4f5500

PROC_DECLARE(0x4f5410, internal_4f5410, public_4f5410);
/* CHUNK of public_4f53a0 */
extern "C" NAKED register_t __cdecl internal_4f5410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5bf37f @0x4f5412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf37f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+8]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x1C], 2
        jne public_4f544b
        mov dword ptr ss : [esp+0xC], ebx
        jmp public_4f5457
        public_4f544b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0xC], eax
        public_4f5457 : nop
        cmp dword ptr ss : [esp+0xC], ebx
        push ebp
        jle public_4f5483
        mov edi, edi
        public_4f5460 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [eax+ebx*4]
        test ebp, ebp
        je public_4f547a
        mov ecx, ebp
        call public_4e5620
        push ebp
        call public_5b7e1d
        add esp, 4
        public_4f547a : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        cmp ebx, eax
        jl public_4f5460
        public_4f5483 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push eax
        push eax
        call public_527820
        mov ebp, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push ebp
        mov ecx, esi
        call public_53aaa0
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        pop ebp
        je public_4f54cb
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4f54c2
        cmp cl, 0xFF
        je public_4f54c2
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4f54cb
        public_4f54c2 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4f54cb : nop
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ds : [edi]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_4f5500
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4f5500 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4f5410)
        ASM_EXPORT_ENTRY_FIRST(0x4f544b, public_4f544b)
        ASM_EXPORT_ENTRY(0x4f5457, public_4f5457)
        ASM_EXPORT_ENTRY(0x4f5460, public_4f5460)
        ASM_EXPORT_ENTRY(0x4f547a, public_4f547a)
        ASM_EXPORT_ENTRY(0x4f5483, public_4f5483)
        ASM_EXPORT_ENTRY(0x4f54c2, public_4f54c2)
        ASM_EXPORT_ENTRY(0x4f54cb, public_4f54cb)
        ASM_EXPORT_ENTRY_LAST(0x4f5500, public_4f5500)
    }
}

#undef public_4f544b
#undef public_4f5457
#undef public_4f5460
#undef public_4f547a
#undef public_4f5483
#undef public_4f54c2
#undef public_4f54cb
#undef public_4f5500

#pragma init_seg(compiler)
extern "C" void const* const public_4f544b = __AsmFindLabelExport(&internal_4f5410, 0x4f544b);
extern "C" void const* const public_4f5457 = __AsmFindLabelExport(&internal_4f5410, 0x4f5457);
extern "C" void const* const public_4f5460 = __AsmFindLabelExport(&internal_4f5410, 0x4f5460);
extern "C" void const* const public_4f547a = __AsmFindLabelExport(&internal_4f5410, 0x4f547a);
extern "C" void const* const public_4f5483 = __AsmFindLabelExport(&internal_4f5410, 0x4f5483);
extern "C" void const* const public_4f54c2 = __AsmFindLabelExport(&internal_4f5410, 0x4f54c2);
extern "C" void const* const public_4f54cb = __AsmFindLabelExport(&internal_4f5410, 0x4f54cb);
extern "C" void const* const public_4f5500 = __AsmFindLabelExport(&internal_4f5410, 0x4f5500);
