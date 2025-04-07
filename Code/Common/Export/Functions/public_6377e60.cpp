#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_6377ea2 _public_6377ea2
#define public_6377ed7 _public_6377ed7
#define public_6377f0a _public_6377f0a
#define public_6377f2b _public_6377f2b
#define public_6377f31 _public_6377f31
#define public_6377f47 _public_6377f47
#define public_6377f63 _public_6377f63
#define public_6377f98 _public_6377f98
#define public_6377fbd _public_6377fbd
#define public_6377fd5 _public_6377fd5

PROC_DECLARE(0x6377e60, internal_6377e60, public_6377e60);
extern "C" NAKED register_t __cdecl internal_6377e60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b970]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, eax
        mov eax, dword ptr ds : [public_658b980]
        push edi
        ja public_6377f47
        mov esi, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [public_658b978]
        lea ecx, ds:[esi*4]
        mov eax, dword ptr ds : [ecx+edx]
        test eax, eax
        je public_6377ea2
        inc dword ptr ds : [public_658b99c]
        mov esi, dword ptr ds : [ecx+edx]
        mov esi, dword ptr ds : [esi]
        pop edi
        mov dword ptr ds : [ecx+edx], esi
        pop esi
        pop ebx
        ret 
        public_6377ea2 : nop
        mov edx, dword ptr ds : [public_658b97c]
        mov ebx, dword ptr ds : [ecx+edx]
        mov ecx, dword ptr ds : [public_658b9a0]
        mov esi, dword ptr ds : [public_658b98c]
        inc ecx
        cmp ebx, esi
        mov dword ptr ds : [public_658b9a0], ecx
        jle public_6377f2b
        mov eax, dword ptr ds : [public_658b984]
        test eax, eax
        mov esi, dword ptr ds : [public_658b964]
        je public_6377ed7
        mov esi, dword ptr ds : [public_658b960]
        public_6377ed7 : nop
        mov edi, dword ptr ds : [public_658b9b4]
        add edi, esi
        push esi
        mov dword ptr ds : [public_658b9b4], edi
        call public_6343f70
        mov edi, eax
        add esp, 4
        test edi, edi
        jne public_6377f0a
/*FIXUP push offset public_63f2e98 @0x6377ef4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2e98
        call public_6356960
        push edi
        push edi
        push 4
        call public_6378600
        add esp, 0x10
        public_6377f0a : nop
        mov eax, dword ptr ds : [public_658b984]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [public_658b974]
        lea eax, ds:[ecx+4]
        not ecx
        and eax, ecx
        mov dword ptr ds : [public_658b984], edi
        lea ecx, ds:[eax+edi]
        sub esi, eax
        jmp public_6377f31
        public_6377f2b : nop
        mov ecx, dword ptr ds : [public_658b988]
        public_6377f31 : nop
        mov eax, ecx
        add ecx, ebx
        sub esi, ebx
        pop edi
        mov dword ptr ds : [public_658b98c], esi
        pop esi
        mov dword ptr ds : [public_658b988], ecx
        pop ebx
        ret 
        public_6377f47 : nop
        test eax, eax
        jne public_6377f63
/*FIXUP push offset public_63f2e50 @0x6377f4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2e50
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x10
        public_6377f63 : nop
        mov ebx, dword ptr ds : [public_658b9a4]
        mov eax, dword ptr ds : [public_658b9b8]
        mov edi, dword ptr ds : [public_658b9a8]
        mov ecx, dword ptr ds : [public_658b9bc]
        inc ebx
        add eax, esi
        inc edi
        cmp ecx, eax
        mov dword ptr ds : [public_658b9a4], ebx
        mov dword ptr ds : [public_658b9a8], edi
        mov dword ptr ds : [public_658b9b8], eax
        jge public_6377f98
        mov dword ptr ds : [public_658b9bc], eax
        public_6377f98 : nop
        push esi
        call public_6343f70
        mov edi, eax
        add esp, 4
        test edi, edi
        jne public_6377fbd
/*FIXUP push offset public_63f2e98 @0x6377fa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2e98
        call public_6356960
        push edi
        push edi
        push 4
        call public_6378600
        add esp, 0x10
        public_6377fbd : nop
        cmp dword ptr ds : [public_658b998], 5
        jl public_6377fd5
        push edi
        push esi
/*FIXUP push offset public_63f2e2c @0x6377fc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2e2c
        call public_6356960
        add esp, 0xC
        public_6377fd5 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6377e60)
    }
}

#undef public_6377ea2
#undef public_6377ed7
#undef public_6377f0a
#undef public_6377f2b
#undef public_6377f31
#undef public_6377f47
#undef public_6377f63
#undef public_6377f98
#undef public_6377fbd
#undef public_6377fd5
