#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001710);
CLANG_FORWARD_PROC_SYMBOL(public_10004cd0);

#define public_10005e3c _public_10005e3c
#define public_10005e57 _public_10005e57
#define public_10005e77 _public_10005e77

PROC_DECLARE(0x10005e00, internal_10005e00, public_10005e00);
extern "C" NAKED register_t __cdecl internal_10005e00()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov ebx, esi
        je public_10005e77
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_10005e77
        cmp dword ptr ds : [eax], 6
        jne public_10005e77
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push ebp
        push 1
        call public_10001710
        cmp eax, dword ptr ds : [edi+0x30]
        je public_10005e3c
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_10005e3c : nop
        mov edx, dword ptr ds : [edi+0x1C]
        mov eax, 1
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, dword ptr ds : [edx+0x10]
        shl eax, cl
        cmp esi, eax
        jb public_10005e57
        lea ebx, ds:[eax-1]
        sub esi, ebx
        add ebp, esi
        public_10005e57 : nop
        mov eax, dword ptr ds : [edx+0x14]
        push ebx
        push ebp
        push eax
        call public_10004cd0
        mov ecx, dword ptr ds : [edi+0x1C]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 7
        xor eax, eax
        pop ebx
        ret 0xC
        public_10005e77 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x10005e00)
    }
}

#undef public_10005e3c
#undef public_10005e57
#undef public_10005e77
