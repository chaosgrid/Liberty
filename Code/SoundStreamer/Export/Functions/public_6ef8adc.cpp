#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5310);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8adc);

#define public_6ef8b0b _public_6ef8b0b
#define public_6ef8b2a _public_6ef8b2a
#define public_6ef8b33 _public_6ef8b33
#define public_6ef8b43 _public_6ef8b43
#define public_6ef8b4a _public_6ef8b4a
#define public_6ef8b58 _public_6ef8b58
#define public_6ef8ba5 _public_6ef8ba5
#define public_6ef8ba9 _public_6ef8ba9
#define public_6ef8bb4 _public_6ef8bb4
#define public_6ef8bb9 _public_6ef8bb9
#define public_6ef8bc9 _public_6ef8bc9
#define public_6ef8bcf _public_6ef8bcf
#define public_6ef8bd9 _public_6ef8bd9
#define public_6ef8bef _public_6ef8bef
#define public_6ef8bfa _public_6ef8bfa
#define public_6ef8c05 _public_6ef8c05
#define public_6ef8c07 _public_6ef8c07

PROC_DECLARE(0x6ef8adc, internal_6ef8adc, public_6ef8adc);
extern "C" NAKED register_t __cdecl internal_6ef8adc()
{
    __asm
    {
        push ecx
        push ecx
        mov eax, dword ptr ds : [public_6f01240]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6efc0ec]
        push esi
        push edi
        xor ebx, ebx
        xor esi, esi
        xor edi, edi
        cmp eax, ebx
        jne public_6ef8b2a
        call ebp
        mov esi, eax
        cmp esi, ebx
        je public_6ef8b0b
        mov dword ptr ds : [public_6f01240], 1
        jmp public_6ef8b33
        public_6ef8b0b : nop
        call dword ptr ds : [public_6efc0e8]
        mov edi, eax
        cmp edi, ebx
        je public_6ef8c05
        mov dword ptr ds : [public_6f01240], 2
        jmp public_6ef8bb9
        public_6ef8b2a : nop
        cmp eax, 1
        jne public_6ef8bb4
        public_6ef8b33 : nop
        cmp esi, ebx
        jne public_6ef8b43
        call ebp
        mov esi, eax
        cmp esi, ebx
        je public_6ef8c05
        public_6ef8b43 : nop
        cmp word ptr ds : [esi], bx
        mov eax, esi
        je public_6ef8b58
        public_6ef8b4a : nop
        inc eax
        inc eax
        cmp word ptr ds : [eax], bx
        jne public_6ef8b4a
        inc eax
        inc eax
        cmp word ptr ds : [eax], bx
        jne public_6ef8b4a
        public_6ef8b58 : nop
        sub eax, esi
        mov edi, dword ptr ds : [public_6efc0e4]
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
        je public_6ef8ba9
        push ebp
        call public_6ef45cb
        cmp eax, ebx
        pop ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ef8ba9
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
        jne public_6ef8ba5
        push dword ptr ss : [esp+0x10]
        call public_6ef4512
        pop ecx
        mov dword ptr ss : [esp+0x10], ebx
        public_6ef8ba5 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6ef8ba9 : nop
        push esi
        call dword ptr ds : [public_6efc0e0]
        mov eax, ebx
        jmp public_6ef8c07
        public_6ef8bb4 : nop
        cmp eax, 2
        jne public_6ef8c05
        public_6ef8bb9 : nop
        cmp edi, ebx
        jne public_6ef8bc9
        call dword ptr ds : [public_6efc0e8]
        mov edi, eax
        cmp edi, ebx
        je public_6ef8c05
        public_6ef8bc9 : nop
        cmp byte ptr ds : [edi], bl
        mov eax, edi
        je public_6ef8bd9
        public_6ef8bcf : nop
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_6ef8bcf
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_6ef8bcf
        public_6ef8bd9 : nop
        sub eax, edi
        inc eax
        mov ebp, eax
        push ebp
        call public_6ef45cb
        mov esi, eax
        pop ecx
        cmp esi, ebx
        jne public_6ef8bef
        xor esi, esi
        jmp public_6ef8bfa
        public_6ef8bef : nop
        push ebp
        push edi
        push esi
        call public_6ef5310
        add esp, 0xC
        public_6ef8bfa : nop
        push edi
        call dword ptr ds : [public_6efc0dc]
        mov eax, esi
        jmp public_6ef8c07
        public_6ef8c05 : nop
        xor eax, eax
        public_6ef8c07 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef8adc)
    }
}

#undef public_6ef8b0b
#undef public_6ef8b2a
#undef public_6ef8b33
#undef public_6ef8b43
#undef public_6ef8b4a
#undef public_6ef8b58
#undef public_6ef8ba5
#undef public_6ef8ba9
#undef public_6ef8bb4
#undef public_6ef8bb9
#undef public_6ef8bc9
#undef public_6ef8bcf
#undef public_6ef8bd9
#undef public_6ef8bef
#undef public_6ef8bfa
#undef public_6ef8c05
#undef public_6ef8c07
