#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6990);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62e69bb _public_62e69bb
#define public_62e69bd _public_62e69bd
#define public_62e69d4 _public_62e69d4
#define public_62e69f6 _public_62e69f6
#define public_62e69f8 _public_62e69f8
#define public_62e6a0f _public_62e6a0f

PROC_DECLARE(0x62e6990, internal_62e6990, public_62e6990);
extern "C" NAKED register_t __cdecl internal_62e6990()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1370]
        test eax, eax
        lea esi, ds:[edi+0x1370]
        je public_62e69d4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62e69d4
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62e69bb
        lea ecx, ds:[eax-8]
        jmp public_62e69bd
        public_62e69bb : nop
        xor ecx, ecx
        public_62e69bd : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, ebx
        jne public_62e69d4
        cmp dword ptr ds : [esi], 0
        je public_62e69d4
        push 0
        mov ecx, esi
        call public_6341610
        public_62e69d4 : nop
        mov eax, dword ptr ds : [edi+0x1378]
        test eax, eax
        lea esi, ds:[edi+0x1378]
        je public_62e6a0f
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62e6a0f
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62e69f6
        lea ecx, ds:[eax-8]
        jmp public_62e69f8
        public_62e69f6 : nop
        xor ecx, ecx
        public_62e69f8 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        jne public_62e6a0f
        cmp dword ptr ds : [esi], 0
        je public_62e6a0f
        push 0
        mov ecx, esi
        call public_6341610
        public_62e6a0f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62e6990)
    }
}

#undef public_62e69bb
#undef public_62e69bd
#undef public_62e69d4
#undef public_62e69f6
#undef public_62e69f8
#undef public_62e6a0f
