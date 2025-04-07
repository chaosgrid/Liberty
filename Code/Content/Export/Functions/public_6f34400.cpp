#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb010);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f68570);
CLANG_FORWARD_PROC_SYMBOL(public_6f68630);
CLANG_FORWARD_PROC_SYMBOL(public_6f68710);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);

#define public_6f34495 _public_6f34495
#define public_6f344c0 _public_6f344c0
#define public_6f344f7 _public_6f344f7
#define public_6f34502 _public_6f34502
#define public_6f34517 _public_6f34517
#define public_6f3451f _public_6f3451f
#define public_6f34534 _public_6f34534
#define public_6f3453c _public_6f3453c
#define public_6f3454d _public_6f3454d
#define public_6f34553 _public_6f34553
#define public_6f34582 _public_6f34582
#define public_6f345ab _public_6f345ab
#define public_6f345db _public_6f345db

PROC_DECLARE(0x6f34400, internal_6f34400, public_6f34400);
extern "C" NAKED register_t __cdecl internal_6f34400()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x68
        mov al, byte ptr ds : [ecx+0x3D]
        test al, al
        push ebx
        mov ebx, dword ptr ss : [esp+0x80]
        push ebp
        mov ebp, dword ptr ss : [esp+0x7C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f345db
        cmp dword ptr ds : [public_6fd1be4], ebp
        je public_6f345db
        lea esi, ds:[ecx-0x174]
        mov ecx, esi
        call public_6eea860
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6f345db
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax-0x170]
        lea edx, ss:[esp+0x8C]
        push edx
        lea eax, ss:[esp+0x88]
        push eax
        mov dword ptr ss : [esp+0x3C], edi
        mov byte ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x94], edi
        mov dword ptr ss : [esp+0x8C], ecx
        call dword ptr ds : [public_6fb3444]
        lea eax, ss:[ebp-1]
        add esp, 8
        cmp eax, 7
        ja public_6f345ab
/*FIXUP jmp dword ptr ds : [eax*4+public_6f34644] @0x6f3448e*/
  JMPTB cmp eax, 0
  JMPTB je public_6f34495
  JMPTB cmp eax, 1
  JMPTB je public_6f344c0
  JMPTB cmp eax, 2
  JMPTB je public_6f34517
  JMPTB cmp eax, 3
  JMPTB je public_6f3451f
  JMPTB cmp eax, 4
  JMPTB je public_6f3451f
  JMPTB cmp eax, 5
  JMPTB je public_6f34534
  JMPTB cmp eax, 6
  JMPTB je public_6f3453c
  JMPTB cmp eax, 7
  JMPTB je public_6f3454d
  JMPTB int 3
        public_6f34495 : nop
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [public_6fce5ac]
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
/*FIXUP push offset public_6fb572c @0x6f344a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push eax
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f34502
        lea ecx, ss:[esp+0x38]
        push ecx
        jmp public_6f344f7
        public_6f344c0 : nop
        cmp dword ptr ds : [public_6fd1be4], 7
        je public_6f345ab
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [public_6fce5b0]
        lea edx, ss:[esp+0x34]
        push edx
        push eax
/*FIXUP push offset public_6fb572c @0x6f344e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push ecx
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f34502
        lea edx, ss:[esp+0x38]
        push edx
        public_6f344f7 : nop
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov edi, eax
        public_6f34502 : nop
        push 0x3F800000
        push esi
        mov ecx, offset public_6fd1bd8
        call public_6f68630
        jmp public_6f345ab
        public_6f34517 : nop
        mov edx, dword ptr ds : [public_6fce5b4]
        jmp public_6f34553
        public_6f3451f : nop
        push 0x3F800000
        push esi
        mov ecx, offset public_6fd1bd8
        call public_6f68630
        jmp public_6f345db
        public_6f34534 : nop
        mov edx, dword ptr ds : [public_6fce5b8]
        jmp public_6f34553
        public_6f3453c : nop
        cmp dword ptr ds : [public_6fd1be4], 2
        je public_6f345ab
        mov edx, dword ptr ds : [public_6fce5bc]
        jmp public_6f34553
        public_6f3454d : nop
        mov edx, dword ptr ds : [public_6fce5c0]
        public_6f34553 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
/*FIXUP push offset public_6fb572c @0x6f34560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push edx
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f34582
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [public_6fb3684]
        mov edi, eax
        add esp, 4
        public_6f34582 : nop
        push edi
        mov ecx, offset public_6fd1bd8
        push esi
        call public_6f68570
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x80]
        push ebx
        push ecx
        push ebp
        push edx
        mov ecx, offset public_6fd1bd8
        push esi
        call public_6f68710
        public_6f345ab : nop
        test edi, 0x3FFFFFFF
        je public_6f345db
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx-0x170]
        mov ecx, dword ptr ss : [esp+0x14]
        push 0x3F000000
        push 0
        push 0
        push 0
        push edi
        push eax
        push edx
        call public_6f72930
        public_6f345db : nop
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], edx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [eax-4]
        lea eax, ss:[esp+0x84]
        push 0x1008
        push eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x8C], ecx
        call public_6f24070
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x68
        ret 0x14
        UNREACHABLE_TRAP(0x6f34400)
        ASM_EXPORT_ENTRY_FIRST(0x6f34495, public_6f34495)
        ASM_EXPORT_ENTRY(0x6f344c0, public_6f344c0)
        ASM_EXPORT_ENTRY(0x6f34517, public_6f34517)
        ASM_EXPORT_ENTRY(0x6f3451f, public_6f3451f)
        ASM_EXPORT_ENTRY(0x6f34534, public_6f34534)
        ASM_EXPORT_ENTRY(0x6f3453c, public_6f3453c)
        ASM_EXPORT_ENTRY_LAST(0x6f3454d, public_6f3454d)
    }
}

#undef public_6f34495
#undef public_6f344c0
#undef public_6f344f7
#undef public_6f34502
#undef public_6f34517
#undef public_6f3451f
#undef public_6f34534
#undef public_6f3453c
#undef public_6f3454d
#undef public_6f34553
#undef public_6f34582
#undef public_6f345ab
#undef public_6f345db

#pragma init_seg(compiler)
extern "C" void const* const public_6f34495 = __AsmFindLabelExport(&internal_6f34400, 0x6f34495);
extern "C" void const* const public_6f344c0 = __AsmFindLabelExport(&internal_6f34400, 0x6f344c0);
extern "C" void const* const public_6f34517 = __AsmFindLabelExport(&internal_6f34400, 0x6f34517);
extern "C" void const* const public_6f3451f = __AsmFindLabelExport(&internal_6f34400, 0x6f3451f);
extern "C" void const* const public_6f34534 = __AsmFindLabelExport(&internal_6f34400, 0x6f34534);
extern "C" void const* const public_6f3453c = __AsmFindLabelExport(&internal_6f34400, 0x6f3453c);
extern "C" void const* const public_6f3454d = __AsmFindLabelExport(&internal_6f34400, 0x6f3454d);
