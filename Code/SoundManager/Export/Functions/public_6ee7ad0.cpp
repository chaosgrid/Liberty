#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee76d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7db0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8080);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee7b05 _public_6ee7b05
#define public_6ee7b39 _public_6ee7b39
#define public_6ee7b42 _public_6ee7b42
#define public_6ee7b49 _public_6ee7b49
#define public_6ee7b75 _public_6ee7b75
#define public_6ee7b80 _public_6ee7b80
#define public_6ee7ba0 _public_6ee7ba0

PROC_DECLARE(0x6ee7ad0, internal_6ee7ad0, public_6ee7ad0);
extern "C" NAKED register_t __cdecl internal_6ee7ad0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6ee7b75
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ee7b75
        cmp ebx, eax
        jne public_6ee7b75
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ee7b49
        public_6ee7b05 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ee7db0
        cmp dword ptr ds : [public_6eeaf38], 0x7FFFFFFF
        mov edi, dword ptr ds : [edi]
        jge public_6ee7b39
        mov ecx, dword ptr ds : [public_6eeaf2c]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [public_6eeaf38]
        inc eax
        mov dword ptr ds : [public_6eeaf2c], ebx
        mov dword ptr ds : [public_6eeaf38], eax
        jmp public_6ee7b42
        public_6ee7b39 : nop
        push ebx
        call public_6ee8ddc
        add esp, 4
        public_6ee7b42 : nop
        cmp edi, dword ptr ds : [esi+8]
        mov ebx, edi
        jne public_6ee7b05
        public_6ee7b49 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 0xC
        public_6ee7b75 : nop
        cmp ecx, ebx
        je public_6ee7ba0
        lea esp, ss:[esp]
        public_6ee7b80 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ee8080
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6ee76d0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ee7b80
        public_6ee7ba0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ee7ad0)
    }
}

#undef public_6ee7b05
#undef public_6ee7b39
#undef public_6ee7b42
#undef public_6ee7b49
#undef public_6ee7b75
#undef public_6ee7b80
#undef public_6ee7ba0
