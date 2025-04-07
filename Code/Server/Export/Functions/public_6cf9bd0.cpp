#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d0bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6cf9c20 _public_6cf9c20
#define public_6cf9c5e _public_6cf9c5e
#define public_6cf9ca1 _public_6cf9ca1
#define public_6cf9ca5 _public_6cf9ca5
#define public_6cf9cba _public_6cf9cba
#define public_6cf9d03 _public_6cf9d03
#define public_6cf9d4c _public_6cf9d4c
#define public_6cf9d92 _public_6cf9d92
#define public_6cf9e08 _public_6cf9e08
#define public_6cf9e29 _public_6cf9e29
#define public_6cf9e75 _public_6cf9e75
#define public_6cf9eb1 _public_6cf9eb1
#define public_6cf9f4a _public_6cf9f4a
#define public_6cf9f4d _public_6cf9f4d
#define public_6cf9fa5 _public_6cf9fa5
#define public_6cfa00e _public_6cfa00e
#define public_6cfa02d _public_6cfa02d
#define public_6cfa043 _public_6cfa043

PROC_DECLARE(0x6cf9bd0, internal_6cf9bd0, public_6cf9bd0);
extern "C" NAKED register_t __cdecl internal_6cf9bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        mov eax, 0x109C
        call public_6d60160
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx]
        push ebx
        fcomp dword ptr ds : [public_6d65188]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFC
        fnstsw ax
        test ah, 1
        jne public_6cfa043
        mov eax, dword ptr ss : [ebp+0x14]
        fld dword ptr ds : [eax]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 1
        jne public_6cfa043
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ds:[ecx]
        public_6cf9c20 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [esi]
        push edx
        call public_6d00280
        xor edi, edi
        add esp, 4
        cmp eax, edi
        je public_6cf9c5e
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp+0xC]
        push 0xFFFFFFFF
        push ecx
        add edx, 0x24
        push edx
        push 0x400
        lea ecx, ss:[esp+0xB8]
        push ecx
        mov ecx, eax
        call public_6d0bcd0
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jne public_6cf9ca1
        public_6cf9c5e : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_6d66b14]
        push eax
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x24], edi
        call public_6d00280
        add esp, 4
        cmp eax, edi
        je public_6cf9ca1
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [ebp+0xC]
        push 2
        push ecx
        add edx, 0x24
        push edx
        push 0x400
        lea ecx, ss:[esp+0xB8]
        push ecx
        mov ecx, eax
        call public_6d0bcd0
        mov dword ptr ss : [esp+0x20], eax
        public_6cf9ca1 : nop
        mov dword ptr ss : [esp+0x3C], edi
        public_6cf9ca5 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [edx]
        cmp eax, 3
        ja public_6cfa043
/*FIXUP jmp dword ptr ds : [eax*4+public_6cfa050] @0x6cf9cb3*/
  JMPTB cmp eax, 0
  JMPTB je public_6cf9cba
  JMPTB cmp eax, 1
  JMPTB je public_6cf9d03
  JMPTB cmp eax, 2
  JMPTB je public_6cf9d4c
  JMPTB cmp eax, 3
  JMPTB je public_6cf9d92
  JMPTB int 3
        public_6cf9cba : nop
        call dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x6C], 0
        mov edx, dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [public_6d656b8]
        fmul qword ptr ds : [public_6d66b80]
        fld st(0)
        fcos 
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x64]
        fsin 
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x68]
        jmp public_6cf9e08
        public_6cf9d03 : nop
        call dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x40], 0
        mov eax, dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_6d656b8]
        fmul qword ptr ds : [public_6d66b80]
        fld st(0)
        fcos 
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x44]
        fsin 
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x48]
        jmp public_6cf9e08
        public_6cf9d4c : nop
        call dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x50], 0
        mov ecx, dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [public_6d656b8]
        fmul qword ptr ds : [public_6d66b80]
        fld st(0)
        fcos 
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x4C]
        fsin 
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x54]
        jmp public_6cf9e08
        public_6cf9d92 : nop
        mov esi, dword ptr ds : [public_6d64c7c]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d656b8]
        fstp qword ptr ss : [esp+0x98]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d656b8]
        fstp qword ptr ss : [esp+0xA0]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d656b8]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x14]
        fmul qword ptr ss : [esp+0xA0]
        fstp dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x14]
        fmul qword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x60]
        public_6cf9e08 : nop
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_6d8d868]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        jne public_6cf9e29
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d868], eax
        public_6cf9e29 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        lea edx, ss:[esp+0x94]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x90]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        cmp dword ptr ss : [esp+0x20], edi
        mov byte ptr ss : [esp+0x1B], 1
        mov dword ptr ss : [esp+0x10], edi
        jbe public_6cfa02d
        public_6cf9e75 : nop
        mov eax, dword ptr ss : [esp+edi*4+0xA8]
        xor ebx, ebx
        test eax, 0x3FFFFFFF
        je public_6cf9eb1
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf9eb1
        add eax, 0xC
        test eax, eax
        je public_6cf9eb1
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf9eb1
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_6cf9eb1
        mov ebx, dword ptr ds : [eax+0xE0]
        public_6cf9eb1 : nop
        test bl, 2
        mov dword ptr ss : [esp+0x1C], 0
        je public_6cf9fa5
        mov dword ptr ss : [esp+0x80], 0
        mov eax, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+edi*4+0xA8]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x84], 0
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x88], 0
        mov edx, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        je public_6cf9f4d
        push eax
        call public_6d00670
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cf9f4a
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], eax
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x140]
        public_6cf9f4a : nop
        mov esi, dword ptr ss : [ebp+0x1C]
        public_6cf9f4d : nop
        fld dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x14]
        fsub dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x38]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fsubr st, st(1)
        fsub dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6cfa00e
        mov eax, dword ptr ss : [esp+0x20]
        inc edi
        cmp edi, eax
        jb public_6cf9e75
        jmp public_6cfa02d
        public_6cf9fa5 : nop
        mov dword ptr ss : [esp+0x7C], 0
        mov eax, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+edi*4+0xA8]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x74], 0
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x78], 0
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        je public_6cf9f4d
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf9f4d
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        jmp public_6cf9f4d
        public_6cfa00e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        inc eax
        cmp eax, 0xA
        mov byte ptr ss : [esp+0x1B], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x3C], eax
        jl public_6cf9ca5
        public_6cfa02d : nop
        fld dword ptr ss : [esp+0x14]
        mov al, byte ptr ss : [esp+0x1B]
        test al, al
        fadd st(0), st
        fstp dword ptr ss : [esp+0x14]
        je public_6cf9c20
        public_6cfa043 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6cf9bd0)
        ASM_EXPORT_ENTRY_FIRST(0x6cf9cba, public_6cf9cba)
        ASM_EXPORT_ENTRY(0x6cf9d03, public_6cf9d03)
        ASM_EXPORT_ENTRY(0x6cf9d4c, public_6cf9d4c)
        ASM_EXPORT_ENTRY_LAST(0x6cf9d92, public_6cf9d92)
    }
}

#undef public_6cf9c20
#undef public_6cf9c5e
#undef public_6cf9ca1
#undef public_6cf9ca5
#undef public_6cf9cba
#undef public_6cf9d03
#undef public_6cf9d4c
#undef public_6cf9d92
#undef public_6cf9e08
#undef public_6cf9e29
#undef public_6cf9e75
#undef public_6cf9eb1
#undef public_6cf9f4a
#undef public_6cf9f4d
#undef public_6cf9fa5
#undef public_6cfa00e
#undef public_6cfa02d
#undef public_6cfa043

#pragma init_seg(compiler)
extern "C" void const* const public_6cf9cba = __AsmFindLabelExport(&internal_6cf9bd0, 0x6cf9cba);
extern "C" void const* const public_6cf9d03 = __AsmFindLabelExport(&internal_6cf9bd0, 0x6cf9d03);
extern "C" void const* const public_6cf9d4c = __AsmFindLabelExport(&internal_6cf9bd0, 0x6cf9d4c);
extern "C" void const* const public_6cf9d92 = __AsmFindLabelExport(&internal_6cf9bd0, 0x6cf9d92);
