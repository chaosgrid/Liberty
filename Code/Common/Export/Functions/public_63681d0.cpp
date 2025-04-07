#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63681d0);

#define public_63681d9 _public_63681d9
#define public_63681fd _public_63681fd
#define public_636820d _public_636820d
#define public_6368225 _public_6368225

PROC_DECLARE(0x63681d0, internal_63681d0, public_63681d0);
extern "C" NAKED register_t __cdecl internal_63681d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x28]
        dec edx
        js public_6368225
        push ebx
        push esi
        push edi
        public_63681d9 : nop
        mov eax, dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [public_63a53d4]
        dec eax
        cmp eax, edx
        jle public_636820d
        mov esi, dword ptr ds : [ecx+0x1C]
        mov ebx, dword ptr ds : [ecx+8]
        lea edi, ds:[esi+eax*4]
        mov esi, dword ptr ds : [ecx+0x24]
        imul esi, edx
        add esi, eax
        lea esi, ds:[ebx+esi*4]
        sub eax, edx
        public_63681fd : nop
        fld dword ptr ds : [edi]
        sub esi, 4
        fmul dword ptr ds : [esi+4]
        sub edi, 4
        dec eax
        faddp 
        jne public_63681fd
        public_636820d : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        fsubr dword ptr ds : [eax+edx*4]
        lea eax, ds:[eax+edx*4]
        dec edx
        fst dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [eax+edx*4+4]
        jns public_63681d9
        pop edi
        pop esi
        pop ebx
        public_6368225 : nop
        ret 
        UNREACHABLE_TRAP(0x63681d0)
    }
}

#undef public_63681d9
#undef public_63681fd
#undef public_636820d
#undef public_6368225
