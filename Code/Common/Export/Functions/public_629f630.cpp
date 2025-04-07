#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f630);
CLANG_FORWARD_PROC_SYMBOL(public_62b5e00);
CLANG_FORWARD_PROC_SYMBOL(public_62c2720);

#define public_629f67b _public_629f67b
#define public_629f67f _public_629f67f
#define public_629f6c1 _public_629f6c1

PROC_DECLARE(0x629f630, internal_629f630, public_629f630);
extern "C" NAKED register_t __cdecl internal_629f630()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_629f6c1
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+0xAC]
        test eax, eax
        je public_629f6c1
        test ecx, ecx
        push ebx
        push ebp
        push edi
        je public_629f67b
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_629f67b
        mov dl, byte ptr ds : [ecx+0x1A9]
        test dl, dl
        jne public_629f67b
        mov edi, dword ptr ss : [esp+0x14]
        and edi, 0xDFFF0200
        jmp public_629f67f
        public_629f67b : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_629f67f : nop
        mov edx, dword ptr ds : [esi+0x83C]
        mov ebx, dword ptr ds : [esi+0xC]
        not edx
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
        pop edi
        pop ebp
        mov dword ptr ds : [esi+0x83C], eax
        pop ebx
        public_629f6c1 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629f630)
    }
}

#undef public_629f67b
#undef public_629f67f
#undef public_629f6c1
