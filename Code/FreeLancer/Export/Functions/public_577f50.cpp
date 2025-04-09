#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_577f50);

#define public_577f7a _public_577f7a
#define public_577f81 _public_577f81
#define public_577f88 _public_577f88
#define public_577f8f _public_577f8f
#define public_577f96 _public_577f96
#define public_577f9d _public_577f9d
#define public_577fa4 _public_577fa4
#define public_577fab _public_577fab
#define public_577fb2 _public_577fb2
#define public_577fb9 _public_577fb9
#define public_577fbe _public_577fbe
#define public_577fda _public_577fda
#define public_57801f _public_57801f
#define public_578021 _public_578021
#define public_578044 _public_578044
#define public_578057 _public_578057
#define public_57805b _public_57805b
#define public_578069 _public_578069
#define public_578071 _public_578071
#define public_5780de _public_5780de
#define public_5780ed _public_5780ed
#define public_5780f4 _public_5780f4
#define public_57813b _public_57813b
#define public_57814a _public_57814a
#define public_578151 _public_578151
#define public_578198 _public_578198
#define public_5781a7 _public_5781a7
#define public_5781d6 _public_5781d6
#define public_5781ec _public_5781ec

PROC_DECLARE(0x577f50, internal_577f50, public_577f50);
extern "C" NAKED register_t __cdecl internal_577f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x200
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20C]
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 0x100
        push esi
        push edi
        jbe public_577fda
        add eax, 9
        cmp eax, 8
        ja public_577fb9
/*FIXUP jmp dword ptr ds : [eax*4+public_5781f8] @0x577f73*/
  JMPTB cmp eax, 0
  JMPTB je public_577fb2
  JMPTB cmp eax, 1
  JMPTB je public_577fab
  JMPTB cmp eax, 2
  JMPTB je public_577fa4
  JMPTB cmp eax, 3
  JMPTB je public_577f9d
  JMPTB cmp eax, 4
  JMPTB je public_577f96
  JMPTB cmp eax, 5
  JMPTB je public_577f8f
  JMPTB cmp eax, 6
  JMPTB je public_577f88
  JMPTB cmp eax, 7
  JMPTB je public_577f81
  JMPTB cmp eax, 8
  JMPTB je public_577f7a
  JMPTB int 3
        public_577f7a : nop
        mov eax, 0x3A6
        jmp public_577fbe
        public_577f81 : nop
        mov eax, 0x3A7
        jmp public_577fbe
        public_577f88 : nop
        mov eax, 0x3A8
        jmp public_577fbe
        public_577f8f : nop
        mov eax, 0x3A9
        jmp public_577fbe
        public_577f96 : nop
        mov eax, 0x3AA
        jmp public_577fbe
        public_577f9d : nop
        mov eax, 0x3AB
        jmp public_577fbe
        public_577fa4 : nop
        mov eax, 0x3AC
        jmp public_577fbe
        public_577fab : nop
        mov eax, 0x3AD
        jmp public_577fbe
        public_577fb2 : nop
        mov eax, 0x4EA
        jmp public_577fbe
        public_577fb9 : nop
        mov eax, 0x3AE
        public_577fbe : nop
        mov edi, dword ptr ss : [esp+0x21C]
        mov esi, dword ptr ss : [esp+0x218]
        push edi
        push esi
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        jmp public_578069
        public_577fda : nop
        push 0
        push eax
        call dword ptr ds : [public_5c7268]
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+4]
        shl ebx, 0x10
        xor cl, cl
        cmp eax, 0x26
        je public_57801f
        cmp eax, 0x23
        je public_57801f
        cmp eax, 0x24
        je public_57801f
        cmp eax, 0x25
        je public_57801f
        cmp eax, 0x27
        je public_57801f
        cmp eax, 0x28
        je public_57801f
        cmp eax, 0x2D
        je public_57801f
        cmp eax, 0x2E
        je public_57801f
        cmp eax, 0x21
        je public_57801f
        cmp eax, 0x22
        jne public_578021
        public_57801f : nop
        mov cl, 1
        public_578021 : nop
        test ebx, ebx
        mov edi, dword ptr ss : [esp+0x21C]
        mov esi, dword ptr ss : [esp+0x218]
        je public_57805b
        test cl, cl
        jne public_578044
        push edi
        push esi
        push ebx
        call dword ptr ds : [public_616428]
        test eax, eax
        jne public_578057
        public_578044 : nop
        push edi
        push esi
        or ebx, 0x1000000
        push ebx
        call dword ptr ds : [public_616428]
        test eax, eax
        je public_57805b
        public_578057 : nop
        test ebx, ebx
        jne public_578071
        public_57805b : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push edi
        push esi
        push 0x3AE
        push ecx
        public_578069 : nop
        call public_4347e0
        add esp, 0x10
        public_578071 : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_5781ec
        lea edx, ss:[esp+0x10]
        push esi
        push edx
        call dword ptr ds : [public_5c70b4]
        mov ebx, dword ptr ds : [public_5c71c8]
        mov word ptr ds : [esi], 0
        mov al, byte ptr ss : [ebp+8]
        add esp, 8
        test al, 1
        je public_5780f4
        push esi
        call ebx
        add esp, 4
        push 0
        push 0x10
        mov ebp, eax
        call dword ptr ds : [public_5c7268]
        push edi
        shl eax, 0x10
        push esi
        push eax
        call dword ptr ds : [public_616428]
        test eax, eax
        jne public_5780de
        mov edx, dword ptr ds : [public_67eca8]
        mov eax, edi
        sub eax, ebp
        push eax
        lea ecx, ds:[esi+ebp*2]
        push ecx
        push 0x4EB
        push edx
        call public_4347e0
        add esp, 0x10
        jmp public_5780ed
/*FIXUP public_5780de : nop
        push offset public_5e4420 @0x5780de*/
  FIXUP public_5780de : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4420
        push esi
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        public_5780ed : nop
        mov ebp, dword ptr ss : [esp+0x214]
        public_5780f4 : nop
        test byte ptr ss : [ebp+8], 4
        je public_578151
        push esi
        call ebx
        add esp, 4
        push 0
        push 0x11
        mov ebp, eax
        call dword ptr ds : [public_5c7268]
        push edi
        shl eax, 0x10
        push esi
        push eax
        call dword ptr ds : [public_616428]
        test eax, eax
        jne public_57813b
        mov edx, dword ptr ds : [public_67eca8]
        mov eax, edi
        sub eax, ebp
        push eax
        lea ecx, ds:[esi+ebp*2]
        push ecx
        push 0x4EC
        push edx
        call public_4347e0
        add esp, 0x10
        jmp public_57814a
/*FIXUP public_57813b : nop
        push offset public_5e4420 @0x57813b*/
  FIXUP public_57813b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4420
        push esi
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        public_57814a : nop
        mov ebp, dword ptr ss : [esp+0x214]
        public_578151 : nop
        test byte ptr ss : [ebp+8], 0x10
        je public_5781a7
        push esi
        call ebx
        add esp, 4
        push 0
        push 0x12
        mov ebp, eax
        call dword ptr ds : [public_5c7268]
        push edi
        shl eax, 0x10
        push esi
        push eax
        call dword ptr ds : [public_616428]
        test eax, eax
        jne public_578198
        mov edx, dword ptr ds : [public_67eca8]
        mov eax, edi
        sub eax, ebp
        push eax
        lea ecx, ds:[esi+ebp*2]
        push ecx
        push 0x4ED
        push edx
        call public_4347e0
        add esp, 0x10
        jmp public_5781a7
/*FIXUP public_578198 : nop
        push offset public_5e4420 @0x578198*/
  FIXUP public_578198 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4420
        push esi
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        public_5781a7 : nop
        push esi
        call ebx
        mov ebp, eax
        lea eax, ss:[esp+0x14]
        push eax
        call ebx
        add ebp, eax
        add esp, 8
        cmp ebp, edi
        jae public_5781d6
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x200
        ret 
        public_5781d6 : nop
        mov edx, dword ptr ds : [public_67eca8]
        push edi
        push esi
        push 0x3AE
        push edx
        call public_4347e0
        add esp, 0x10
        public_5781ec : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x200
        ret 
        UNREACHABLE_TRAP(0x577f50)
        ASM_EXPORT_ENTRY_SINGLE(0x577f7a, public_577f7a)
    }
}

#undef public_577f7a
#undef public_577f81
#undef public_577f88
#undef public_577f8f
#undef public_577f96
#undef public_577f9d
#undef public_577fa4
#undef public_577fab
#undef public_577fb2
#undef public_577fb9
#undef public_577fbe
#undef public_577fda
#undef public_57801f
#undef public_578021
#undef public_578044
#undef public_578057
#undef public_57805b
#undef public_578069
#undef public_578071
#undef public_5780de
#undef public_5780ed
#undef public_5780f4
#undef public_57813b
#undef public_57814a
#undef public_578151
#undef public_578198
#undef public_5781a7
#undef public_5781d6
#undef public_5781ec

#pragma init_seg(compiler)
extern "C" void const* const public_577f7a = __AsmFindLabelExport(&internal_577f50, 0x577f7a);
