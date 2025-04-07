#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0cfa0);

#define public_6d0cfb0 _public_6d0cfb0
#define public_6d0cfb9 _public_6d0cfb9
#define public_6d0cfbb _public_6d0cfbb
#define public_6d0cfcd _public_6d0cfcd
#define public_6d0cfd0 _public_6d0cfd0
#define public_6d0cfd9 _public_6d0cfd9
#define public_6d0cfdb _public_6d0cfdb
#define public_6d0cfed _public_6d0cfed

PROC_DECLARE(0x6d0cfa0, internal_6d0cfa0, public_6d0cfa0);
extern "C" NAKED register_t __cdecl internal_6d0cfa0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        xor esi, esi
        nop 
        lea esp, ss:[esp]
        public_6d0cfb0 : nop
        test esi, esi
        jne public_6d0cfb9
        mov esi, dword ptr ds : [ebx+0x38]
        jmp public_6d0cfbb
        public_6d0cfb9 : nop
        mov esi, dword ptr ds : [esi]
        public_6d0cfbb : nop
        test esi, esi
        je public_6d0cfcd
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x178]
        jmp public_6d0cfb0
        public_6d0cfcd : nop
        xor esi, esi
        nop 
        public_6d0cfd0 : nop
        test esi, esi
        jne public_6d0cfd9
        mov esi, dword ptr ds : [ebx+0x60]
        jmp public_6d0cfdb
        public_6d0cfd9 : nop
        mov esi, dword ptr ds : [esi]
        public_6d0cfdb : nop
        test esi, esi
        je public_6d0cfed
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x178]
        jmp public_6d0cfd0
        public_6d0cfed : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d0cfa0)
    }
}

#undef public_6d0cfb0
#undef public_6d0cfb9
#undef public_6d0cfbb
#undef public_6d0cfcd
#undef public_6d0cfd0
#undef public_6d0cfd9
#undef public_6d0cfdb
#undef public_6d0cfed
