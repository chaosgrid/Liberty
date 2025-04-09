#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448210);

#define public_448223 _public_448223
#define public_448244 _public_448244
#define public_44825e _public_44825e
#define public_448268 _public_448268

PROC_DECLARE(0x448210, internal_448210, public_448210);
extern "C" NAKED register_t __cdecl internal_448210()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x78]
        xor ebx, ebx
        test eax, eax
        jle public_448268
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        public_448223 : nop
        mov eax, dword ptr ds : [edi+0xA4]
        lea esi, ds:[ebx*8]
        add eax, esi
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_448244
        mov edx, dword ptr ds : [eax]
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x80]
        public_448244 : nop
        mov eax, dword ptr ds : [edi+0xA8]
        add eax, esi
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_44825e
        mov edx, dword ptr ds : [eax]
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x80]
        public_44825e : nop
        mov eax, dword ptr ds : [edi+0x78]
        inc ebx
        cmp ebx, eax
        jl public_448223
        pop esi
        pop ebp
        public_448268 : nop
        pop edi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x448210)
    }
}

#undef public_448223
#undef public_448244
#undef public_44825e
#undef public_448268
