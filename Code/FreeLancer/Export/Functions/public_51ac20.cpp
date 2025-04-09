#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_51d7f0);
CLANG_FORWARD_PROC_SYMBOL(public_576240);

#define public_51ac34 _public_51ac34
#define public_51ac4b _public_51ac4b
#define public_51ac61 _public_51ac61
#define public_51ac81 _public_51ac81
#define public_51ac94 _public_51ac94
#define public_51ac9f _public_51ac9f
#define public_51acbf _public_51acbf
#define public_51acd2 _public_51acd2
#define public_51acdd _public_51acdd
#define public_51acf3 _public_51acf3

PROC_DECLARE(0x51ac20, internal_51ac20, public_51ac20);
extern "C" NAKED register_t __cdecl internal_51ac20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        push edi
        mov esi, ecx
        call public_45a740
        test al, al
        je public_51ac34
        pop edi
        xor al, al
        pop esi
        ret 4
        public_51ac34 : nop
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov ecx, esi
        call public_51d7f0
        test al, al
        je public_51ac4b
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_51ac4b : nop
        lea eax, ds:[edi-0x32]
        cmp eax, 4
        push ebx
        mov bl, 1
        ja public_51acf3
/*FIXUP jmp dword ptr ds : [eax*4+public_51ad00] @0x51ac5a*/
  JMPTB cmp eax, 0
  JMPTB je public_51ac61
  JMPTB cmp eax, 1
  JMPTB je public_51ac81
  JMPTB cmp eax, 2
  JMPTB je public_51ac9f
  JMPTB cmp eax, 3
  JMPTB je public_51acbf
  JMPTB cmp eax, 4
  JMPTB je public_51acdd
  JMPTB int 3
        public_51ac61 : nop
        call public_576240
        mov ecx, eax
        mov dl, byte ptr ds : [ecx+0x18]
        xor eax, eax
        cmp dl, al
        je public_51ac94
        fld dword ptr ds : [esi+0x2C]
        mov al, bl
        pop ebx
        fchs 
        pop edi
        fstp dword ptr ds : [esi+0x24]
        pop esi
        ret 4
        public_51ac81 : nop
        call public_576240
        mov edx, eax
        mov cl, byte ptr ds : [edx+0x18]
        xor eax, eax
        cmp cl, al
        je public_51ac94
        mov eax, dword ptr ds : [esi+0x2C]
        public_51ac94 : nop
        mov dword ptr ds : [esi+0x24], eax
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 4
        public_51ac9f : nop
        call public_576240
        mov ecx, eax
        mov dl, byte ptr ds : [ecx+0x18]
        xor eax, eax
        cmp dl, al
        je public_51acd2
        fld dword ptr ds : [esi+0x2C]
        mov al, bl
        pop ebx
        fchs 
        pop edi
        fstp dword ptr ds : [esi+0x28]
        pop esi
        ret 4
        public_51acbf : nop
        call public_576240
        mov edx, eax
        mov cl, byte ptr ds : [edx+0x18]
        xor eax, eax
        cmp cl, al
        je public_51acd2
        mov eax, dword ptr ds : [esi+0x2C]
        public_51acd2 : nop
        mov dword ptr ds : [esi+0x28], eax
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 4
        public_51acdd : nop
        xor eax, eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x20], eax
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 4
        public_51acf3 : nop
        xor bl, bl
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x51ac20)
        ASM_EXPORT_ENTRY_SINGLE(0x51acdd, public_51acdd)
    }
}

#undef public_51ac34
#undef public_51ac4b
#undef public_51ac61
#undef public_51ac81
#undef public_51ac94
#undef public_51ac9f
#undef public_51acbf
#undef public_51acd2
#undef public_51acdd
#undef public_51acf3

#pragma init_seg(compiler)
extern "C" void const* const public_51acdd = __AsmFindLabelExport(&internal_51ac20, 0x51acdd);
