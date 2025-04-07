#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3d10);

#define public_62c54e3 _public_62c54e3
#define public_62c54e5 _public_62c54e5
#define public_62c5504 _public_62c5504
#define public_62c5533 _public_62c5533

PROC_DECLARE(0x62c54b0, internal_62c54b0, public_62c54b0);
extern "C" NAKED register_t __cdecl internal_62c54b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 4
        push edi
        jne public_62c5504
        mov edi, dword ptr ds : [eax+4]
        cmp byte ptr ds : [edi], 0
        jne public_62c5533
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_62c5533
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c54e3
        lea ecx, ds:[eax-8]
        jmp public_62c54e5
        public_62c54e3 : nop
        xor ecx, ecx
        public_62c54e5 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [edi+0x10]
        jne public_62c5533
        mov ecx, esi
        push 0xC
        mov byte ptr ds : [esi+0x399], 1
        call public_62c3d10
        pop edi
        pop esi
        ret 4
        public_62c5504 : nop
        cmp ecx, 3
        jne public_62c5533
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_62c5533
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [edi+8], eax
        jne public_62c5533
        mov ecx, esi
        push 0xC
        call public_62c3d10
        public_62c5533 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c54b0)
    }
}

#undef public_62c54e3
#undef public_62c54e5
#undef public_62c5504
#undef public_62c5533
