#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0be60);

#define public_6f0be74 _public_6f0be74
#define public_6f0be8c _public_6f0be8c
#define public_6f0bea4 _public_6f0bea4
#define public_6f0bec2 _public_6f0bec2
#define public_6f0bed3 _public_6f0bed3
#define public_6f0beeb _public_6f0beeb

PROC_DECLARE(0x6f0be60, internal_6f0be60, public_6f0be60);
/* CHUNK of public_6f0b2d0 */
extern "C" NAKED register_t __cdecl internal_6f0be60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x18]
        cmp eax, 2
        push esi
        push edi
        je public_6f0be74
        cmp eax, 1
        je public_6f0be74
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6f0be74 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jle public_6f0bec2
        mov edi, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [ecx+0x14]
        cmp edi, esi
        jg public_6f0be8c
        mov eax, esi
        sub eax, edi
        pop edi
        pop esi
        ret 
        public_6f0be8c : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x18]
        add ecx, 0x14
        test eax, eax
        jne public_6f0bea4
        xor edx, edx
        sub esi, edi
        pop edi
        lea eax, ds:[esi+edx+1]
        pop esi
        ret 
        public_6f0bea4 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edi
        pop edi
        lea eax, ds:[esi+edx+1]
        pop esi
        ret 
        public_6f0bec2 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ds : [ecx+0x14]
        cmp esi, edi
        jl public_6f0bed3
        mov eax, esi
        sub eax, edi
        pop edi
        pop esi
        ret 
        public_6f0bed3 : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x18]
        add ecx, 0x14
        test eax, eax
        jne public_6f0beeb
        xor edx, edx
        sub esi, edi
        pop edi
        lea eax, ds:[esi+edx+1]
        pop esi
        ret 
        public_6f0beeb : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        sub esi, edi
        add edx, ecx
        pop edi
        lea eax, ds:[esi+edx+1]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f0be60)
        ASM_EXPORT_ENTRY_FIRST(0x6f0be74, public_6f0be74)
        ASM_EXPORT_ENTRY(0x6f0be8c, public_6f0be8c)
        ASM_EXPORT_ENTRY(0x6f0bea4, public_6f0bea4)
        ASM_EXPORT_ENTRY(0x6f0bec2, public_6f0bec2)
        ASM_EXPORT_ENTRY(0x6f0bed3, public_6f0bed3)
        ASM_EXPORT_ENTRY_LAST(0x6f0beeb, public_6f0beeb)
    }
}

#undef public_6f0be74
#undef public_6f0be8c
#undef public_6f0bea4
#undef public_6f0bec2
#undef public_6f0bed3
#undef public_6f0beeb

#pragma init_seg(compiler)
extern "C" void const* const public_6f0be74 = __AsmFindLabelExport(&internal_6f0be60, 0x6f0be74);
extern "C" void const* const public_6f0be8c = __AsmFindLabelExport(&internal_6f0be60, 0x6f0be8c);
extern "C" void const* const public_6f0bea4 = __AsmFindLabelExport(&internal_6f0be60, 0x6f0bea4);
extern "C" void const* const public_6f0bec2 = __AsmFindLabelExport(&internal_6f0be60, 0x6f0bec2);
extern "C" void const* const public_6f0bed3 = __AsmFindLabelExport(&internal_6f0be60, 0x6f0bed3);
extern "C" void const* const public_6f0beeb = __AsmFindLabelExport(&internal_6f0be60, 0x6f0beeb);
