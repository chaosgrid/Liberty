#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e5a0);

#define public_636e5b7 _public_636e5b7
#define public_636e5c5 _public_636e5c5
#define public_636e5dc _public_636e5dc
#define public_636e5ea _public_636e5ea
#define public_636e605 _public_636e605
#define public_636e607 _public_636e607

PROC_DECLARE(0x636e5a0, internal_636e5a0, public_636e5a0);
extern "C" NAKED register_t __cdecl internal_636e5a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        je public_636e605
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp ecx, eax
        lea edx, ds:[ebx+4]
        je public_636e5c5
        public_636e5b7 : nop
        test ecx, ecx
        je public_636e5c5
        mov ecx, dword ptr ds : [edx+4]
        add edx, 4
        cmp ecx, eax
        jne public_636e5b7
        public_636e5c5 : nop
        cmp dword ptr ds : [edx], 0
        je public_636e605
        push esi
        lea ecx, ds:[edx+4]
        push edi
        mov edi, dword ptr ds : [ecx]
        mov esi, ecx
        add ecx, 4
        test edi, edi
        mov dword ptr ds : [edx], edi
        je public_636e5ea
        public_636e5dc : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edx
        add esi, 4
        add ecx, 4
        test edx, edx
        jne public_636e5dc
        public_636e5ea : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+ecx*4+4]
        test edx, edx
        lea ecx, ds:[ebx+ecx*4+4]
        lea esi, ds:[edx-1]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        jne public_636e607
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_636e605 : nop
        xor eax, eax
        public_636e607 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e5a0)
    }
}

#undef public_636e5b7
#undef public_636e5c5
#undef public_636e5dc
#undef public_636e5ea
#undef public_636e605
#undef public_636e607
