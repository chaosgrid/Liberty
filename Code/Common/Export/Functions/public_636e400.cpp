#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e400);

#define public_636e417 _public_636e417
#define public_636e425 _public_636e425
#define public_636e441 _public_636e441
#define public_636e454 _public_636e454

PROC_DECLARE(0x636e400, internal_636e400, public_636e400);
extern "C" NAKED register_t __cdecl internal_636e400()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_636e454
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp ecx, eax
        lea edx, ds:[esi+4]
        je public_636e425
        public_636e417 : nop
        test ecx, ecx
        je public_636e425
        mov ecx, dword ptr ds : [edx+4]
        add edx, 4
        cmp ecx, eax
        jne public_636e417
        public_636e425 : nop
        cmp dword ptr ds : [edx], 0
        je public_636e454
        mov ecx, dword ptr ds : [esi]
        push ebx
        lea ecx, ds:[esi+ecx*4+4]
        push edi
        mov edi, dword ptr ds : [ecx]
        test edi, edi
        lea ebx, ds:[edi-1]
        mov dword ptr ds : [ecx], ebx
        jne public_636e441
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edi
        public_636e441 : nop
        mov ecx, dword ptr ds : [ecx]
        lea ecx, ds:[esi+ecx*4]
        mov esi, dword ptr ds : [ecx]
        pop edi
        mov dword ptr ds : [edx], esi
        pop ebx
        mov dword ptr ds : [ecx], 0
        pop esi
        ret 
        public_636e454 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e400)
    }
}

#undef public_636e417
#undef public_636e425
#undef public_636e441
#undef public_636e454
