#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6381f00);
CLANG_FORWARD_PROC_SYMBOL(public_6382800);

#define public_6382842 _public_6382842
#define public_6382858 _public_6382858
#define public_638286d _public_638286d
#define public_638287a _public_638287a
#define public_638287e _public_638287e
#define public_638289c _public_638289c
#define public_63828f0 _public_63828f0

PROC_DECLARE(0x6382800, internal_6382800, public_6382800);
extern "C" NAKED register_t __cdecl internal_6382800()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_658b904]
        push ebx
        mov ebx, dword ptr ds : [public_658b908]
        push ebp
        push esi
        mov esi, dword ptr ds : [public_658bb50]
        xor ebp, ebp
        inc esi
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [public_658bb50], esi
        mov dword ptr ss : [esp+0x10], ebx
        je public_638287e
        lea edx, ds:[eax+4]
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x20], edx
        je public_638287e
        public_6382842 : nop
        cmp ebp, edi
        je public_638287a
        mov dword ptr ds : [ebx], ecx
        inc ebp
        add ebx, 4
        test edi, edi
        je public_638286d
        mov edx, dword ptr ss : [esp+0x1C]
        sub edx, eax
        lea esi, ds:[edi]
        public_6382858 : nop
        fld qword ptr ds : [eax]
        add ecx, 8
        fsub qword ptr ds : [edx+eax]
        add eax, 8
        dec esi
        fstp qword ptr ds : [ecx-8]
        jne public_6382858
        mov edx, dword ptr ss : [esp+0x20]
        public_638286d : nop
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x20], edx
        jne public_6382842
        public_638287a : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_638287e : nop
        cmp ebp, edi
        jge public_638289c
        push edi
        push ebp
/*FIXUP push offset public_63f6ca8 @0x6382884*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6ca8
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        public_638289c : nop
        mov esi, dword ptr ss : [esp+0x28]
        push esi
        push edi
        push ebx
        call public_6381f00
        fst qword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0xC
        cmp eax, 2
        jl public_63828f0
        mov eax, dword ptr ds : [esi]
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push edi
        push ecx
        call public_6370570
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push eax
/*FIXUP push offset public_63f6c68 @0x63828dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6c68
        push ecx
        call dword ptr ds : [public_63991e8]
        fld qword ptr ss : [esp+0x2C]
        add esp, 0x1C
        public_63828f0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6382800)
    }
}

#undef public_6382842
#undef public_6382858
#undef public_638286d
#undef public_638287a
#undef public_638287e
#undef public_638289c
#undef public_63828f0
