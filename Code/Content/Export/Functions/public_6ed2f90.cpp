#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2f90);

#define public_6ed2fb1 _public_6ed2fb1
#define public_6ed2fb5 _public_6ed2fb5
#define public_6ed2fe6 _public_6ed2fe6
#define public_6ed3001 _public_6ed3001
#define public_6ed301f _public_6ed301f
#define public_6ed303d _public_6ed303d
#define public_6ed3052 _public_6ed3052
#define public_6ed3068 _public_6ed3068
#define public_6ed309f _public_6ed309f
#define public_6ed30ac _public_6ed30ac
#define public_6ed30c0 _public_6ed30c0
#define public_6ed30e0 _public_6ed30e0
#define public_6ed30f4 _public_6ed30f4
#define public_6ed3114 _public_6ed3114
#define public_6ed3131 _public_6ed3131
#define public_6ed3147 _public_6ed3147

PROC_DECLARE(0x6ed2f90, internal_6ed2f90, public_6ed2f90);
extern "C" NAKED register_t __cdecl internal_6ed2f90()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        cmp eax, edx
        mov eax, dword ptr ss : [esp+0x10]
        je public_6ed3147
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+0x34]
        add edx, 0x30
        jmp public_6ed2fb5
        public_6ed2fb1 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6ed2fb5 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, 0x3C
        sub edx, eax
        sub ebx, eax
        sub esi, eax
        lea ecx, ds:[edx-0x2C]
        sub ebp, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x20], esi
        jne public_6ed2fe6
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov byte ptr ss : [ebp-0x30], cl
        jmp public_6ed301f
        public_6ed2fe6 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ds:[edx-0x2C]
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6ed3001
        mov eax, 0x1F
        public_6ed3001 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ss:[ebp-0x30]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [eax+ebp-0x30], 0
        mov dword ptr ds : [ecx], eax
        public_6ed301f : nop
        mov eax, dword ptr ds : [edx-0xC]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ds : [edx-8]
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ds : [public_6fb3304]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx+4]
        mov ebx, eax
        cmp esi, ebx
        jae public_6ed303d
        mov ebx, esi
        public_6ed303d : nop
        lea ecx, ds:[edx-4]
        lea edi, ss:[ebp-8]
        cmp edi, ecx
        jne public_6ed30ac
        cmp dword ptr ss : [ebp], ebx
        jae public_6ed3052
        call dword ptr ds : [public_6fb32e4]
        public_6ed3052 : nop
        lea edi, ss:[ebp-8]
        mov ecx, edi
        call dword ptr ds : [public_6fb32e8]
        mov eax, dword ptr ss : [ebp]
        sub eax, ebx
        cmp eax, esi
        jae public_6ed3068
        mov esi, eax
        public_6ed3068 : nop
        test esi, esi
        jbe public_6ed309f
        mov edx, dword ptr ss : [ebp-4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_6fb3388]
        mov ebx, dword ptr ss : [ebp]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6ed309f
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb32ec]
        public_6ed309f : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb32e8]
        jmp public_6ed3131
        public_6ed30ac : nop
        test ebx, ebx
        jbe public_6ed30f4
        cmp ebx, eax
        jne public_6ed30f4
        mov edx, dword ptr ds : [edx]
        test edx, edx
        jne public_6ed30c0
        mov edx, dword ptr ds : [public_6fb32f4]
        public_6ed30c0 : nop
        cmp byte ptr ds : [edx-1], 0xFE
        jae public_6ed30f4
        push 1
        lea ecx, ss:[ebp-8]
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jne public_6ed30e0
        mov eax, dword ptr ds : [public_6fb32f4]
        public_6ed30e0 : nop
        mov dword ptr ss : [ebp-4], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+4], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6ed3131
        public_6ed30f4 : nop
        push 1
        push ebx
        lea ecx, ss:[ebp-8]
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6ed3131
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edx]
        test esi, esi
        jne public_6ed3114
        mov esi, dword ptr ds : [public_6fb32f4]
        public_6ed3114 : nop
        mov edi, dword ptr ss : [ebp-4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6ed3131 : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp dword ptr ss : [esp+0x1C], edx
        jne public_6ed2fb1
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6ed3147 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ed2f90)
    }
}

#undef public_6ed2fb1
#undef public_6ed2fb5
#undef public_6ed2fe6
#undef public_6ed3001
#undef public_6ed301f
#undef public_6ed303d
#undef public_6ed3052
#undef public_6ed3068
#undef public_6ed309f
#undef public_6ed30ac
#undef public_6ed30c0
#undef public_6ed30e0
#undef public_6ed30f4
#undef public_6ed3114
#undef public_6ed3131
#undef public_6ed3147
