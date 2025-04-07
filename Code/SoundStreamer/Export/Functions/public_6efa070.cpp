#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4d92);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4e26);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);

#define public_6efa0a3 _public_6efa0a3
#define public_6efa0f7 _public_6efa0f7
#define public_6efa102 _public_6efa102
#define public_6efa109 _public_6efa109
#define public_6efa110 _public_6efa110
#define public_6efa125 _public_6efa125

PROC_DECLARE(0x6efa070, internal_6efa070, public_6efa070);
extern "C" NAKED register_t __cdecl internal_6efa070()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push ebp
        cld 
        mov ebx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        test dword ptr ds : [eax+4], 6
        jne public_6efa110
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp-8]
        mov dword ptr ds : [ebx-4], eax
        mov esi, dword ptr ds : [ebx+0xC]
        mov edi, dword ptr ds : [ebx+8]
        public_6efa0a3 : nop
        cmp esi, 0xFFFFFFFF
        je public_6efa109
        lea ecx, ds:[esi+esi*2]
        cmp dword ptr ds : [edi+ecx*4+4], 0
        je public_6efa0f7
        push esi
        push ebp
        lea ebp, ds:[ebx+0x10]
        call dword ptr ds : [edi+ecx*4+4]
        pop ebp
        pop esi
        mov ebx, dword ptr ss : [ebp+0xC]
        or eax, eax
        je public_6efa0f7
        js public_6efa102
        mov edi, dword ptr ds : [ebx+8]
        push ebx
        call public_6ef4d50
        add esp, 4
        lea ebp, ds:[ebx+0x10]
        push esi
        push ebx
        call public_6ef4d92
        add esp, 8
        lea ecx, ds:[esi+esi*2]
        push 1
        mov eax, dword ptr ds : [edi+ecx*4+8]
        call public_6ef4e26
        mov eax, dword ptr ds : [edi+ecx*4]
        mov dword ptr ds : [ebx+0xC], eax
        call dword ptr ds : [edi+ecx*4+8]
        public_6efa0f7 : nop
        mov edi, dword ptr ds : [ebx+8]
        lea ecx, ds:[esi+esi*2]
        mov esi, dword ptr ds : [edi+ecx*4]
        jmp public_6efa0a3
        public_6efa102 : nop
        mov eax, 0
        jmp public_6efa125
        public_6efa109 : nop
        mov eax, 1
        jmp public_6efa125
        public_6efa110 : nop
        push ebp
        lea ebp, ds:[ebx+0x10]
        push 0xFFFFFFFF
        push ebx
        call public_6ef4d92
        add esp, 8
        pop ebp
        mov eax, 1
        public_6efa125 : nop
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6efa070)
    }
}

#undef public_6efa0a3
#undef public_6efa0f7
#undef public_6efa102
#undef public_6efa109
#undef public_6efa110
#undef public_6efa125
