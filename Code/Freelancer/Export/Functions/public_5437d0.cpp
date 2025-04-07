#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_45b310);
CLANG_FORWARD_PROC_SYMBOL(public_503a80);
CLANG_FORWARD_PROC_SYMBOL(public_503ea0);
CLANG_FORWARD_PROC_SYMBOL(public_504210);
CLANG_FORWARD_PROC_SYMBOL(public_504470);
CLANG_FORWARD_PROC_SYMBOL(public_504640);
CLANG_FORWARD_PROC_SYMBOL(public_5437d0);
CLANG_FORWARD_PROC_SYMBOL(public_548ed0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bc10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5437ed _public_5437ed
#define public_54380d _public_54380d
#define public_543846 _public_543846
#define public_543848 _public_543848
#define public_54385c _public_54385c
#define public_54386b _public_54386b
#define public_543881 _public_543881
#define public_5438a9 _public_5438a9
#define public_5438ab _public_5438ab
#define public_5438c4 _public_5438c4
#define public_5438d5 _public_5438d5
#define public_5438f4 _public_5438f4
#define public_5438f6 _public_5438f6
#define public_543904 _public_543904
#define public_543913 _public_543913
#define public_543930 _public_543930
#define public_543974 _public_543974
#define public_543976 _public_543976
#define public_5439ad _public_5439ad
#define public_5439e3 _public_5439e3
#define public_543a2a _public_543a2a
#define public_543a2c _public_543a2c
#define public_543a52 _public_543a52
#define public_543a6f _public_543a6f
#define public_543a71 _public_543a71
#define public_543a88 _public_543a88
#define public_543aa7 _public_543aa7
#define public_543aa9 _public_543aa9
#define public_543aba _public_543aba
#define public_543ae0 _public_543ae0
#define public_543b04 _public_543b04
#define public_543b11 _public_543b11

PROC_DECLARE(0x5437d0, internal_5437d0, public_5437d0);
extern "C" NAKED register_t __cdecl internal_5437d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        xor ebx, ebx
        cmp ebp, 5
        push edi
        mov esi, ecx
        ja public_543ae0
/*FIXUP jmp dword ptr ds : [ebp*4+public_543b20] @0x5437e6*/
  JMPTB cmp ebp, 0
  JMPTB je public_5437ed
  JMPTB cmp ebp, 1
  JMPTB je public_54385c
  JMPTB cmp ebp, 2
  JMPTB je public_543904
  JMPTB cmp ebp, 3
  JMPTB je public_5439ad
  JMPTB cmp ebp, 4
  JMPTB je public_5439e3
  JMPTB cmp ebp, 5
  JMPTB je public_543aba
  JMPTB int 3
        public_5437ed : nop
        mov edi, dword ptr ds : [esi+0x188]
        cmp edi, ebx
        je public_54380d
        mov ecx, edi
        call public_503a80
        push edi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x188], ebx
        public_54380d : nop
        cmp dword ptr ds : [esi+0x158], 5
        jne public_543b04
        call public_54baf0
        cmp esi, eax
        jne public_543b04
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_543846
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_543846
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_543848
        public_543846 : nop
        xor eax, eax
        public_543848 : nop
        push ebx
        mov ecx, eax
        call dword ptr ds : [public_5c6a54]
        mov byte ptr ds : [public_67dcc8], bl
        jmp public_543b04
        public_54385c : nop
        mov ecx, dword ptr ds : [esi+0x188]
        cmp ecx, ebx
        je public_54386b
        call public_503ea0
        public_54386b : nop
        call public_54baf0
        cmp esi, eax
        jne public_543881
/*FIXUP push offset public_5cc404 @0x543874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        call public_54bc10
        add esp, 4
        public_543881 : nop
        call public_54baf0
        cmp esi, eax
        jne public_5438d5
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_5438a9
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebx
        je public_5438a9
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_5438ab
        public_5438a9 : nop
        xor edi, edi
        public_5438ab : nop
        push 7
        mov ecx, edi
        call dword ptr ds : [public_5c6648]
        test al, al
        mov ebp, dword ptr ds : [public_5c6a54]
        je public_5438c4
        push ebx
        mov ecx, edi
        call ebp
        public_5438c4 : nop
        push 7
        mov ecx, edi
        call ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [public_67dcc8], 1
        public_5438d5 : nop
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_5438f4
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_5438f4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5438f6
        public_5438f4 : nop
        xor eax, eax
        public_5438f6 : nop
        push ebx
        mov ecx, eax
        call dword ptr ds : [public_5c62d0]
        jmp public_543b04
        public_543904 : nop
        mov ecx, dword ptr ds : [esi+0x188]
        cmp ecx, ebx
        je public_543913
        call public_504210
        public_543913 : nop
        lea edi, ds:[esi+0x20]
/*FIXUP push offset public_5dfb38 @0x543916*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfb38
        mov ecx, edi
        call dword ptr ds : [public_5c6acc]
        cmp eax, ebx
        je public_543930
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6ac8]
        public_543930 : nop
        call public_54baf0
        cmp esi, eax
        je public_543b04
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x15C]
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_543b04
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_543974
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebx
        je public_543974
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_543976
        public_543974 : nop
        xor edi, edi
        public_543976 : nop
        mov ecx, edi
        mov byte ptr ds : [edi+0x214], 1
        call dword ptr ds : [public_5c6ac4]
        mov ecx, edi
        call dword ptr ds : [public_5c69c0]
        cmp eax, 1
        je public_543b04
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6a10]
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6a54]
        jmp public_543b04
        public_5439ad : nop
        mov ecx, dword ptr ds : [esi+0x188]
        cmp ecx, ebx
        je public_543b04
        call public_401e90
        mov ecx, dword ptr ds : [esi+0x188]
        mov edx, dword ptr ds : [ecx+0xA4]
        lea eax, ss:[esp+0x10]
        push ebx
        push eax
        mov dword ptr ss : [esp+0x18], edx
        call public_548ed0
        add esp, 8
        jmp public_543b04
        public_5439e3 : nop
        cmp dword ptr ds : [esi+0x188], ebx
        je public_543a88
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [public_673378]
        jne public_543a52
        mov ecx, dword ptr ds : [esi+0x188]
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_543a2a
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_543a2a
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_543a2c
        public_543a2a : nop
        xor eax, eax
        public_543a2c : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea edx, ds:[ecx+0x80]
        push edx
        add ecx, 0x74
        push ecx
        push esi
        mov ecx, eax
        call dword ptr ds : [public_5c6ac0]
        mov ecx, dword ptr ds : [esi+0x188]
        call public_504470
        jmp public_543a88
        public_543a52 : nop
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_543a6f
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_543a6f
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_543a71
        public_543a6f : nop
        xor ecx, ecx
        public_543a71 : nop
        mov eax, dword ptr ds : [esi+0x188]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea edi, ds:[eax+0x80]
        push edi
        add eax, 0x74
        push eax
        call dword ptr ds : [edx+0x7C]
        public_543a88 : nop
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_543aa7
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_543aa7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_543aa9
        public_543aa7 : nop
        xor eax, eax
        public_543aa9 : nop
        push ebx
        mov ecx, eax
        call dword ptr ds : [public_5c62d0]
        mov byte ptr ds : [esi+0x15C], bl
        jmp public_543b04
        public_543aba : nop
        mov ecx, dword ptr ds : [esi+0x188]
        call public_504640
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [public_673378]
        jne public_543b04
        call public_45b310
        jmp public_543b04
        nop 
        lea esp, ss:[esp]
/*FIXUP public_543ae0 : nop
        push offset public_5dff6c @0x543ae0*/
  FIXUP public_543ae0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dff6c
        push 0x272
/*FIXUP push offset public_5dff40 @0x543aea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dff40
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x543af4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_543b04 : nop
        mov eax, dword ptr ds : [esi+0x188]
        cmp eax, ebx
        je public_543b11
        mov dword ptr ds : [eax+0x70], ebx
        public_543b11 : nop
        pop edi
        mov dword ptr ds : [esi+0x158], ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5437d0)
        ASM_EXPORT_ENTRY_SINGLE(0x543aba, public_543aba)
    }
}

#undef public_5437ed
#undef public_54380d
#undef public_543846
#undef public_543848
#undef public_54385c
#undef public_54386b
#undef public_543881
#undef public_5438a9
#undef public_5438ab
#undef public_5438c4
#undef public_5438d5
#undef public_5438f4
#undef public_5438f6
#undef public_543904
#undef public_543913
#undef public_543930
#undef public_543974
#undef public_543976
#undef public_5439ad
#undef public_5439e3
#undef public_543a2a
#undef public_543a2c
#undef public_543a52
#undef public_543a6f
#undef public_543a71
#undef public_543a88
#undef public_543aa7
#undef public_543aa9
#undef public_543aba
#undef public_543ae0
#undef public_543b04
#undef public_543b11

#pragma init_seg(compiler)
extern "C" void const* const public_543aba = __AsmFindLabelExport(&internal_5437d0, 0x543aba);
