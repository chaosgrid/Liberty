#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6344000);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);
CLANG_FORWARD_PROC_SYMBOL(public_634b300);
CLANG_FORWARD_PROC_SYMBOL(public_634c6f0);
CLANG_FORWARD_PROC_SYMBOL(public_634cd20);
CLANG_FORWARD_PROC_SYMBOL(public_634d5f0);
CLANG_FORWARD_PROC_SYMBOL(public_63503c0);
CLANG_FORWARD_PROC_SYMBOL(public_635c500);
CLANG_FORWARD_PROC_SYMBOL(public_6360640);
CLANG_FORWARD_PROC_SYMBOL(public_6360960);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6397ef4);

#define public_634c736 _public_634c736
#define public_634c748 _public_634c748
#define public_634c76a _public_634c76a
#define public_634c77a _public_634c77a
#define public_634c7a8 _public_634c7a8
#define public_634c7d1 _public_634c7d1
#define public_634c7eb _public_634c7eb
#define public_634c808 _public_634c808
#define public_634c876 _public_634c876
#define public_634c888 _public_634c888
#define public_634c8a5 _public_634c8a5
#define public_634c8b2 _public_634c8b2
#define public_634c8d3 _public_634c8d3
#define public_634c8f3 _public_634c8f3
#define public_634c913 _public_634c913
#define public_634c932 _public_634c932
#define public_634c951 _public_634c951
#define public_634c95d _public_634c95d
#define public_634c96e _public_634c96e
#define public_634c983 _public_634c983
#define public_634c98b _public_634c98b
#define public_634c9ad _public_634c9ad
#define public_634c9ba _public_634c9ba
#define public_634c9e3 _public_634c9e3
#define public_634c9f0 _public_634c9f0
#define public_634ca19 _public_634ca19
#define public_634ca26 _public_634ca26
#define public_634ca4f _public_634ca4f
#define public_634ca5c _public_634ca5c
#define public_634ca84 _public_634ca84
#define public_634ca91 _public_634ca91
#define public_634cabd _public_634cabd
#define public_634caca _public_634caca

PROC_DECLARE(0x634c6f0, internal_634c6f0, public_634c6f0);
extern "C" NAKED register_t __cdecl internal_634c6f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397ef4 @0x634c6f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397ef4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x144]
        xor ebx, ebx
        cmp eax, 0x1E240
        mov dword ptr ss : [esp+0x14], 5
        jne public_634c98b
        push edi
        xor edi, edi
        mov di, word ptr ds : [esi+0xD2]
        dec edi
        js public_634c748
        public_634c736 : nop
        mov eax, dword ptr ds : [esi+0xD4]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+4]
        dec edi
        jns public_634c736
        public_634c748 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        call public_6345450
        mov edi, dword ptr ds : [esi+0xC]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x30], ebx
        je public_634c76a
        mov ecx, edi
        call public_634b300
        push edi
        call public_6391d5a
        add esp, 4
        public_634c76a : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0xC], ebx
        je public_634c77a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        public_634c77a : nop
        mov eax, dword ptr ds : [esi+0x90]
        push eax
        mov dword ptr ds : [esi], ebx
        call public_6391d5a
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [esi+0x90], ebx
        je public_634c7a8
        mov ecx, edi
        call public_6360960
        push edi
        call public_6391d5a
        add esp, 4
        public_634c7a8 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        call public_6391d5a
        mov edi, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        je public_634c7d1
        mov ecx, edi
        call public_63503c0
        push edi
        call public_6391d5a
        add esp, 4
        public_634c7d1 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x10], ebx
        je public_634c7eb
        mov ecx, edi
        call public_635c500
        push edi
        call public_6391d5a
        add esp, 4
        public_634c7eb : nop
        mov edi, dword ptr ds : [esi+0x8C]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x14], ebx
        je public_634c808
        mov ecx, edi
        call public_6360640
        push edi
        call public_6391d5a
        add esp, 4
        public_634c808 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x8C], ebx
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x18], ebx
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x98]
        mov dword ptr ds : [esi+0x24], ebx
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov dword ptr ds : [esi+0x98], ebx
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x9C], ebx
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        xor edi, edi
        mov dword ptr ds : [esi+0x1C], ebx
        mov di, word ptr ds : [esi+0x12E]
        dec edi
        js public_634c888
        public_634c876 : nop
        mov eax, dword ptr ds : [esi+0x130]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x18]
        dec edi
        jns public_634c876
        public_634c888 : nop
        mov eax, dword ptr ds : [esi+0x130]
        lea ecx, ds:[esi+0x134]
        cmp eax, ecx
        je public_634c8b2
        cmp eax, ebx
        je public_634c8a5
        push eax
        call public_6343fb0
        add esp, 4
        public_634c8a5 : nop
        mov dword ptr ds : [esi+0x130], ebx
        mov word ptr ds : [esi+0x12C], bx
        public_634c8b2 : nop
        mov word ptr ds : [esi+0x12E], bx
        mov edi, dword ptr ds : [esi+0xA0]
        cmp edi, ebx
        je public_634c8d3
        mov ecx, edi
        call public_6344000
        push edi
        call public_6391d5a
        add esp, 4
        public_634c8d3 : nop
        mov edi, dword ptr ds : [esi+0xA4]
        cmp edi, ebx
        mov dword ptr ds : [esi+0xA0], ebx
        je public_634c8f3
        mov ecx, edi
        call public_6344000
        push edi
        call public_6391d5a
        add esp, 4
        public_634c8f3 : nop
        mov edi, dword ptr ds : [esi+0x94]
        cmp edi, ebx
        mov dword ptr ds : [esi+0xA4], ebx
        je public_634c913
        mov ecx, edi
        call public_634d5f0
        push edi
        call public_6391d5a
        add esp, 4
        public_634c913 : nop
        mov eax, dword ptr ds : [esi+0xE8]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x94], ebx
        je public_634c932
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0xE8], ebx
        public_634c932 : nop
        mov ecx, dword ptr ds : [esi+0xF4]
        add ecx, 4
        xor edi, edi
        mov di, word ptr ds : [ecx+2]
        mov eax, edi
        and eax, 0xFFFF
        dec eax
        js public_634c95d
        mov edx, dword ptr ds : [ecx+4]
        lea edx, ds:[edx+eax*4]
        public_634c951 : nop
        cmp dword ptr ds : [edx], esi
        je public_634c95d
        dec eax
        sub edx, 4
        cmp eax, ebx
        jge public_634c951
        public_634c95d : nop
        lea edx, ds:[edi-1]
        mov word ptr ds : [ecx+2], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_634c983
        public_634c96e : nop
        mov edx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], edi
        xor edx, edx
        mov dx, word ptr ds : [ecx+2]
        inc eax
        cmp eax, edx
        jl public_634c96e
        public_634c983 : nop
        mov ecx, esi
        call public_634cd20
        pop edi
        public_634c98b : nop
        mov eax, dword ptr ds : [esi+0x130]
        lea ecx, ds:[esi+0x134]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 4
        je public_634c9ba
        cmp eax, ebx
        je public_634c9ad
        push eax
        call public_6343fb0
        add esp, 4
        public_634c9ad : nop
        mov dword ptr ds : [esi+0x130], ebx
        mov word ptr ds : [esi+0x12C], bx
        public_634c9ba : nop
        mov word ptr ds : [esi+0x12E], bx
        mov eax, dword ptr ds : [esi+0x128]
        lea edx, ds:[esi+0x12C]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], 3
        je public_634c9f0
        cmp eax, ebx
        je public_634c9e3
        push eax
        call public_6343fb0
        add esp, 4
        public_634c9e3 : nop
        mov dword ptr ds : [esi+0x128], ebx
        mov word ptr ds : [esi+0x124], bx
        public_634c9f0 : nop
        mov word ptr ds : [esi+0x126], bx
        mov eax, dword ptr ds : [esi+0xE4]
        lea ecx, ds:[esi+0xE8]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 2
        je public_634ca26
        cmp eax, ebx
        je public_634ca19
        push eax
        call public_6343fb0
        add esp, 4
        public_634ca19 : nop
        mov dword ptr ds : [esi+0xE4], ebx
        mov word ptr ds : [esi+0xE0], bx
        public_634ca26 : nop
        mov word ptr ds : [esi+0xE2], bx
        mov eax, dword ptr ds : [esi+0xDC]
        lea edx, ds:[esi+0xE0]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], 1
        je public_634ca5c
        cmp eax, ebx
        je public_634ca4f
        push eax
        call public_6343fb0
        add esp, 4
        public_634ca4f : nop
        mov dword ptr ds : [esi+0xDC], ebx
        mov word ptr ds : [esi+0xD8], bx
        public_634ca5c : nop
        mov word ptr ds : [esi+0xDA], bx
        mov eax, dword ptr ds : [esi+0xD4]
        lea ecx, ds:[esi+0xD8]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], bl
        je public_634ca91
        cmp eax, ebx
        je public_634ca84
        push eax
        call public_6343fb0
        add esp, 4
        public_634ca84 : nop
        mov dword ptr ds : [esi+0xD4], ebx
        mov word ptr ds : [esi+0xD0], bx
        public_634ca91 : nop
        mov word ptr ds : [esi+0xD2], bx
        mov eax, dword ptr ds : [esi+0xCC]
        lea edx, ds:[esi+0xD0]
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_634caca
        cmp eax, ebx
        je public_634cabd
        push eax
        call public_6343fb0
        add esp, 4
        public_634cabd : nop
        mov dword ptr ds : [esi+0xCC], ebx
        mov word ptr ds : [esi+0xC8], bx
        public_634caca : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+0xCA], bx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x634c6f0)
    }
}

#undef public_634c736
#undef public_634c748
#undef public_634c76a
#undef public_634c77a
#undef public_634c7a8
#undef public_634c7d1
#undef public_634c7eb
#undef public_634c808
#undef public_634c876
#undef public_634c888
#undef public_634c8a5
#undef public_634c8b2
#undef public_634c8d3
#undef public_634c8f3
#undef public_634c913
#undef public_634c932
#undef public_634c951
#undef public_634c95d
#undef public_634c96e
#undef public_634c983
#undef public_634c98b
#undef public_634c9ad
#undef public_634c9ba
#undef public_634c9e3
#undef public_634c9f0
#undef public_634ca19
#undef public_634ca26
#undef public_634ca4f
#undef public_634ca5c
#undef public_634ca84
#undef public_634ca91
#undef public_634cabd
#undef public_634caca
