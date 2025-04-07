#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);

#define public_6ac8b42 _public_6ac8b42
#define public_6ac8b49 _public_6ac8b49
#define public_6ac8b76 _public_6ac8b76
#define public_6ac8b81 _public_6ac8b81
#define public_6ac8b83 _public_6ac8b83
#define public_6ac8b96 _public_6ac8b96
#define public_6ac8bae _public_6ac8bae
#define public_6ac8bbb _public_6ac8bbb
#define public_6ac8bbd _public_6ac8bbd
#define public_6ac8bc9 _public_6ac8bc9

PROC_DECLARE(0x6ac8b30, internal_6ac8b30, public_6ac8b30);
extern "C" NAKED register_t __cdecl internal_6ac8b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        test eax, eax
        mov esi, eax
        jl public_6ac8b42
        shr esi, 5
        jmp public_6ac8b49
        public_6ac8b42 : nop
        neg esi
        shr esi, 5
        neg esi
        public_6ac8b49 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, esi
        shl ecx, 5
        push edi
        sub eax, ecx
        push ebx
        push eax
        push edx
        call public_6ac8bd0
        test esi, esi
        jge public_6ac8b96
        neg esi
        xor eax, eax
        test edi, edi
        je public_6ac8bc9
        mov ecx, ebx
        lea ebx, ds:[ebx+esi*4]
        public_6ac8b76 : nop
        lea edx, ds:[eax+esi]
        cmp edx, edi
        jae public_6ac8b81
        mov edx, dword ptr ds : [ebx]
        jmp public_6ac8b83
        public_6ac8b81 : nop
        xor edx, edx
        public_6ac8b83 : nop
        mov dword ptr ds : [ecx], edx
        inc eax
        add ebx, 4
        add ecx, 4
        cmp eax, edi
        jne public_6ac8b76
        pop edi
        pop esi
        pop ebx
        ret 0x10
        public_6ac8b96 : nop
        jle public_6ac8bc9
        lea edx, ds:[edi-1]
        cmp edx, 0xFFFFFFFF
        je public_6ac8bc9
        lea ecx, ds:[edx*4]
        lea edi, ds:[esi*4]
        public_6ac8bae : nop
        cmp edx, esi
        jb public_6ac8bbb
        mov eax, ecx
        sub eax, edi
        mov eax, dword ptr ds : [eax+ebx]
        jmp public_6ac8bbd
        public_6ac8bbb : nop
        xor eax, eax
        public_6ac8bbd : nop
        mov dword ptr ds : [ecx+ebx], eax
        dec edx
        sub ecx, 4
        cmp edx, 0xFFFFFFFF
        jne public_6ac8bae
        public_6ac8bc9 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac8b30)
    }
}

#undef public_6ac8b42
#undef public_6ac8b49
#undef public_6ac8b76
#undef public_6ac8b81
#undef public_6ac8b83
#undef public_6ac8b96
#undef public_6ac8bae
#undef public_6ac8bbb
#undef public_6ac8bbd
#undef public_6ac8bc9
