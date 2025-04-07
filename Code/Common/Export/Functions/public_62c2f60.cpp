#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c2f8b _public_62c2f8b
#define public_62c2f8d _public_62c2f8d
#define public_62c2fa4 _public_62c2fa4
#define public_62c2fd2 _public_62c2fd2

PROC_DECLARE(0x62c2f60, internal_62c2f60, public_62c2f60);
extern "C" NAKED register_t __cdecl internal_62c2f60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x324]
        test eax, eax
        lea esi, ds:[edi+0x324]
        je public_62c2fa4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c2fa4
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c2f8b
        lea ecx, ds:[eax-8]
        jmp public_62c2f8d
        public_62c2f8b : nop
        xor ecx, ecx
        public_62c2f8d : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, ebx
        jne public_62c2fa4
        cmp dword ptr ds : [esi], 0
        je public_62c2fa4
        push 0
        mov ecx, esi
        call public_6341610
        public_62c2fa4 : nop
        mov eax, dword ptr ds : [edi+0x450]
        test eax, eax
        lea esi, ds:[edi+0x450]
        je public_62c2fd2
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62c2fd2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        jne public_62c2fd2
        cmp dword ptr ds : [esi], 0
        je public_62c2fd2
        push 0
        mov ecx, esi
        call public_6341610
        public_62c2fd2 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62c2f60)
    }
}

#undef public_62c2f8b
#undef public_62c2f8d
#undef public_62c2fa4
#undef public_62c2fd2
