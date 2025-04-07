#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367bb0);

#define public_6367c09 _public_6367c09
#define public_6367c56 _public_6367c56
#define public_6367c86 _public_6367c86
#define public_6367ce5 _public_6367ce5

PROC_DECLARE(0x6367bb0, internal_6367bb0, public_6367bb0);
extern "C" NAKED register_t __cdecl internal_6367bb0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+0x10]
        push ebx
        fchs 
        mov ebx, dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, eax
        imul eax, dword ptr ss : [esp+0x18]
        imul esi, ebx
        mov ebp, eax
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ds:[esi+ebx]
        lea edx, ds:[eax+edx*4+4]
        push edi
        mov edi, edx
        and edi, 0xFFFFFFF0
        sub edx, edi
        sar edx, 2
        sub edx, ebx
        mov dword ptr ss : [esp+0x10], ebp
        add ebp, ebx
        mov ebx, dword ptr ds : [ecx+0x28]
        lea eax, ds:[eax+ebp*4+4]
        lea edx, ds:[edx+ebx-1]
        and eax, 0xFFFFFFF0
        test edx, edx
        jle public_6367c56
        add edx, 3
        add edi, 8
        shr edx, 2
        public_6367c09 : nop
        fld dword ptr ss : [esp+0x18]
        add eax, 0x10
        fmul dword ptr ds : [edi-4]
        add edi, 0x10
        dec edx
        fadd dword ptr ds : [eax-0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi-0x10]
        fadd dword ptr ds : [eax-8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi-0xC]
        fadd dword ptr ds : [eax-4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi-0x18]
        mov dword ptr ds : [eax-8], ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax-4], ebx
        fadd dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0xC]
        jne public_6367c09
        public_6367c56 : nop
        mov eax, dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [ecx+0x28]
        lea edx, ds:[eax+esi*4]
        mov esi, edx
        and esi, 0xFFFFFFF0
        sub edx, esi
        sar edx, 2
        lea eax, ds:[eax+edi*4]
        add edx, ebx
        and eax, 0xFFFFFFF0
        test edx, edx
        jle public_6367ce5
        add edx, 3
        add esi, 8
        shr edx, 2
        public_6367c86 : nop
        fld dword ptr ss : [esp+0x18]
        add eax, 0x10
        fmul dword ptr ds : [esi-4]
        add esi, 0x10
        dec edx
        fadd dword ptr ds : [eax-0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi-0x10]
        fadd dword ptr ds : [eax-8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi-0xC]
        fadd dword ptr ds : [eax-4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi-0x18]
        mov dword ptr ds : [eax-8], edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax-4], edi
        fadd dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0x10]
        fstp dword ptr ds : [eax-0xC]
        jne public_6367c86
        mov eax, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        mov dword ptr ds : [eax+ebp*4], 0
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6367ce5 : nop
        mov ecx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+ebp*4], 0
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6367bb0)
    }
}

#undef public_6367c09
#undef public_6367c56
#undef public_6367c86
#undef public_6367ce5
