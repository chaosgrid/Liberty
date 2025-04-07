#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368180);

#define public_6368189 _public_6368189
#define public_63681aa _public_63681aa
#define public_63681b8 _public_63681b8
#define public_63681c4 _public_63681c4

PROC_DECLARE(0x6368180, internal_6368180, public_6368180);
extern "C" NAKED register_t __cdecl internal_6368180()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0x28]
        dec ebx
        js public_63681c4
        push esi
        push edi
        public_6368189 : nop
        mov edx, dword ptr ds : [ecx+4]
        fld dword ptr ds : [public_63a53d4]
        mov edi, dword ptr ds : [ecx+0x20]
        mov eax, ebx
        imul eax, dword ptr ds : [ecx+0x24]
        lea esi, ds:[edx+eax*4]
        mov edx, dword ptr ds : [ecx+0x28]
        dec edx
        js public_63681b8
        lea eax, ds:[edi+edx*4]
        sub esi, edi
        inc edx
        public_63681aa : nop
        fld dword ptr ds : [esi+eax]
        sub eax, 4
        dec edx
        fmul dword ptr ds : [eax+4]
        faddp 
        jne public_63681aa
        public_63681b8 : nop
        dec ebx
        mov eax, dword ptr ds : [ecx+0x1C]
        fstp dword ptr ds : [eax+ebx*4+4]
        jns public_6368189
        pop edi
        pop esi
        public_63681c4 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6368180)
    }
}

#undef public_6368189
#undef public_63681aa
#undef public_63681b8
#undef public_63681c4
