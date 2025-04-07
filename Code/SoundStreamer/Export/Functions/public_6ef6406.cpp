#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6406);
CLANG_FORWARD_PROC_SYMBOL(public_6ef85b0);

#define public_6ef641a _public_6ef641a
#define public_6ef6437 _public_6ef6437
#define public_6ef6486 _public_6ef6486
#define public_6ef6496 _public_6ef6496
#define public_6ef64ab _public_6ef64ab
#define public_6ef64cd _public_6ef64cd
#define public_6ef64f6 _public_6ef64f6
#define public_6ef651a _public_6ef651a
#define public_6ef651e _public_6ef651e
#define public_6ef652c _public_6ef652c
#define public_6ef6543 _public_6ef6543
#define public_6ef6545 _public_6ef6545

PROC_DECLARE(0x6ef6406, internal_6ef6406, public_6ef6406);
extern "C" NAKED register_t __cdecl internal_6ef6406()
{
    __asm
    {
        cmp dword ptr ds : [public_6efe518], 0xFFFFFFFF
        push ebx
        push ebp
        push esi
        push edi
        jne public_6ef641a
        mov esi, offset public_6efe508
        jmp public_6ef6437
        public_6ef641a : nop
        push 0x2020
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc080]
        mov esi, eax
        test esi, esi
        je public_6ef6543
        public_6ef6437 : nop
        mov ebp, dword ptr ds : [public_6efc0b0]
        push 4
        push 0x2000
        push 0x400000
        push 0
        call ebp
        mov edi, eax
        test edi, edi
        je public_6ef652c
        push 4
        mov ebx, 0x10000
        push 0x1000
        push ebx
        push edi
        call ebp
        test eax, eax
        je public_6ef651e
        mov eax, offset public_6efe508
        cmp esi, eax
        jne public_6ef6496
        cmp dword ptr ds : [public_6efe508], 0
        jne public_6ef6486
        mov dword ptr ds : [public_6efe508], eax
        public_6ef6486 : nop
        cmp dword ptr ds : [public_6efe50c], 0
        jne public_6ef64ab
        mov dword ptr ds : [public_6efe50c], eax
        jmp public_6ef64ab
        public_6ef6496 : nop
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [public_6efe50c]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [public_6efe50c], esi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], esi
        public_6ef64ab : nop
        lea eax, ds:[edi+0x400000]
        lea ecx, ds:[esi+0x98]
        mov dword ptr ds : [esi+0x14], eax
        lea eax, ds:[esi+0x18]
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+8], eax
        xor ebp, ebp
        mov ecx, 0xF1
        public_6ef64cd : nop
        xor edx, edx
        cmp ebp, 0x10
        setge dl
        dec edx
        and edx, ecx
        dec edx
        inc ebp
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        add eax, 8
        cmp ebp, 0x400
        jl public_6ef64cd
        push ebx
        push 0
        push edi
        call public_6ef85b0
        add esp, 0xC
        public_6ef64f6 : nop
        mov eax, dword ptr ds : [esi+0x10]
        add eax, ebx
        cmp edi, eax
        jae public_6ef651a
        or byte ptr ds : [edi+0xF8], 0xFF
        lea eax, ds:[edi+8]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], 0xF0
        add edi, 0x1000
        jmp public_6ef64f6
        public_6ef651a : nop
        mov eax, esi
        jmp public_6ef6545
        public_6ef651e : nop
        push 0x8000
        push 0
        push edi
        call dword ptr ds : [public_6efc0ac]
        public_6ef652c : nop
        cmp esi, offset public_6efe508
        je public_6ef6543
        push esi
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc07c]
        public_6ef6543 : nop
        xor eax, eax
        public_6ef6545 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef6406)
    }
}

#undef public_6ef641a
#undef public_6ef6437
#undef public_6ef6486
#undef public_6ef6496
#undef public_6ef64ab
#undef public_6ef64cd
#undef public_6ef64f6
#undef public_6ef651a
#undef public_6ef651e
#undef public_6ef652c
#undef public_6ef6543
#undef public_6ef6545
