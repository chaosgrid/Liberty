#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22f4d);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f85);
CLANG_FORWARD_PROC_SYMBOL(public_6d23639);

#define public_6d23678 _public_6d23678
#define public_6d2367f _public_6d2367f
#define public_6d236cc _public_6d236cc
#define public_6d236ce _public_6d236ce
#define public_6d236f0 _public_6d236f0

PROC_DECLARE(0x6d23639, internal_6d23639, public_6d23639);
extern "C" NAKED register_t __cdecl internal_6d23639()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d22f4d
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], ecx
        cmp edx, 0x22
        je public_6d23678
/*FIXUP push offset public_6d6bd78 @0x6d23667*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd78
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d22f85
        xor eax, eax
        jmp public_6d236f0
        public_6d23678 : nop
        mov dword ptr ss : [ebp-4], offset public_6d70748
        public_6d2367f : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x22
        je public_6d236ce
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp-4]
        mov cl, byte ptr ds : [edx]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ss : [ebp-4]
        add edx, 1
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+8], ecx
        cmp dword ptr ss : [ebp-4], offset public_6d70847
        jbe public_6d236cc
/*FIXUP push offset public_6d6bd84 @0x6d236bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd84
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d22f85
        xor eax, eax
        jmp public_6d236f0
        public_6d236cc : nop
        jmp public_6d2367f
        public_6d236ce : nop
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d22f4d
        mov eax, offset public_6d70748
        public_6d236f0 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d23639)
    }
}

#undef public_6d23678
#undef public_6d2367f
#undef public_6d236cc
#undef public_6d236ce
#undef public_6d236f0
