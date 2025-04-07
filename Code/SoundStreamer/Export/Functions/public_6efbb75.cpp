#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb437);
CLANG_FORWARD_PROC_SYMBOL(public_6efb49e);
CLANG_FORWARD_PROC_SYMBOL(public_6efb518);
CLANG_FORWARD_PROC_SYMBOL(public_6efbb75);

#define public_6efbbbc _public_6efbbbc
#define public_6efbbd2 _public_6efbbd2
#define public_6efbbee _public_6efbbee
#define public_6efbbf0 _public_6efbbf0
#define public_6efbc0b _public_6efbc0b
#define public_6efbc0f _public_6efbc0f
#define public_6efbc20 _public_6efbc20
#define public_6efbc23 _public_6efbc23

PROC_DECLARE(0x6efbb75, internal_6efbb75, public_6efbb75);
extern "C" NAKED register_t __cdecl internal_6efbb75()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [public_6f02640]
        jae public_6efbc0f
        mov eax, edi
        mov esi, edi
        sar eax, 5
        and esi, 0x1F
        lea ebx, ds : [eax*4+public_6f02540]
        shl esi, 3
        mov eax, dword ptr ds : [ebx]
        test byte ptr ds : [eax+esi+4], 1
        je public_6efbc0f
        push edi
        call public_6efb518
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_6efbbee
        cmp edi, 1
        je public_6efbbbc
        cmp edi, 2
        jne public_6efbbd2
        public_6efbbbc : nop
        push 2
        call public_6efb518
        push 1
        mov ebp, eax
        call public_6efb518
        pop ecx
        cmp eax, ebp
        pop ecx
        je public_6efbbee
        public_6efbbd2 : nop
        push edi
        call public_6efb518
        pop ecx
        push eax
        call dword ptr ds : [public_6efc044]
        test eax, eax
        jne public_6efbbee
        call dword ptr ds : [public_6efc0d0]
        mov ebp, eax
        jmp public_6efbbf0
        public_6efbbee : nop
        xor ebp, ebp
        public_6efbbf0 : nop
        push edi
        call public_6efb49e
        mov eax, dword ptr ds : [ebx]
        pop ecx
        and byte ptr ds : [eax+esi+4], 0
        test ebp, ebp
        je public_6efbc0b
        push ebp
        call public_6efb437
        pop ecx
        jmp public_6efbc20
        public_6efbc0b : nop
        xor eax, eax
        jmp public_6efbc23
        public_6efbc0f : nop
        and dword ptr ds : [public_6f010f4], 0
        mov dword ptr ds : [public_6f010f0], 9
        public_6efbc20 : nop
        or eax, 0xFFFFFFFF
        public_6efbc23 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6efbb75)
    }
}

#undef public_6efbbbc
#undef public_6efbbd2
#undef public_6efbbee
#undef public_6efbbf0
#undef public_6efbc0b
#undef public_6efbc0f
#undef public_6efbc20
#undef public_6efbc23
