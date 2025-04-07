#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12be0);

#define public_6d12c13 _public_6d12c13
#define public_6d12c20 _public_6d12c20
#define public_6d12c22 _public_6d12c22
#define public_6d12c2b _public_6d12c2b
#define public_6d12c2d _public_6d12c2d
#define public_6d12c44 _public_6d12c44
#define public_6d12c4e _public_6d12c4e
#define public_6d12c50 _public_6d12c50

PROC_DECLARE(0x6d12be0, internal_6d12be0, public_6d12be0);
extern "C" NAKED register_t __cdecl internal_6d12be0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, dword ptr ds : [eax+4]
        test ebp, ebp
        push esi
        push edi
        jne public_6d12c13
        mov eax, dword ptr ds : [eax]
        push eax
        push 0x454
/*FIXUP push offset public_6d6840c @0x6d12bf8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov ecx, 0x100001
/*FIXUP push offset public_6d683dc @0x6d12c02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683dc
        push ecx
        mov ecx, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d12c13 : nop
        mov edi, dword ptr ds : [ebx+0xC]
        xor esi, esi
        test edi, edi
        jle public_6d12c50
        mov edx, dword ptr ds : [ebx+8]
        nop 
        public_6d12c20 : nop
        xor ecx, ecx
        public_6d12c22 : nop
        test ecx, ecx
        jne public_6d12c2b
        mov ecx, dword ptr ds : [edx+0x2C]
        jmp public_6d12c2d
        public_6d12c2b : nop
        mov ecx, dword ptr ds : [ecx]
        public_6d12c2d : nop
        test ecx, ecx
        je public_6d12c44
        mov eax, dword ptr ds : [ecx+8]
        add eax, 0xC
        cmp dword ptr ds : [eax+0x10], 0
        je public_6d12c22
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6d12c4e
        public_6d12c44 : nop
        inc esi
        add edx, 0x68
        cmp esi, edi
        jl public_6d12c20
        jmp public_6d12c50
        public_6d12c4e : nop
        mov ebp, eax
        public_6d12c50 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x70]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d12be0)
    }
}

#undef public_6d12c13
#undef public_6d12c20
#undef public_6d12c22
#undef public_6d12c2b
#undef public_6d12c2d
#undef public_6d12c44
#undef public_6d12c4e
#undef public_6d12c50
