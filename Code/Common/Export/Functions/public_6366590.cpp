#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366590);

#define public_63665a3 _public_63665a3
#define public_63665d0 _public_63665d0
#define public_63665e9 _public_63665e9
#define public_6366606 _public_6366606

PROC_DECLARE(0x6366590, internal_6366590, public_6366590);
extern "C" NAKED register_t __cdecl internal_6366590()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ds : [ecx+0x44]
        cmp edx, dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [esp], edx
        jge public_6366606
        push ebx
        push ebp
        push esi
        push edi
        public_63665a3 : nop
        mov edi, dword ptr ds : [ecx+0x34]
        fld dword ptr ds : [public_63a53d4]
        mov ebx, dword ptr ds : [edi+edx*4]
        mov eax, dword ptr ds : [ecx+0x40]
        mov esi, dword ptr ds : [ecx+0xBC]
        imul eax, ebx
        lea esi, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ecx+0x44]
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebx
        jle public_63665e9
        mov ebp, dword ptr ds : [ecx+0x20]
        mov edx, edi
        mov ebx, eax
        public_63665d0 : nop
        mov eax, dword ptr ds : [edx]
        fld dword ptr ss : [ebp+eax*4]
        add edx, 4
        dec ebx
        fmul dword ptr ds : [esi+eax*4]
        faddp 
        jne public_63665d0
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        public_63665e9 : nop
        mov eax, dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [edi+eax*4]
        fadd dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ds : [ecx+0x28]
        inc edx
        mov dword ptr ss : [esp+0x10], edx
        fstp dword ptr ds : [eax+ebx*4]
        cmp edx, dword ptr ds : [ecx+0x3C]
        jl public_63665a3
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6366606 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6366590)
    }
}

#undef public_63665a3
#undef public_63665d0
#undef public_63665e9
#undef public_6366606
