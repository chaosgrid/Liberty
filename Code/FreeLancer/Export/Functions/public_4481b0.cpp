#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4481b0);

#define public_4481c0 _public_4481c0
#define public_4481e2 _public_4481e2
#define public_4481fd _public_4481fd
#define public_448206 _public_448206

PROC_DECLARE(0x4481b0, internal_4481b0, public_4481b0);
extern "C" NAKED register_t __cdecl internal_4481b0()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x78]
        xor ebx, ebx
        test eax, eax
        jle public_448206
        push esi
        mov edi, edi
        public_4481c0 : nop
        mov eax, dword ptr ds : [edi+0xA4]
        lea esi, ds:[ebx*8]
        add eax, esi
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4481e2
        mov edx, dword ptr ds : [eax]
        push 0
        mov ecx, eax
        call dword ptr ds : [edx+0x88]
        public_4481e2 : nop
        mov eax, dword ptr ds : [edi+0xA8]
        add eax, esi
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4481fd
        mov edx, dword ptr ds : [eax]
        push 0
        mov ecx, eax
        call dword ptr ds : [edx+0x88]
        public_4481fd : nop
        mov eax, dword ptr ds : [edi+0x78]
        inc ebx
        cmp ebx, eax
        jl public_4481c0
        pop esi
        public_448206 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4481b0)
    }
}

#undef public_4481c0
#undef public_4481e2
#undef public_4481fd
#undef public_448206
