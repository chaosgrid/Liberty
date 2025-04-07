#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63660d0);

#define public_6366114 _public_6366114
#define public_6366161 _public_6366161

PROC_DECLARE(0x63660d0, internal_63660d0, public_63660d0);
extern "C" NAKED register_t __cdecl internal_63660d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        lea edx, ds:[eax+1]
        imul edx, ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        imul eax, ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        lea edx, ds:[edi+edx*4]
        mov esi, edx
        and esi, 0xFFFFFFF0
        add eax, ebx
        sub edx, esi
        lea eax, ds:[edi+eax*4]
        mov edi, dword ptr ds : [ecx+4]
        sar edx, 2
        add edx, edi
        sub edx, ebx
        and eax, 0xFFFFFFF0
        test edx, edx
        jle public_6366161
        add edx, 3
        add esi, 8
        shr edx, 2
        public_6366114 : nop
        fld dword ptr ss : [esp+0x1C]
        add eax, 0x10
        fmul dword ptr ds : [esi-4]
        add esi, 0x10
        dec edx
        fadd dword ptr ds : [eax-0xC]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi-0x10]
        fadd dword ptr ds : [eax-8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi-0xC]
        fadd dword ptr ds : [eax-4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi-0x18]
        mov dword ptr ds : [eax-8], edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax-4], edi
        fadd dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0xC]
        jne public_6366114
        public_6366161 : nop
        mov ecx, dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+ebx*4]
        pop edi
        pop esi
        fadd dword ptr ds : [ecx+ebp*4]
        fstp dword ptr ds : [ecx+ebp*4]
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x63660d0)
    }
}

#undef public_6366114
#undef public_6366161
