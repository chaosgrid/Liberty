#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae00);
CLANG_FORWARD_PROC_SYMBOL(public_62b5e00);
CLANG_FORWARD_PROC_SYMBOL(public_62c2660);
CLANG_FORWARD_PROC_SYMBOL(public_62c2720);

#define public_629f766 _public_629f766
#define public_629f7a9 _public_629f7a9

PROC_DECLARE(0x629f6f0, internal_629f6f0, public_629f6f0);
extern "C" NAKED register_t __cdecl internal_629f6f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x24]
        call public_62c2660
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+0x83C], 0
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_629f7a9
        mov ecx, dword ptr ss : [esp+0x10]
        test dword ptr ds : [public_639e52c], ecx
        jne public_629f7a9
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, 0x357FFDFF
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_629f7a9
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+0xAC]
        test eax, eax
        je public_629f7a9
        test ecx, ecx
        je public_629f766
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_629f766
        mov dl, byte ptr ds : [ecx+0x1A9]
        test dl, dl
        jne public_629f766
        mov edi, 0x157F0000
        public_629f766 : nop
        mov edx, dword ptr ds : [esi+0x83C]
        push ebx
        mov ebx, dword ptr ds : [esi+0xC]
        not edx
        push ebp
        and edi, edx
        lea edx, ds:[esi+0x20]
        push edx
        push edi
        push eax
        lea ebp, ds:[ecx+0x2C]
        call public_62b5e00
        fsubr dword ptr ds : [public_639a1d0]
        push ecx
        lea ecx, ds:[esi+0x24]
        fmul dword ptr ds : [ebx+0x74]
        fstp dword ptr ss : [esp]
        push ebp
        call public_62c2720
        mov eax, dword ptr ds : [esi+0x83C]
        or eax, edi
        pop ebp
        mov dword ptr ds : [esi+0x83C], eax
        pop ebx
        public_629f7a9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        mov ecx, esi
        call public_629ae00
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x629f6f0)
    }
}

#undef public_629f766
#undef public_629f7a9
