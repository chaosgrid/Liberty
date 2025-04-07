#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c1000);
CLANG_FORWARD_PROC_SYMBOL(public_65c1110);
CLANG_FORWARD_PROC_SYMBOL(public_65c2080);
CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c2610);
CLANG_FORWARD_PROC_SYMBOL(public_65c3690);
CLANG_FORWARD_PROC_SYMBOL(public_65c4300);
CLANG_FORWARD_PROC_SYMBOL(public_65c4310);
CLANG_FORWARD_PROC_SYMBOL(public_65c4390);
CLANG_FORWARD_PROC_SYMBOL(public_65c44e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aac);
CLANG_FORWARD_PROC_SYMBOL(public_65c6ac0);

#define public_65c1e1f _public_65c1e1f
#define public_65c1e47 _public_65c1e47
#define public_65c1e5a _public_65c1e5a
#define public_65c1e85 _public_65c1e85
#define public_65c1eb3 _public_65c1eb3
#define public_65c1eb9 _public_65c1eb9
#define public_65c1eda _public_65c1eda
#define public_65c1ef3 _public_65c1ef3
#define public_65c1f2f _public_65c1f2f
#define public_65c1f5c _public_65c1f5c
#define public_65c1f5e _public_65c1f5e
#define public_65c1f67 _public_65c1f67
#define public_65c1fb5 _public_65c1fb5
#define public_65c1fc8 _public_65c1fc8
#define public_65c1ff8 _public_65c1ff8
#define public_65c2031 _public_65c2031
#define public_65c2037 _public_65c2037
#define public_65c2055 _public_65c2055

PROC_DECLARE(0x65c1d90, internal_65c1d90, public_65c1d90);
extern "C" NAKED register_t __cdecl internal_65c1d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0x8010
        call public_65c6ac0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+8]
        test al, al
        push edi
        je public_65c1e1f
        mov eax, dword ptr ds : [public_65ca1b4]
        cmp eax, dword ptr ds : [public_65ca1b8]
        jne public_65c1e1f
        mov edi, dword ptr ds : [public_65c70d8]
        call edi
        sub eax, dword ptr ds : [public_65ca1ac]
        cmp eax, 0x3E8
        jb public_65c1e1f
        call edi
        mov ecx, dword ptr ds : [public_65ca1b4]
        inc ecx
        mov dword ptr ds : [public_65ca1ac], eax
        mov dword ptr ds : [public_65ca1b4], ecx
        mov al, byte ptr ds : [esi+8]
        test al, al
        mov byte ptr ss : [esp+0x13], 1
        je public_65c1e1f
        mov eax, dword ptr ds : [esi+4]
        push 0x108
        lea ecx, ss:[esp+0x17]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0
        push 0
        push 1
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        public_65c1e1f : nop
        lea edi, ds:[esi+0x3C]
        mov ecx, edi
        call public_65c4300
        lea edx, ds:[esi+0x10]
        push edx
        mov ecx, edi
        call public_65c44e0
        mov ecx, edi
        call public_65c4390
        mov ebx, eax
        xor ebp, ebp
        cmp ebx, ebp
        je public_65c2055
        public_65c1e47 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, 4
        ja public_65c2037
/*FIXUP jmp dword ptr ds : [eax*4+public_65c206c] @0x65c1e53*/
  JMPTB cmp eax, 0
  JMPTB je public_65c1e5a
  JMPTB cmp eax, 1
  JMPTB je public_65c1eda
  JMPTB cmp eax, 2
  JMPTB je public_65c2037
  JMPTB cmp eax, 3
  JMPTB je public_65c1fc8
  JMPTB cmp eax, 4
  JMPTB je public_65c1ff8
  JMPTB int 3
        public_65c1e5a : nop
        mov al, byte ptr ds : [public_65ca1a4]
        test al, 1
        jne public_65c1e85
        mov dl, al
        or dl, 1
        mov ecx, offset public_65ca128
        mov byte ptr ds : [public_65ca1a4], dl
        call public_65c1000
/*FIXUP push offset _public_65c2080 @0x65c1e78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c2080
        call public_65c6aac
        add esp, 4
        public_65c1e85 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+8]
        push 0x7FFF
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        push ecx
        mov ecx, offset public_65ca128
        call public_65c1110
        cmp al, 1
        mov eax, dword ptr ds : [esi]
        jne public_65c1eb3
        mov ecx, dword ptr ds : [public_65ca1a0]
        lea edx, ss:[esp+0x20]
        jmp public_65c1eb9
        public_65c1eb3 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ebx+8]
        public_65c1eb9 : nop
        push ecx
        mov ecx, esi
        push edx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp ecx, ebp
        je public_65c2037
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        jmp public_65c2037
        public_65c1eda : nop
        cmp dword ptr ds : [ebx+0x1C], ebp
        jne public_65c1f2f
        mov byte ptr ds : [esi+8], 1
        mov eax, dword ptr ds : [esi+0x84]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_65c1f2f
        public_65c1ef3 : nop
        mov edi, ebp
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push 0
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65c3690
        push edi
        call public_65c6a60
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp ebp, eax
        mov dword ptr ds : [esi+0x88], ecx
        jne public_65c1ef3
        public_65c1f2f : nop
        mov eax, dword ptr ds : [esi+0x88]
        test eax, eax
        je public_65c1fb5
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [public_65c7070]
        add eax, 8
        test ecx, ecx
        je public_65c1f5c
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        jne public_65c1f5e
        mov ecx, edx
        jmp public_65c1f5e
        public_65c1f5c : nop
        xor ecx, ecx
        public_65c1f5e : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_65c1f67
        mov eax, edx
        public_65c1f67 : nop
        push ecx
        push eax
        mov ecx, esi
        call public_65c2610
        mov edx, dword ptr ds : [esi+0x84]
        mov edi, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edi]
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65c2500
        push edi
        call public_65c6a60
        mov ecx, dword ptr ds : [esi+0x88]
        mov al, byte ptr ss : [esp+0x17]
        add esp, 4
        dec ecx
        test al, al
        mov dword ptr ds : [esi+0x88], ecx
        jne public_65c2037
        public_65c1fb5 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x7C], ecx
        mov eax, dword ptr ds : [ebx+0x1C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        jmp public_65c2037
        public_65c1fc8 : nop
        call dword ptr ds : [public_65c70d8]
        mov dword ptr ds : [public_65ca1ac], eax
        mov dword ptr ds : [public_65ca1b0], ebp
        mov dword ptr ds : [public_65ca1b4], ebp
        mov dword ptr ds : [public_65ca1b8], ebp
        mov dword ptr ds : [public_65ca1bc], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov byte ptr ds : [esi+8], 0
        jmp public_65c2037
        public_65c1ff8 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edx+0x30]
        mov ebp, dword ptr ds : [public_65c70b8]
        push eax
        call ebp
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call ebp
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 8
        test eax, eax
        je public_65c2031
        push eax
        call ebp
        add esp, 4
        public_65c2031 : nop
        push edi
        call ebp
        add esp, 4
        public_65c2037 : nop
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        lea edi, ds:[esi+0x3C]
        mov ecx, edi
        call public_65c4390
        mov ebx, eax
        xor ebp, ebp
        cmp ebx, ebp
        jne public_65c1e47
        public_65c2055 : nop
        mov ecx, edi
        call public_65c4310
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8010
        ret 4
        UNREACHABLE_TRAP(0x65c1d90)
        ASM_EXPORT_ENTRY_FIRST(0x65c1e5a, public_65c1e5a)
        ASM_EXPORT_ENTRY(0x65c1eda, public_65c1eda)
        ASM_EXPORT_ENTRY(0x65c1fc8, public_65c1fc8)
        ASM_EXPORT_ENTRY(0x65c1ff8, public_65c1ff8)
        ASM_EXPORT_ENTRY_LAST(0x65c2037, public_65c2037)
    }
}

#undef public_65c1e1f
#undef public_65c1e47
#undef public_65c1e5a
#undef public_65c1e85
#undef public_65c1eb3
#undef public_65c1eb9
#undef public_65c1eda
#undef public_65c1ef3
#undef public_65c1f2f
#undef public_65c1f5c
#undef public_65c1f5e
#undef public_65c1f67
#undef public_65c1fb5
#undef public_65c1fc8
#undef public_65c1ff8
#undef public_65c2031
#undef public_65c2037
#undef public_65c2055

#pragma init_seg(compiler)
extern "C" void const* const public_65c1e5a = __AsmFindLabelExport(&internal_65c1d90, 0x65c1e5a);
extern "C" void const* const public_65c1eda = __AsmFindLabelExport(&internal_65c1d90, 0x65c1eda);
extern "C" void const* const public_65c1fc8 = __AsmFindLabelExport(&internal_65c1d90, 0x65c1fc8);
extern "C" void const* const public_65c1ff8 = __AsmFindLabelExport(&internal_65c1d90, 0x65c1ff8);
extern "C" void const* const public_65c2037 = __AsmFindLabelExport(&internal_65c1d90, 0x65c2037);
