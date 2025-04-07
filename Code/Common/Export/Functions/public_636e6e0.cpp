#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e6e0);

#define public_636e701 _public_636e701
#define public_636e708 _public_636e708
#define public_636e70f _public_636e70f
#define public_636e727 _public_636e727

PROC_DECLARE(0x636e6e0, internal_636e6e0, public_636e6e0);
extern "C" NAKED register_t __cdecl internal_636e6e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+4]
        lea edi, ds:[edx+edi*4+4]
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+4]
        lea esi, ds:[esi+edx*4+4]
        public_636e701 : nop
        cmp ecx, edi
        jne public_636e708
        add ecx, 4
        public_636e708 : nop
        cmp eax, esi
        jne public_636e70f
        add eax, 4
        public_636e70f : nop
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        je public_636e727
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        add ecx, 4
        cmp edx, ebx
        je public_636e701
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_636e727 : nop
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        test edx, edx
        sete cl
        pop edi
        pop esi
        pop ebx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x636e6e0)
    }
}

#undef public_636e701
#undef public_636e708
#undef public_636e70f
#undef public_636e727
