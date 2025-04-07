#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367d00);

#define public_6367d4c _public_6367d4c
#define public_6367d99 _public_6367d99

PROC_DECLARE(0x6367d00, internal_6367d00, public_6367d00);
extern "C" NAKED register_t __cdecl internal_6367d00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        fchs 
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [ecx+0x28]
        push esi
        mov esi, eax
        imul eax, ebx
        imul esi, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+eax*4]
        push edi
        lea edi, ds:[edx+esi*4]
        mov esi, eax
        and esi, 0xFFFFFFF0
        sub eax, esi
        sar eax, 2
        mov edx, edi
        add eax, ebp
        and edx, 0xFFFFFFF0
        test eax, eax
        jle public_6367d99
        sub esi, edx
        add eax, 3
        lea ecx, ds:[esi+edx+8]
        shr eax, 2
        public_6367d4c : nop
        fld dword ptr ss : [esp+0x18]
        add edx, 0x10
        fmul dword ptr ds : [ecx-4]
        add ecx, 0x10
        dec eax
        fadd dword ptr ds : [edx-0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx-0x10]
        fadd dword ptr ds : [edx-8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx-0xC]
        fadd dword ptr ds : [edx-4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx-0x18]
        mov dword ptr ds : [edx-8], esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx-4], esi
        fadd dword ptr ds : [edx-0x10]
        fstp dword ptr ds : [edx-0x10]
        fstp dword ptr ds : [edx-0xC]
        jne public_6367d4c
        public_6367d99 : nop
        mov dword ptr ds : [edi+ebx*4], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6367d00)
    }
}

#undef public_6367d4c
#undef public_6367d99
