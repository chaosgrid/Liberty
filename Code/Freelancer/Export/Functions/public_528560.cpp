#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4291c0);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_528560);

#define public_52857d _public_52857d
#define public_528593 _public_528593
#define public_5285b0 _public_5285b0
#define public_5285b9 _public_5285b9
#define public_5285c7 _public_5285c7
#define public_5285d8 _public_5285d8
#define public_5285f7 _public_5285f7
#define public_528632 _public_528632
#define public_528644 _public_528644
#define public_528661 _public_528661
#define public_52866d _public_52866d
#define public_52868a _public_52868a
#define public_528693 _public_528693
#define public_5286b2 _public_5286b2
#define public_5286d1 _public_5286d1
#define public_528750 _public_528750
#define public_52877e _public_52877e
#define public_52879d _public_52879d
#define public_5287a9 _public_5287a9
#define public_5287b5 _public_5287b5
#define public_5287c1 _public_5287c1
#define public_5287cd _public_5287cd
#define public_528800 _public_528800
#define public_52881d _public_52881d
#define public_528829 _public_528829
#define public_528835 _public_528835
#define public_528841 _public_528841
#define public_52884d _public_52884d
#define public_528871 _public_528871
#define public_528878 _public_528878

PROC_DECLARE(0x528560, internal_528560, public_528560);
extern "C" NAKED register_t __cdecl internal_528560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        cmp ebp, 3
        push esi
        push edi
        mov esi, ecx
        ja public_528871
/*FIXUP jmp dword ptr ds : [ebp*4+public_528888] @0x528576*/
  JMPTB cmp ebp, 0
  JMPTB je public_52857d
  JMPTB cmp ebp, 1
  JMPTB je public_528632
  JMPTB cmp ebp, 2
  JMPTB je public_52879d
  JMPTB cmp ebp, 3
  JMPTB je public_52881d
  JMPTB int 3
        public_52857d : nop
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, 3
        je public_528593
        cmp eax, 2
        jne public_528871
        cmp eax, 3
        jne public_5285c7
        public_528593 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_5285b9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi+0x50]
        push 0
        je public_5285b0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x64]
        jmp public_5285b9
        public_5285b0 : nop
        mov eax, dword ptr ds : [ecx+0x64]
        push eax
        call public_4291c0
        public_5285b9 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        je public_5285d8
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        jmp public_5285d8
        public_5285c7 : nop
        cmp eax, 2
        jne public_5285d8
        mov ecx, dword ptr ds : [esi+0x48]
        test ecx, ecx
        je public_5285d8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_5285d8 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_5285f7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_5285f7
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        public_5285f7 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_528871
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_528871
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        pop edi
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x28], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        public_528632 : nop
        cmp dword ptr ds : [esi+0x34], 3
        jne public_528661
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        je public_528644
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_528644 : nop
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_528693
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi+0x54]
        push 0
        je public_52868a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x64]
        jmp public_528693
        public_528661 : nop
        mov ecx, dword ptr ds : [esi+0x48]
        test ecx, ecx
        je public_52866d
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_52866d : nop
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        je public_528693
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi+0x58]
        push 0
        je public_52868a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x64]
        jmp public_528693
        public_52868a : nop
        mov eax, dword ptr ds : [ecx+0x64]
        push eax
        call public_4291c0
        public_528693 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_5286b2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_5286b2
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        public_5286b2 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_5286d1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_5286d1
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        public_5286d1 : nop
        mov eax, dword ptr ds : [esi+0x5C]
        test eax, eax
        je public_528871
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov edi, dword ptr ds : [eax+0x38]
        mov ebx, dword ptr ds : [eax+0x3C]
        cmp edi, ebx
        je public_528871
        lea ecx, ds:[ecx]
        public_528750 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c684c]
        test al, al
        je public_52877e
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+8]
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+0x5C]
        push edx
        push eax
        push ecx
        mov ecx, offset public_674c60
        call public_503070
        public_52877e : nop
        add edi, 0x3C
        cmp edi, ebx
        jne public_528750
        mov ebp, dword ptr ss : [esp+0x44]
        pop edi
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x28], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        public_52879d : nop
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        je public_5287a9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_5287a9 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        test ecx, ecx
        je public_5287b5
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_5287b5 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_5287c1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_5287c1 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, ecx
        je public_5287cd
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_5287cd : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_528871
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi+0x48]
        push 0
        je public_528800
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x64]
        pop edi
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x28], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        public_528800 : nop
        mov eax, dword ptr ds : [ecx+0x64]
        push eax
        call public_4291c0
        pop edi
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x28], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        public_52881d : nop
        mov ecx, dword ptr ds : [esi+0x38]
        test ecx, ecx
        je public_528829
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_528829 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        test ecx, ecx
        je public_528835
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_528835 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_528841
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_528841 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, ecx
        je public_52884d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_52884d : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        je public_528878
        mov edx, dword ptr ds : [ecx+0x64]
        push 0
        push edx
        call public_4291c0
        pop edi
        mov dword ptr ds : [esi+0x34], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        cmp ebp, 3
        je public_528878
        public_528871 : nop
        mov dword ptr ds : [esi+0x28], 0
        public_528878 : nop
        pop edi
        mov dword ptr ds : [esi+0x34], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x528560)
        ASM_EXPORT_ENTRY_SINGLE(0x52881d, public_52881d)
    }
}

#undef public_52857d
#undef public_528593
#undef public_5285b0
#undef public_5285b9
#undef public_5285c7
#undef public_5285d8
#undef public_5285f7
#undef public_528632
#undef public_528644
#undef public_528661
#undef public_52866d
#undef public_52868a
#undef public_528693
#undef public_5286b2
#undef public_5286d1
#undef public_528750
#undef public_52877e
#undef public_52879d
#undef public_5287a9
#undef public_5287b5
#undef public_5287c1
#undef public_5287cd
#undef public_528800
#undef public_52881d
#undef public_528829
#undef public_528835
#undef public_528841
#undef public_52884d
#undef public_528871
#undef public_528878

#pragma init_seg(compiler)
extern "C" void const* const public_52881d = __AsmFindLabelExport(&internal_528560, 0x52881d);
