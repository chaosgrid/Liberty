#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed09c0);

#define public_6ed09e9 _public_6ed09e9
#define public_6ed0a06 _public_6ed0a06
#define public_6ed0a10 _public_6ed0a10
#define public_6ed0a26 _public_6ed0a26
#define public_6ed0a31 _public_6ed0a31
#define public_6ed0a55 _public_6ed0a55
#define public_6ed0a60 _public_6ed0a60
#define public_6ed0a84 _public_6ed0a84
#define public_6ed0a86 _public_6ed0a86

PROC_DECLARE(0x6ed09c0, internal_6ed09c0, public_6ed09c0);
extern "C" NAKED register_t __cdecl internal_6ed09c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        push ebx
        lea ebx, ds:[eax+3]
        movsx eax, byte ptr ds : [eax]
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6ed5830]
        push edi
        add eax, 0xFFFFFFFD
        xor edi, edi
        cmp eax, 5
        ja public_6ed0a84
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed0a94] @0x6ed09e2*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed09e9
  JMPTB cmp eax, 1
  JMPTB je public_6ed0a26
  JMPTB cmp eax, 2
  JMPTB je public_6ed0a55
  JMPTB cmp eax, 3
  JMPTB je public_6ed0a84
  JMPTB cmp eax, 4
  JMPTB je public_6ed0a84
  JMPTB cmp eax, 5
  JMPTB je public_6ed0a06
  JMPTB int 3
        public_6ed09e9 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        add esi, edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [public_6ed5830], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ed0a06 : nop
        mov bl, byte ptr ds : [ebx]
        cmp bl, byte ptr ds : [esi]
        jne public_6ed0a86
        lea esp, ss:[esp]
        public_6ed0a10 : nop
        mov al, byte ptr ds : [esi+1]
        inc edi
        inc esi
        cmp bl, al
        je public_6ed0a10
        mov eax, edi
        pop edi
        mov dword ptr ds : [public_6ed5830], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ed0a26 : nop
        cmp byte ptr ds : [esi], 0
        je public_6ed0a86
        mov ebp, dword ptr ds : [public_6ed1048]
        public_6ed0a31 : nop
        movsx eax, byte ptr ds : [esi]
        push eax
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        je public_6ed0a86
        mov al, byte ptr ds : [esi+1]
        inc edi
        inc esi
        test al, al
        jne public_6ed0a31
        mov eax, edi
        pop edi
        mov dword ptr ds : [public_6ed5830], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ed0a55 : nop
        cmp byte ptr ds : [esi], 0
        je public_6ed0a86
        mov ebp, dword ptr ds : [public_6ed1048]
        public_6ed0a60 : nop
        movsx ecx, byte ptr ds : [esi]
        push ecx
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6ed0a86
        mov al, byte ptr ds : [esi+1]
        inc edi
        inc esi
        test al, al
        jne public_6ed0a60
        mov eax, edi
        pop edi
        mov dword ptr ds : [public_6ed5830], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ed0a84 : nop
        xor edi, edi
        public_6ed0a86 : nop
        mov eax, edi
        pop edi
        mov dword ptr ds : [public_6ed5830], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed09c0)
        ASM_EXPORT_ENTRY_FIRST(0x6ed09e9, public_6ed09e9)
        ASM_EXPORT_ENTRY(0x6ed0a06, public_6ed0a06)
        ASM_EXPORT_ENTRY(0x6ed0a26, public_6ed0a26)
        ASM_EXPORT_ENTRY(0x6ed0a55, public_6ed0a55)
        ASM_EXPORT_ENTRY_LAST(0x6ed0a84, public_6ed0a84)
    }
}

#undef public_6ed09e9
#undef public_6ed0a06
#undef public_6ed0a10
#undef public_6ed0a26
#undef public_6ed0a31
#undef public_6ed0a55
#undef public_6ed0a60
#undef public_6ed0a84
#undef public_6ed0a86

#pragma init_seg(compiler)
extern "C" void const* const public_6ed09e9 = __AsmFindLabelExport(&internal_6ed09c0, 0x6ed09e9);
extern "C" void const* const public_6ed0a06 = __AsmFindLabelExport(&internal_6ed09c0, 0x6ed0a06);
extern "C" void const* const public_6ed0a26 = __AsmFindLabelExport(&internal_6ed09c0, 0x6ed0a26);
extern "C" void const* const public_6ed0a55 = __AsmFindLabelExport(&internal_6ed09c0, 0x6ed0a55);
extern "C" void const* const public_6ed0a84 = __AsmFindLabelExport(&internal_6ed09c0, 0x6ed0a84);
