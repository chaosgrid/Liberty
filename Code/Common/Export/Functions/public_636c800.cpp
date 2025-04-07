#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_636c800);
CLANG_FORWARD_PROC_SYMBOL(public_636e0c0);

#define public_636c866 _public_636c866
#define public_636c916 _public_636c916

PROC_DECLARE(0x636c800, internal_636c800, public_636c800);
extern "C" NAKED register_t __cdecl internal_636c800()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_658b008]
        sub esp, 0x4C
        test ecx, ecx
        jne public_636c866
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+0xC]
        lea eax, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0xBF800000
        mov dword ptr ss : [esp+0x14], 2
        mov dword ptr ss : [esp+0x18], eax
        call public_636e0c0
        mov ecx, eax
        add esp, 4
        mov dword ptr ds : [public_658b008], ecx
        public_636c866 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        fld dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x58], edx
        fsub st, st(1)
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x5C]
        fsubr dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x58]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+8]
        fld st(1)
        fmul dword ptr ss : [esp+0x5C]
        fld st(1)
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fld st(2)
        fmul dword ptr ss : [esp+0x5C]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ss : [esp+0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        fstp st(0)
        test ah, 1
        je public_636c916
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x4C
        ret 
        public_636c916 : nop
        mov ecx, dword ptr ds : [ecx+8]
        push esi
        push edi
        shr ecx, 8
        shl ecx, 4
        push 0x10
        push ecx
        call public_6343fc0
        mov esi, dword ptr ds : [public_658b008]
        mov ecx, dword ptr ds : [esi+8]
        shr ecx, 8
        shl ecx, 4
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [ecx+eax+8], edx
        add esp, 8
        add ecx, eax
        mov dword ptr ss : [esp+0x60], edx
        fstp dword ptr ds : [ecx]
        pop edi
        fstp dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x5C], edx
        fld dword ptr ss : [ebp]
        mov dword ptr ds : [ecx+0x18], edx
        mov edx, dword ptr ss : [esp+0x64]
        fstp dword ptr ds : [ecx+0x10]
        fstp dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [edx+8]
        fld dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x64], esi
        fld dword ptr ds : [edx]
        mov edx, esi
        pop esi
        fstp dword ptr ds : [ecx+0x20]
        pop ebp
        fstp dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [ecx+0x28], edx
        pop ebx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x636c800)
    }
}

#undef public_636c866
#undef public_636c916
