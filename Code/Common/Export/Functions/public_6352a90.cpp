#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352a90);

#define public_6352ab1 _public_6352ab1
#define public_6352ac2 _public_6352ac2
#define public_6352acb _public_6352acb
#define public_6352ad1 _public_6352ad1
#define public_6352ad9 _public_6352ad9
#define public_6352ae4 _public_6352ae4

PROC_DECLARE(0x6352a90, internal_6352a90, public_6352a90);
extern "C" NAKED register_t __cdecl internal_6352a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        or eax, ebx
        or edx, edi
        cmp eax, edx
        jge public_6352ab1
        mov esi, eax
        mov eax, edx
        mov edx, esi
        public_6352ab1 : nop
        mov ebx, dword ptr ds : [ecx+0x818]
        lea edi, ds:[ebx-1]
        test edi, edi
        lea esi, ds:[ecx+ebx*8+0x10]
        jl public_6352ad1
        public_6352ac2 : nop
        cmp dword ptr ds : [esi], eax
        jne public_6352acb
        cmp dword ptr ds : [esi+4], edx
        je public_6352ad9
        public_6352acb : nop
        sub esi, 8
        dec edi
        jns public_6352ac2
        public_6352ad1 : nop
        cmp ebx, 0x100
        jl public_6352ae4
        public_6352ad9 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 0x10
        public_6352ae4 : nop
        mov dword ptr ds : [ecx+ebx*8+0x18], eax
        mov eax, dword ptr ds : [ecx+0x818]
        mov dword ptr ds : [ecx+eax*8+0x1C], edx
        mov eax, dword ptr ds : [ecx+0x818]
        pop edi
        pop esi
        inc eax
        mov dword ptr ds : [ecx+0x818], eax
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6352a90)
    }
}

#undef public_6352ab1
#undef public_6352ac2
#undef public_6352acb
#undef public_6352ad1
#undef public_6352ad9
#undef public_6352ae4
