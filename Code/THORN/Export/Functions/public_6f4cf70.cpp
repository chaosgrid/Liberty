#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cf70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e240);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e430);

#define public_6f4cfb4 _public_6f4cfb4
#define public_6f4cfc5 _public_6f4cfc5
#define public_6f4d01a _public_6f4d01a

PROC_DECLARE(0x6f4cf70, internal_6f4cf70, public_6f4cf70);
extern "C" NAKED register_t __cdecl internal_6f4cf70()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6f61e28]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi-0x20]
        sub edi, 0x20
        cmp eax, 0xFFFFFFFD
        je public_6f4cfc5
        push edi
        call public_6f4e240
        mov ecx, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [ecx+0x64]
        lea eax, ds:[eax+eax*8]
        shl eax, 5
        sub esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, 0xFFFFFFFA
        jne public_6f4cfb4
/*FIXUP push offset public_6f605a8 @0x6f4cfa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f605a8
        call public_6f4c7f0
        add esp, 4
        public_6f4cfb4 : nop
        push 1
        push 2
        push esi
        call public_6f4c4f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f4cfc5 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [edx+0x64]
        lea ebx, ds:[eax+eax*8]
        shl ebx, 5
        sub esi, ebx
        cmp dword ptr ds : [esi], 0xFFFFFFFA
        jne public_6f4cfb4
        lea edx, ds:[edi+0x10]
        push edx
        push ecx
        call public_6f4e430
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [public_6f61e28]
        add eax, 0x10
        add esp, 8
        cmp ecx, 0xFFFFFFFA
        jne public_6f4d01a
        mov ecx, dword ptr ds : [edx+0x64]
        sub ecx, ebx
        mov esi, dword ptr ds : [ecx+0x20]
        add ecx, 0x20
        cmp esi, 0xFFFFFFFA
        je public_6f4d01a
        push 1
        push 2
        push ecx
        call public_6f4c4f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f4d01a : nop
        add dword ptr ds : [edx], 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edi+0xC], edx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4cf70)
    }
}

#undef public_6f4cfb4
#undef public_6f4cfc5
#undef public_6f4d01a
