#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e850);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);

#define public_6f4e85f _public_6f4e85f
#define public_6f4e875 _public_6f4e875
#define public_6f4e882 _public_6f4e882
#define public_6f4e8bc _public_6f4e8bc

PROC_DECLARE(0x6f4e850, internal_6f4e850, public_6f4e850);
extern "C" NAKED register_t __cdecl internal_6f4e850()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edi], 0xFFFFFFFA
        jne public_6f4e85f
        or eax, 0xFFFFFFFF
        pop edi
        ret 
        public_6f4e85f : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+0x70]
        push esi
        xor esi, esi
        test eax, eax
        jle public_6f4e882
        mov ecx, dword ptr ds : [edx+0x6C]
        add ecx, 0x10
        public_6f4e875 : nop
        cmp dword ptr ds : [ecx], 2
        je public_6f4e882
        inc esi
        add ecx, 0x18
        cmp esi, eax
        jl public_6f4e875
        public_6f4e882 : nop
        cmp esi, eax
        jne public_6f4e8bc
        push 0x7FFFFFFD
/*FIXUP push offset public_6f60890 @0x6f4e88b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60890
        push 0x18
        push 1
        push eax
        mov eax, dword ptr ds : [edx+0x6C]
        push eax
        call public_6f4fd90
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x6C], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x70]
        add esp, 0x18
        inc ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov edx, dword ptr ds : [public_6f61e28]
        public_6f4e8bc : nop
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [edi]
        lea eax, ds:[esi+esi*2]
        shl eax, 3
        add edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, edx
        test ecx, ecx
        mov ecx, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [ecx+0x6C]
        sete dl
        mov dword ptr ds : [ecx+eax+0x10], edx
        mov eax, esi
        pop esi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4e850)
    }
}

#undef public_6f4e85f
#undef public_6f4e875
#undef public_6f4e882
#undef public_6f4e8bc
