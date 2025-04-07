#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62b4e40 _public_62b4e40
#define public_62b4e5f _public_62b4e5f
#define public_62b4e6c _public_62b4e6c
#define public_62b4e78 _public_62b4e78
#define public_62b4e86 _public_62b4e86

PROC_DECLARE(0x62b4e20, internal_62b4e20, public_62b4e20);
extern "C" NAKED register_t __cdecl internal_62b4e20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        je public_62b4e6c
        mov esi, dword ptr ds : [edi+0x1F8]
        cmp esi, dword ptr ds : [edi+0x1FC]
        je public_62b4e6c
        lea esp, ss:[esp]
        public_62b4e40 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4e5f
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4e5f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov ebp, eax
        call dword ptr ds : [edx+0x20]
        cmp ebp, eax
        je public_62b4e78
        public_62b4e5f : nop
        mov eax, dword ptr ds : [edi+0x1FC]
        add esi, 8
        cmp esi, eax
        jne public_62b4e40
        public_62b4e6c : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 4
        public_62b4e78 : nop
        cmp dword ptr ds : [esi], 0
        je public_62b4e86
        push 0
        mov ecx, esi
        call public_6341610
        public_62b4e86 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b4e20)
    }
}

#undef public_62b4e40
#undef public_62b4e5f
#undef public_62b4e6c
#undef public_62b4e78
#undef public_62b4e86
