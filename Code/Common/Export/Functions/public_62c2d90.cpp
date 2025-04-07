#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2d90);
CLANG_FORWARD_PROC_SYMBOL(public_62d2a10);

#define public_62c2dd5 _public_62c2dd5
#define public_62c2df9 _public_62c2df9
#define public_62c2dfd _public_62c2dfd
#define public_62c2e1b _public_62c2e1b
#define public_62c2e2d _public_62c2e2d

PROC_DECLARE(0x62c2d90, internal_62c2d90, public_62c2d90);
extern "C" NAKED register_t __cdecl internal_62c2d90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        push esi
        push edi
        je public_62c2e2d
        lea esi, ds:[eax-8]
        test esi, esi
        je public_62c2e2d
        mov eax, dword ptr ds : [ecx+0x18]
        mov edx, eax
        and edx, 4
        je public_62c2dd5
        test al, 2
        jne public_62c2dd5
        test byte ptr ds : [ecx+0x14], 2
        je public_62c2dd5
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push 1
        jmp public_62c2e1b
        public_62c2dd5 : nop
        test edx, edx
        jne public_62c2dfd
        test byte ptr ds : [ecx+0x14], 4
        je public_62c2df9
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push 2
        jmp public_62c2e1b
        public_62c2df9 : nop
        test edx, edx
        je public_62c2e2d
        public_62c2dfd : nop
        test byte ptr ds : [ecx+0x14], 4
        jne public_62c2e2d
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x1580]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push 3
        public_62c2e1b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push edi
        call public_62d2a10
        public_62c2e2d : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62c2d90)
    }
}

#undef public_62c2dd5
#undef public_62c2df9
#undef public_62c2dfd
#undef public_62c2e1b
#undef public_62c2e2d
