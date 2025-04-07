#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c520);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dad0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f200);

#define public_6f3dae3 _public_6f3dae3
#define public_6f3db11 _public_6f3db11
#define public_6f3db25 _public_6f3db25
#define public_6f3db31 _public_6f3db31
#define public_6f3db3a _public_6f3db3a
#define public_6f3db42 _public_6f3db42

PROC_DECLARE(0x6f3dad0, internal_6f3dad0, public_6f3dad0);
extern "C" NAKED register_t __cdecl internal_6f3dad0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, 0xFFFFFFFD
        push ebp
        mov ebp, ecx
        jbe public_6f3dae3
        call dword ptr ds : [public_6f5a01c]
        public_6f3dae3 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_6f3db11
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f3db11
        cmp cl, 0xFF
        je public_6f3db11
        cmp ebx, edx
        jne public_6f3db3a
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6f3db11 : nop
        cmp ebx, edx
        jne public_6f3db25
        push 1
        mov ecx, ebp
        call public_6f3c520
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6f3db25 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6f3db31
        cmp eax, ebx
        jae public_6f3db42
        public_6f3db31 : nop
        push 1
        mov ecx, ebp
        call public_6f3c520
        public_6f3db3a : nop
        mov ecx, ebp
        push ebx
        call public_6f3f200
        public_6f3db42 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        mov eax, ebp
        pop ebp
        mov byte ptr ds : [ebx+ecx], 0
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f3dad0)
    }
}

#undef public_6f3dae3
#undef public_6f3db11
#undef public_6f3db25
#undef public_6f3db31
#undef public_6f3db3a
#undef public_6f3db42
