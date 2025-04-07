#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daf879 _public_6daf879
#define public_6daf89d _public_6daf89d
#define public_6daf8b0 _public_6daf8b0
#define public_6daf8d3 _public_6daf8d3
#define public_6daf8e6 _public_6daf8e6
#define public_6daf929 _public_6daf929
#define public_6daf95a _public_6daf95a

PROC_DECLARE(0x6daf830, internal_6daf830, public_6daf830);
extern "C" NAKED register_t __cdecl internal_6daf830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6daf879
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daf879 : nop
        xor eax, eax
        or ecx, 0xFFFFFFFF
        lea edx, ss:[ebp+0x20]
        mov edi, edx
        repne scasb
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        not ecx
        add eax, 2
        dec ecx
        cmp eax, edi
        mov dword ptr ds : [ebx], eax
        jbe public_6daf89d
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6daf89d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6daf8b0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daf8b0 : nop
        mov eax, dword ptr ds : [esi]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, cx
        mov ecx, dword ptr ds : [ebx]
        add ecx, eax
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6daf8d3
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6daf8d3 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6daf8e6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daf8e6 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, eax
        mov esi, edx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        add ecx, eax
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6daf929
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daf929 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6daf95a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6daf95a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6daf830)
    }
}

#undef public_6daf879
#undef public_6daf89d
#undef public_6daf8b0
#undef public_6daf8d3
#undef public_6daf8e6
#undef public_6daf929
#undef public_6daf95a
