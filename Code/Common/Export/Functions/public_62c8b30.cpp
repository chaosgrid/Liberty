#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c8b60 _public_62c8b60
#define public_62c8b7b _public_62c8b7b
#define public_62c8b7d _public_62c8b7d
#define public_62c8b89 _public_62c8b89
#define public_62c8ba1 _public_62c8ba1
#define public_62c8bbf _public_62c8bbf
#define public_62c8be0 _public_62c8be0
#define public_62c8bf2 _public_62c8bf2

PROC_DECLARE(0x62c8b30, internal_62c8b30, public_62c8b30);
extern "C" NAKED register_t __cdecl internal_62c8b30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push esi
        mov ebx, ecx
        je public_62c8bf2
        mov cl, byte ptr ds : [eax+0x44]
        mov byte ptr ds : [ebx+0x1C4], cl
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ebx+0x2C], ecx
        dec ecx
        cmp ecx, 3
        ja public_62c8bf2
/*FIXUP jmp dword ptr ds : [ecx*4+public_62c8c00] @0x62c8b59*/
  JMPTB cmp ecx, 0
  JMPTB je public_62c8b60
  JMPTB cmp ecx, 1
  JMPTB je public_62c8bbf
  JMPTB cmp ecx, 2
  JMPTB je public_62c8ba1
  JMPTB cmp ecx, 3
  JMPTB je public_62c8be0
  JMPTB int 3
        public_62c8b60 : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        add eax, 0x10
        push eax
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        lea esi, ds:[ebx+0x30]
        je public_62c8b7b
        add eax, 8
        jmp public_62c8b7d
        public_62c8b7b : nop
        xor eax, eax
        public_62c8b7d : nop
        cmp eax, dword ptr ds : [esi]
        je public_62c8b89
        push eax
        mov ecx, esi
        call public_6341610
        public_62c8b89 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_62c8bf2
        lea eax, ds:[esi-8]
        test eax, eax
        je public_62c8bf2
        or byte ptr ds : [ebx+0x28], 2
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62c8ba1 : nop
        push edi
        lea esi, ds:[eax+0x20]
        mov al, byte ptr ds : [ebx+0x28]
        lea edi, ds:[ebx+0x38]
        mov ecx, 9
        rep movsd
        pop edi
        or al, 2
        mov byte ptr ds : [ebx+0x28], al
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62c8bbf : nop
        add eax, 0x14
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x5C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        or byte ptr ds : [ebx+0x28], 2
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62c8be0 : nop
        or byte ptr ds : [ebx+0x28], 2
        pop esi
        mov dword ptr ds : [ebx+0x2C], 4
        mov al, 1
        pop ebx
        ret 4
        public_62c8bf2 : nop
        and byte ptr ds : [ebx+0x28], 0xFD
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62c8b30)
        ASM_EXPORT_ENTRY_FIRST(0x62c8b60, public_62c8b60)
        ASM_EXPORT_ENTRY(0x62c8ba1, public_62c8ba1)
        ASM_EXPORT_ENTRY(0x62c8bbf, public_62c8bbf)
        ASM_EXPORT_ENTRY_LAST(0x62c8be0, public_62c8be0)
    }
}

#undef public_62c8b60
#undef public_62c8b7b
#undef public_62c8b7d
#undef public_62c8b89
#undef public_62c8ba1
#undef public_62c8bbf
#undef public_62c8be0
#undef public_62c8bf2

#pragma init_seg(compiler)
extern "C" void const* const public_62c8b60 = __AsmFindLabelExport(&internal_62c8b30, 0x62c8b60);
extern "C" void const* const public_62c8ba1 = __AsmFindLabelExport(&internal_62c8b30, 0x62c8ba1);
extern "C" void const* const public_62c8bbf = __AsmFindLabelExport(&internal_62c8b30, 0x62c8bbf);
extern "C" void const* const public_62c8be0 = __AsmFindLabelExport(&internal_62c8b30, 0x62c8be0);
