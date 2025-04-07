#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367960);
CLANG_FORWARD_PROC_SYMBOL(public_6367b40);
CLANG_FORWARD_PROC_SYMBOL(public_6367bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6367db0);

#define public_6367dc9 _public_6367dc9
#define public_6367dd0 _public_6367dd0
#define public_6367e00 _public_6367e00
#define public_6367e0b _public_6367e0b
#define public_6367e17 _public_6367e17
#define public_6367e36 _public_6367e36
#define public_6367e63 _public_6367e63
#define public_6367e68 _public_6367e68
#define public_6367e70 _public_6367e70
#define public_6367e88 _public_6367e88

PROC_DECLARE(0x6367db0, internal_6367db0, public_6367db0);
/* CHUNK of public_63673a0 */
extern "C" NAKED register_t __cdecl internal_6367db0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        push edi
        jne public_6367dc9
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 
        public_6367dc9 : nop
        lea ebx, ds:[eax-1]
        test ebx, ebx
        jl public_6367e0b
        public_6367dd0 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+4]
        imul eax, ebx
        lea edx, ds:[ecx+eax*4]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edi, edx
        and edi, 0xFFFFFFF0
        mov eax, edx
        sub eax, edi
        sar eax, 2
        lea eax, ds:[eax+ecx-1]
        test eax, eax
        jl public_6367e00
        lea ecx, ds:[eax+4]
        and ecx, 0x3FFFFFFC
        xor eax, eax
        rep stosd
        public_6367e00 : nop
        dec ebx
        mov dword ptr ds : [edx+ebx*4+4], 0x3F800000
        jns public_6367dd0
        public_6367e0b : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov ebp, 1
        cmp eax, ebp
        jle public_6367e70
        public_6367e17 : nop
        lea ebx, ss:[ebp-1]
        push ebx
        mov ecx, esi
        call public_6367b40
        push ebx
        mov ecx, esi
        call public_6367960
        test eax, eax
        je public_6367e88
        mov edi, dword ptr ds : [esi+0x28]
        dec edi
        cmp edi, ebp
        jl public_6367e68
        public_6367e36 : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+8]
        imul edx, edi
        add edx, ebx
        fld dword ptr ds : [eax+edx*4]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6367e63
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push edi
        push ebx
        mov ecx, esi
        call public_6367bb0
        public_6367e63 : nop
        dec edi
        cmp edi, ebp
        jge public_6367e36
        public_6367e68 : nop
        mov eax, dword ptr ds : [esi+0x28]
        inc ebp
        cmp ebp, eax
        jl public_6367e17
        public_6367e70 : nop
        mov edx, dword ptr ds : [esi+0x28]
        dec edx
        push edx
        mov ecx, esi
        call public_6367960
        pop edi
        neg eax
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        pop ecx
        ret 
        public_6367e88 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6367db0)
        ASM_EXPORT_ENTRY_FIRST(0x6367dc9, public_6367dc9)
        ASM_EXPORT_ENTRY(0x6367dd0, public_6367dd0)
        ASM_EXPORT_ENTRY(0x6367e00, public_6367e00)
        ASM_EXPORT_ENTRY(0x6367e0b, public_6367e0b)
        ASM_EXPORT_ENTRY(0x6367e17, public_6367e17)
        ASM_EXPORT_ENTRY(0x6367e36, public_6367e36)
        ASM_EXPORT_ENTRY(0x6367e63, public_6367e63)
        ASM_EXPORT_ENTRY(0x6367e68, public_6367e68)
        ASM_EXPORT_ENTRY(0x6367e70, public_6367e70)
        ASM_EXPORT_ENTRY_LAST(0x6367e88, public_6367e88)
    }
}

#undef public_6367dc9
#undef public_6367dd0
#undef public_6367e00
#undef public_6367e0b
#undef public_6367e17
#undef public_6367e36
#undef public_6367e63
#undef public_6367e68
#undef public_6367e70
#undef public_6367e88

#pragma init_seg(compiler)
extern "C" void const* const public_6367dc9 = __AsmFindLabelExport(&internal_6367db0, 0x6367dc9);
extern "C" void const* const public_6367dd0 = __AsmFindLabelExport(&internal_6367db0, 0x6367dd0);
extern "C" void const* const public_6367e00 = __AsmFindLabelExport(&internal_6367db0, 0x6367e00);
extern "C" void const* const public_6367e0b = __AsmFindLabelExport(&internal_6367db0, 0x6367e0b);
extern "C" void const* const public_6367e17 = __AsmFindLabelExport(&internal_6367db0, 0x6367e17);
extern "C" void const* const public_6367e36 = __AsmFindLabelExport(&internal_6367db0, 0x6367e36);
extern "C" void const* const public_6367e63 = __AsmFindLabelExport(&internal_6367db0, 0x6367e63);
extern "C" void const* const public_6367e68 = __AsmFindLabelExport(&internal_6367db0, 0x6367e68);
extern "C" void const* const public_6367e70 = __AsmFindLabelExport(&internal_6367db0, 0x6367e70);
extern "C" void const* const public_6367e88 = __AsmFindLabelExport(&internal_6367db0, 0x6367e88);
