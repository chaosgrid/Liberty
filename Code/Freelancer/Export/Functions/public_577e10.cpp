#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577e10);

#define public_577e30 _public_577e30
#define public_577e4a _public_577e4a
#define public_577e4f _public_577e4f
#define public_577e55 _public_577e55
#define public_577e5b _public_577e5b

PROC_DECLARE(0x577e10, internal_577e10, public_577e10);
extern "C" NAKED register_t __cdecl internal_577e10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67c258]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        push ebx
        push esi
        push edi
        je public_577e55
        mov ebx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        lea ebx, ds:[ebx]
        public_577e30 : nop
        cmp dword ptr ds : [ecx+8], edi
        jne public_577e4f
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ecx+0x1C]
        test edx, edx
        je public_577e4a
        mov eax, dword ptr ds : [ecx+0x20]
        sub eax, edx
        sar eax, 3
        cmp ebx, eax
        jb public_577e5b
        public_577e4a : nop
        mov eax, dword ptr ds : [public_67c258]
        public_577e4f : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        jne public_577e30
        public_577e55 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_577e5b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ds : [eax+ebx*8]
        lea eax, ds:[eax+ebx*8]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x577e10)
    }
}

#undef public_577e30
#undef public_577e4a
#undef public_577e4f
#undef public_577e55
#undef public_577e5b
