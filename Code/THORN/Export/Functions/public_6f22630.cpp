#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22030);
CLANG_FORWARD_PROC_SYMBOL(public_6f222d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22630);

#define public_6f22657 _public_6f22657
#define public_6f22706 _public_6f22706
#define public_6f22710 _public_6f22710
#define public_6f22721 _public_6f22721

PROC_DECLARE(0x6f22630, internal_6f22630, public_6f22630);
extern "C" NAKED register_t __cdecl internal_6f22630()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+0x54]
        cmp ebx, dword ptr ds : [esi+0x58]
        push edi
        mov dword ptr ds : [esi+4], 0
        mov ebp, 1
        jae public_6f22706
        lea edi, ds:[ebx+ebx*2]
        shl edi, 2
        public_6f22657 : nop
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ds:[edi+eax-0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x3C], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x40], ecx
        mov edx, dword ptr ds : [edi+eax]
        mov dword ptr ss : [esp+0x2C], edx
        mov ecx, dword ptr ds : [edi+eax+4]
        mov dword ptr ss : [esp+0x30], ecx
        mov edx, dword ptr ds : [edi+eax+8]
        mov dword ptr ss : [esp+0x34], edx
        lea ecx, ds:[edi+eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x24], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x28], ecx
        lea edx, ds:[edi+eax+0x18]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x24], edx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0
        call public_6f22030
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x38]
        inc ebp
        inc ebx
        fst dword ptr ds : [esi+4]
        add edi, 0xC
        fstp dword ptr ds : [eax+ebx*4]
        mov eax, dword ptr ds : [esi+0x58]
        cmp ebx, eax
        jb public_6f22657
        public_6f22706 : nop
        mov edi, 1
        cmp ebp, edi
        jbe public_6f22721
        nop 
        public_6f22710 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push edi
        mov ecx, esi
        call public_6f222d0
        inc edi
        cmp edi, ebp
        jb public_6f22710
        public_6f22721 : nop
        mov edx, dword ptr ds : [esi+0x38]
        xor eax, eax
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [esi+0x38]
        pop edi
        mov dword ptr ds : [ecx+edx*4+4], eax
        fld dword ptr ds : [esi+4]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6f22630)
    }
}

#undef public_6f22657
#undef public_6f22706
#undef public_6f22710
#undef public_6f22721
