#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366610);
CLANG_FORWARD_PROC_SYMBOL(public_6366670);

#define public_636668a _public_636668a
#define public_63666a3 _public_63666a3
#define public_63666b6 _public_63666b6
#define public_63666d5 _public_63666d5
#define public_63666df _public_63666df

PROC_DECLARE(0x6366670, internal_6366670, public_6366670);
extern "C" NAKED register_t __cdecl internal_6366670()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_6366610
        mov ecx, dword ptr ds : [esi+0x44]
        xor edi, edi
        test ecx, ecx
        jle public_63666a3
        mov ebx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x34]
        public_636668a : nop
        mov eax, dword ptr ds : [edx]
        fld dword ptr ds : [ebx+eax*4]
        fabs 
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        je public_63666df
        inc edi
        add edx, 4
        cmp edi, ecx
        jl public_636668a
        public_63666a3 : nop
        mov ebp, dword ptr ds : [esi+0x3C]
        cmp ecx, ebp
        jge public_63666d5
        mov edx, dword ptr ds : [esi+0x34]
        mov edi, dword ptr ds : [esi+0x18]
        mov ebx, dword ptr ds : [esi+0x24]
        lea edx, ds:[edx+ecx*4]
        public_63666b6 : nop
        mov eax, dword ptr ds : [edx]
        shl eax, 2
        fld dword ptr ds : [eax+edi]
        fsub dword ptr ds : [eax+ebx]
        fabs 
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        je public_63666df
        inc ecx
        add edx, 4
        cmp ecx, ebp
        jl public_63666b6
        public_63666d5 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_63666df : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6366670)
    }
}

#undef public_636668a
#undef public_63666a3
#undef public_63666b6
#undef public_63666d5
#undef public_63666df
