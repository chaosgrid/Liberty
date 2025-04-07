#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_638cd80);
CLANG_FORWARD_PROC_SYMBOL(public_638d2c0);

#define public_638d2ec _public_638d2ec
#define public_638d306 _public_638d306
#define public_638d320 _public_638d320
#define public_638d332 _public_638d332
#define public_638d345 _public_638d345
#define public_638d353 _public_638d353
#define public_638d360 _public_638d360
#define public_638d3a3 _public_638d3a3
#define public_638d3a8 _public_638d3a8

PROC_DECLARE(0x638d2c0, internal_638d2c0, public_638d2c0);
extern "C" NAKED register_t __cdecl internal_638d2c0()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 4
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_63991e8]
        push esi
        push edi
        jl public_638d2ec
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63fa284 @0x638d2e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa284
        push ecx
        call ebp
        add esp, 0xC
        public_638d2ec : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_638d360
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638d360
        mov edx, dword ptr ds : [public_658b8e4]
        public_638d306 : nop
        inc edx
        mov dword ptr ds : [public_658b8e4], edx
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        je public_638d332
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638d332
        public_638d320 : nop
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [public_658b8e4]
        add ecx, 4
        test eax, eax
        jne public_638d320
        public_638d332 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_638d3a8
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638d3a8
        public_638d345 : nop
        cmp dword ptr ds : [eax+0x10], edx
        jne public_638d353
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638d345
        public_638d353 : nop
        test eax, eax
        je public_638d3a8
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638d306
        public_638d360 : nop
        mov edx, dword ptr ds : [ebx+0x3C]
        push edx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 4
        cmp eax, ecx
        jge public_638d3a3
        push 0
        push 6
        push ebx
        push ebx
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638d3a3
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63fa250 @0x638d398*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa250
        push ecx
        call ebp
        add esp, 0xC
        public_638d3a3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_638d3a8 : nop
        push 0
        push 7
        push esi
        push ebx
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638d3a3
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63fa214 @0x638d3ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa214
        push ecx
        call ebp
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638d2c0)
    }
}

#undef public_638d2ec
#undef public_638d306
#undef public_638d320
#undef public_638d332
#undef public_638d345
#undef public_638d353
#undef public_638d360
#undef public_638d3a3
#undef public_638d3a8
