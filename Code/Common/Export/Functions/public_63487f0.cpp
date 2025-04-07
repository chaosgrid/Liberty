#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63487f0);
CLANG_FORWARD_PROC_SYMBOL(public_6348860);
CLANG_FORWARD_PROC_SYMBOL(public_63488a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348900);
CLANG_FORWARD_PROC_SYMBOL(public_63492c0);

#define public_6348804 _public_6348804
#define public_6348816 _public_6348816
#define public_6348833 _public_6348833
#define public_6348843 _public_6348843
#define public_634884d _public_634884d

PROC_DECLARE(0x63487f0, internal_63487f0, public_63487f0);
extern "C" NAKED register_t __cdecl internal_63487f0()
{
    __asm
    {
        push ecx
        push ebx
        xor eax, eax
        mov ebx, ecx
        mov ax, word ptr ds : [ebx+0xE]
        dec eax
        mov dword ptr ss : [esp+4], eax
        js public_634884d
        push ebp
        push esi
        push edi
        public_6348804 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov ebp, dword ptr ds : [ecx+eax*4]
        xor edi, edi
        mov di, word ptr ss : [ebp+0x152]
        dec edi
        js public_6348843
        public_6348816 : nop
        mov edx, dword ptr ss : [ebp+0x154]
        mov esi, dword ptr ds : [edx+edi*4]
        push esi
        mov ecx, ebx
        call public_6348860
        test eax, eax
        jne public_6348833
        push esi
        mov ecx, ebx
        call public_6348900
        public_6348833 : nop
        push ebp
        push esi
        mov ecx, ebx
        call public_63488a0
        dec edi
        jns public_6348816
        mov eax, dword ptr ss : [esp+0x10]
        public_6348843 : nop
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jns public_6348804
        pop edi
        pop esi
        pop ebp
        public_634884d : nop
        mov ecx, ebx
        call public_63492c0
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63487f0)
    }
}

#undef public_6348804
#undef public_6348816
#undef public_6348833
#undef public_6348843
#undef public_634884d
