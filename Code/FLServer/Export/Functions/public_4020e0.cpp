#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4020e0);

#define public_402107 _public_402107
#define public_402137 _public_402137
#define public_40214e _public_40214e
#define public_40215a _public_40215a
#define public_402164 _public_402164
#define public_40216d _public_40216d

PROC_DECLARE(0x4020e0, internal_4020e0, public_4020e0);
extern "C" NAKED register_t __cdecl internal_4020e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea ebp, ds:[ecx+0x738]
        or ecx, 0xFFFFFFFF
        push edi
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_402107
        call dword ptr ds : [public_41b8a0]
        public_402107 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_402137
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_402137
        cmp cl, 0xFF
        je public_402137
        cmp ebx, edx
        jne public_402164
        pop edi
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_402137 : nop
        cmp ebx, edx
        jne public_40214e
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_41b870]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_40214e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_40215a
        cmp eax, ebx
        jae public_40216d
        public_40215a : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_41b870]
        public_402164 : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_41b89c]
        public_40216d : nop
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
        pop ebp
        mov byte ptr ds : [ebx+ecx], 0
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4020e0)
    }
}

#undef public_402107
#undef public_402137
#undef public_40214e
#undef public_40215a
#undef public_402164
#undef public_40216d
