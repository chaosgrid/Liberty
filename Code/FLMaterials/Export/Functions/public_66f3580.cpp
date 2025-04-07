#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1000);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);

#define public_66f3597 _public_66f3597
#define public_66f35b6 _public_66f35b6
#define public_66f35c3 _public_66f35c3
#define public_66f35e9 _public_66f35e9
#define public_66f3615 _public_66f3615

PROC_DECLARE(0x66f3580, internal_66f3580, public_66f3580);
extern "C" NAKED register_t __cdecl internal_66f3580()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1C]
        xor ebx, ebx
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr ds : [edi], offset public_6701428
        jbe public_66f35c3
        public_66f3597 : nop
        mov esi, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi+ebx+4]
        mov ecx, dword ptr ds : [edi+8]
        add esi, ebx
        cmp eax, 0xFFFFFFFF
        je public_66f35b6
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_66f35b6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        inc ebp
        add ebx, 0x2C
        cmp ebp, eax
        jb public_66f3597
        xor ebx, ebx
        public_66f35c3 : nop
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_66f35e9
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
/*FIXUP push offset _public_66f1000 @0x66f35d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f1000
        push ecx
        push 0x2C
        push eax
        call public_670071b
        push esi
        call public_6700710
        add esp, 4
        xor ebx, ebx
        public_66f35e9 : nop
        mov edx, dword ptr ds : [edi+0x14]
        push edx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0xC], ebx
        call public_6700710
        mov al, byte ptr ss : [esp+0x18]
        add esp, 4
        test al, 1
        mov dword ptr ds : [edi+0x14], ebx
        je public_66f3615
        push edi
        call public_6700710
        add esp, 4
        public_66f3615 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66f3580)
    }
}

#undef public_66f3597
#undef public_66f35b6
#undef public_66f35c3
#undef public_66f35e9
#undef public_66f3615
