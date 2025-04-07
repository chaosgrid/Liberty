#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c6d5b _public_62c6d5b
#define public_62c6d5d _public_62c6d5d
#define public_62c6d74 _public_62c6d74
#define public_62c6da2 _public_62c6da2

PROC_DECLARE(0x62c6d30, internal_62c6d30, public_62c6d30);
extern "C" NAKED register_t __cdecl internal_62c6d30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x310]
        test eax, eax
        lea esi, ds:[edi+0x310]
        je public_62c6d74
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c6d74
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c6d5b
        lea ecx, ds:[eax-8]
        jmp public_62c6d5d
        public_62c6d5b : nop
        xor ecx, ecx
        public_62c6d5d : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, ebx
        jne public_62c6d74
        cmp dword ptr ds : [esi], 0
        je public_62c6d74
        push 0
        mov ecx, esi
        call public_6341610
        public_62c6d74 : nop
        mov eax, dword ptr ds : [edi+0x370]
        test eax, eax
        lea esi, ds:[edi+0x370]
        je public_62c6da2
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62c6da2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        jne public_62c6da2
        cmp dword ptr ds : [esi], 0
        je public_62c6da2
        push 0
        mov ecx, esi
        call public_6341610
        public_62c6da2 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62c6d30)
    }
}

#undef public_62c6d5b
#undef public_62c6d5d
#undef public_62c6d74
#undef public_62c6da2
