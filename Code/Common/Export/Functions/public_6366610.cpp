#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366610);

#define public_636661c _public_636661c
#define public_636663e _public_636663e
#define public_636664c _public_636664c
#define public_6366663 _public_6366663

PROC_DECLARE(0x6366610, internal_6366610, public_6366610);
extern "C" NAKED register_t __cdecl internal_6366610()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x3C]
        push ebx
        xor ebx, ebx
        test eax, eax
        jle public_6366663
        push esi
        push edi
        public_636661c : nop
        mov edx, dword ptr ds : [ecx+0x40]
        fld dword ptr ds : [public_63a53d4]
        mov esi, dword ptr ds : [ecx+0x10]
        imul edx, ebx
        mov edi, dword ptr ds : [ecx+0x1C]
        lea esi, ds:[esi+edx*4]
        lea edx, ds:[eax-1]
        test edx, edx
        jl public_636664c
        lea eax, ds:[edi+edx*4]
        sub esi, edi
        inc edx
        public_636663e : nop
        fld dword ptr ds : [esi+eax]
        sub eax, 4
        dec edx
        fmul dword ptr ds : [eax+4]
        faddp 
        jne public_636663e
        public_636664c : nop
        mov eax, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [ecx+0x18]
        fsub dword ptr ds : [eax+ebx*4]
        inc ebx
        fstp dword ptr ds : [edx+ebx*4-4]
        mov eax, dword ptr ds : [ecx+0x3C]
        cmp ebx, eax
        jl public_636661c
        pop edi
        pop esi
        public_6366663 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6366610)
    }
}

#undef public_636661c
#undef public_636663e
#undef public_636664c
#undef public_6366663
