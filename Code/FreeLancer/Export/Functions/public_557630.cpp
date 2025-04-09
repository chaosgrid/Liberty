#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557630);

#define public_5576ee _public_5576ee
#define public_5576fb _public_5576fb

PROC_DECLARE(0x557630, internal_557630, public_557630);
extern "C" NAKED register_t __cdecl internal_557630()
{
    __asm
    {
        xor eax, eax
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x68], eax
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ds : [ecx+0x64], eax
        mov dword ptr ds : [ecx+0x60], eax
        mov dword ptr ds : [ecx+0x58], eax
        mov dword ptr ds : [ecx+0x54], eax
        mov dword ptr ds : [ecx+0x50], eax
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edx, 0x3F800000
        mov dword ptr ds : [ecx+0x6C], edx
        mov dword ptr ds : [ecx+0x5C], edx
        mov dword ptr ds : [ecx+0x4C], edx
        mov dword ptr ds : [ecx+0x78], eax
        mov dword ptr ds : [ecx+0x74], eax
        mov dword ptr ds : [ecx+0x70], eax
        mov ebx, dword ptr ds : [esi]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [edi]
        lea esi, ds:[ecx+0xC]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ebx
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edi
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+0x34], esi
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+0x38], esi
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+0x48], eax
        mov dword ptr ds : [ecx+0x44], eax
        mov dword ptr ds : [ecx+0x30], eax
        fnstsw ax
        pop edi
        test ah, 0x41
        mov dword ptr ds : [ecx+0x3C], esi
        pop esi
        mov dword ptr ds : [ecx+0x40], edx
        pop ebx
        jne public_5576fb
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0xC]
        fst dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_5576ee
        fld dword ptr ss : [esp+0xC]
        mov eax, ecx
        fxch 
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0x40]
        fstp st(0)
        ret 0x1C
        public_5576ee : nop
        fld dword ptr ss : [esp+0x14]
        fxch 
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0x40]
        fstp st(0)
        public_5576fb : nop
        mov eax, ecx
        ret 0x1C
        UNREACHABLE_TRAP(0x557630)
    }
}

#undef public_5576ee
#undef public_5576fb
