#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d430);

#define public_6ec9ec8 _public_6ec9ec8
#define public_6ec9eda _public_6ec9eda
#define public_6ec9eed _public_6ec9eed
#define public_6ec9eff _public_6ec9eff
#define public_6ec9f1e _public_6ec9f1e
#define public_6ec9f41 _public_6ec9f41
#define public_6ec9f59 _public_6ec9f59
#define public_6ec9f76 _public_6ec9f76
#define public_6ec9f84 _public_6ec9f84
#define public_6ec9fc4 _public_6ec9fc4
#define public_6ec9ffa _public_6ec9ffa
#define public_6eca012 _public_6eca012
#define public_6eca039 _public_6eca039

PROC_DECLARE(0x6ec9ea0, internal_6ec9ea0, public_6ec9ea0);
extern "C" NAKED register_t __cdecl internal_6ec9ea0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        push edi
        mov edi, ecx
        xor ebx, ebx
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        call esi
        cmp eax, ebx
        jne public_6ec9ec8
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ds : [edi+0x10], bl
        jmp public_6ec9eda
        public_6ec9ec8 : nop
        push eax
        lea eax, ds:[edi+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0xC], eax
        public_6ec9eda : nop
        push 1
        mov ecx, ebp
        call esi
        cmp eax, ebx
        jne public_6ec9eed
        mov dword ptr ds : [edi+0x40], ebx
        mov byte ptr ds : [edi+0x44], 0
        jmp public_6ec9eff
        public_6ec9eed : nop
        push eax
        lea ecx, ds:[edi+0x44]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x40], eax
        public_6ec9eff : nop
        push 2
        mov ecx, ebp
        call esi
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebp
        push 2
        je public_6ec9f1e
        call dword ptr ds : [public_6fb3044]
        jmp public_6ec9f84
        public_6ec9f1e : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6ec9f41
        mov dword ptr ds : [edx], eax
        mov byte ptr ds : [ebx], al
        jmp public_6ec9f76
        public_6ec9f41 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ec9f59
        mov eax, 0x3F
        public_6ec9f59 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+edx+4], 0
        mov dword ptr ds : [edx], eax
        public_6ec9f76 : nop
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        mov esi, dword ptr ds : [public_6fb3048]
        public_6ec9f84 : nop
        fst dword ptr ds : [edi+0x74]
        push 3
        mov ecx, ebp
        fstp dword ptr ds : [edi+0x78]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6eca039
        push 3
        mov ecx, ebp
        call esi
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebp
        push 3
        je public_6ec9fc4
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ec9fc4 : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebp, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ss : [ebp], 0
        jne public_6ec9ffa
        mov dword ptr ds : [edx], eax
        mov byte ptr ss : [ebp], al
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        fstp dword ptr ds : [edi+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ec9ffa : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6eca012
        mov eax, 0x3F
        public_6eca012 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        fstp dword ptr ds : [edi+0x78]
        public_6eca039 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ec9ea0)
    }
}

#undef public_6ec9ec8
#undef public_6ec9eda
#undef public_6ec9eed
#undef public_6ec9eff
#undef public_6ec9f1e
#undef public_6ec9f41
#undef public_6ec9f59
#undef public_6ec9f76
#undef public_6ec9f84
#undef public_6ec9fc4
#undef public_6ec9ffa
#undef public_6eca012
#undef public_6eca039
