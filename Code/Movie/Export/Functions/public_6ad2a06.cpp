#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2a06);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5560);

#define public_6ad2a35 _public_6ad2a35
#define public_6ad2a54 _public_6ad2a54
#define public_6ad2a5d _public_6ad2a5d
#define public_6ad2a6d _public_6ad2a6d
#define public_6ad2a74 _public_6ad2a74
#define public_6ad2a82 _public_6ad2a82
#define public_6ad2acf _public_6ad2acf
#define public_6ad2ad3 _public_6ad2ad3
#define public_6ad2ade _public_6ad2ade
#define public_6ad2ae3 _public_6ad2ae3
#define public_6ad2af3 _public_6ad2af3
#define public_6ad2af9 _public_6ad2af9
#define public_6ad2b03 _public_6ad2b03
#define public_6ad2b19 _public_6ad2b19
#define public_6ad2b24 _public_6ad2b24
#define public_6ad2b2f _public_6ad2b2f
#define public_6ad2b31 _public_6ad2b31

PROC_DECLARE(0x6ad2a06, internal_6ad2a06, public_6ad2a06);
extern "C" NAKED register_t __cdecl internal_6ad2a06()
{
    __asm
    {
        push ecx
        push ecx
        mov eax, dword ptr ds : [public_6ae1080]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6ada0d4]
        push esi
        push edi
        xor ebx, ebx
        xor esi, esi
        xor edi, edi
        cmp eax, ebx
        jne public_6ad2a54
        call ebp
        mov esi, eax
        cmp esi, ebx
        je public_6ad2a35
        mov dword ptr ds : [public_6ae1080], 1
        jmp public_6ad2a5d
        public_6ad2a35 : nop
        call dword ptr ds : [public_6ada0d8]
        mov edi, eax
        cmp edi, ebx
        je public_6ad2b2f
        mov dword ptr ds : [public_6ae1080], 2
        jmp public_6ad2ae3
        public_6ad2a54 : nop
        cmp eax, 1
        jne public_6ad2ade
        public_6ad2a5d : nop
        cmp esi, ebx
        jne public_6ad2a6d
        call ebp
        mov esi, eax
        cmp esi, ebx
        je public_6ad2b2f
        public_6ad2a6d : nop
        cmp word ptr ds : [esi], bx
        mov eax, esi
        je public_6ad2a82
        public_6ad2a74 : nop
        inc eax
        inc eax
        cmp word ptr ds : [eax], bx
        jne public_6ad2a74
        inc eax
        inc eax
        cmp word ptr ds : [eax], bx
        jne public_6ad2a74
        public_6ad2a82 : nop
        sub eax, esi
        mov edi, dword ptr ds : [public_6ada03c]
        sar eax, 1
        push ebx
        push ebx
        inc eax
        push ebx
        push ebx
        push eax
        push esi
        push ebx
        push ebx
        mov dword ptr ss : [esp+0x34], eax
        call edi
        mov ebp, eax
        cmp ebp, ebx
        je public_6ad2ad3
        push ebp
        call public_6ad0953
        cmp eax, ebx
        pop ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ad2ad3
        push ebx
        push ebx
        push ebp
        push eax
        push dword ptr ss : [esp+0x24]
        push esi
        push ebx
        push ebx
        call edi
        test eax, eax
        jne public_6ad2acf
        push dword ptr ss : [esp+0x10]
        call public_6ad07b3
        pop ecx
        mov dword ptr ss : [esp+0x10], ebx
        public_6ad2acf : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6ad2ad3 : nop
        push esi
        call dword ptr ds : [public_6ada0dc]
        mov eax, ebx
        jmp public_6ad2b31
        public_6ad2ade : nop
        cmp eax, 2
        jne public_6ad2b2f
        public_6ad2ae3 : nop
        cmp edi, ebx
        jne public_6ad2af3
        call dword ptr ds : [public_6ada0d8]
        mov edi, eax
        cmp edi, ebx
        je public_6ad2b2f
        public_6ad2af3 : nop
        cmp byte ptr ds : [edi], bl
        mov eax, edi
        je public_6ad2b03
        public_6ad2af9 : nop
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_6ad2af9
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_6ad2af9
        public_6ad2b03 : nop
        sub eax, edi
        inc eax
        mov ebp, eax
        push ebp
        call public_6ad0953
        mov esi, eax
        pop ecx
        cmp esi, ebx
        jne public_6ad2b19
        xor esi, esi
        jmp public_6ad2b24
        public_6ad2b19 : nop
        push ebp
        push edi
        push esi
        call public_6ad5560
        add esp, 0xC
        public_6ad2b24 : nop
        push edi
        call dword ptr ds : [public_6ada0e0]
        mov eax, esi
        jmp public_6ad2b31
        public_6ad2b2f : nop
        xor eax, eax
        public_6ad2b31 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad2a06)
    }
}

#undef public_6ad2a35
#undef public_6ad2a54
#undef public_6ad2a5d
#undef public_6ad2a6d
#undef public_6ad2a74
#undef public_6ad2a82
#undef public_6ad2acf
#undef public_6ad2ad3
#undef public_6ad2ade
#undef public_6ad2ae3
#undef public_6ad2af3
#undef public_6ad2af9
#undef public_6ad2b03
#undef public_6ad2b19
#undef public_6ad2b24
#undef public_6ad2b2f
#undef public_6ad2b31
