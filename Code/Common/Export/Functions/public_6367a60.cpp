#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367a60);

#define public_6367aa4 _public_6367aa4
#define public_6367ad9 _public_6367ad9
#define public_6367b03 _public_6367b03
#define public_6367b38 _public_6367b38

PROC_DECLARE(0x6367a60, internal_6367a60, public_6367a60);
extern "C" NAKED register_t __cdecl internal_6367a60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push ebp
        push esi
        push edi
        mov edi, eax
        imul eax, dword ptr ss : [esp+0x18]
        imul edi, edx
        mov ebp, eax
        lea eax, ds:[edi+edx]
        lea eax, ds:[ebx+eax*4]
        mov esi, eax
        and esi, 0xFFFFFFF0
        sub eax, esi
        sar eax, 2
        sub eax, edx
        add eax, dword ptr ds : [ecx+0x28]
        add edx, ebp
        lea edx, ds:[ebx+edx*4]
        and edx, 0xFFFFFFF0
        test eax, eax
        jle public_6367ad9
        add eax, 3
        add esi, 8
        shr eax, 2
        public_6367aa4 : nop
        mov ebx, dword ptr ds : [edx]
        fld dword ptr ds : [esi-8]
        mov dword ptr ds : [esi-8], ebx
        fstp dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        fld dword ptr ds : [esi-4]
        mov dword ptr ds : [esi-4], ebx
        fstp dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [edx+8]
        fld dword ptr ds : [esi]
        mov dword ptr ds : [esi], ebx
        fstp dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [edx+0xC]
        fld dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], ebx
        fstp dword ptr ds : [edx+0xC]
        add esi, 0x10
        add edx, 0x10
        dec eax
        jne public_6367aa4
        public_6367ad9 : nop
        mov esi, dword ptr ds : [ecx+4]
        lea eax, ds:[esi+edi*4]
        mov edi, dword ptr ds : [ecx+0x28]
        mov edx, eax
        and edx, 0xFFFFFFF0
        sub eax, edx
        sar eax, 2
        add eax, edi
        mov edi, eax
        lea eax, ds:[esi+ebp*4]
        and eax, 0xFFFFFFF0
        test edi, edi
        jle public_6367b38
        lea ecx, ds:[edx+8]
        lea edx, ds:[edi+3]
        shr edx, 2
        public_6367b03 : nop
        mov esi, dword ptr ds : [eax]
        fld dword ptr ds : [ecx-8]
        mov dword ptr ds : [ecx-8], esi
        fstp dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx-4]
        mov dword ptr ds : [ecx-4], esi
        fstp dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx]
        mov dword ptr ds : [ecx], esi
        fstp dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], esi
        fstp dword ptr ds : [eax+0xC]
        add ecx, 0x10
        add eax, 0x10
        dec edx
        jne public_6367b03
        public_6367b38 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6367a60)
    }
}

#undef public_6367aa4
#undef public_6367ad9
#undef public_6367b03
#undef public_6367b38
