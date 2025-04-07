#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9b54);
CLANG_FORWARD_PROC_SYMBOL(public_6efb437);
CLANG_FORWARD_PROC_SYMBOL(public_6efb518);

#define public_6ef9b98 _public_6ef9b98
#define public_6ef9bb8 _public_6ef9bb8
#define public_6ef9bba _public_6ef9bba
#define public_6ef9bc7 _public_6ef9bc7
#define public_6ef9bd6 _public_6ef9bd6
#define public_6ef9be7 _public_6ef9be7
#define public_6ef9bea _public_6ef9bea

PROC_DECLARE(0x6ef9b54, internal_6ef9b54, public_6ef9b54);
extern "C" NAKED register_t __cdecl internal_6ef9b54()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        cmp eax, dword ptr ds : [public_6f02640]
        push esi
        push edi
        jae public_6ef9bd6
        mov ecx, eax
        mov esi, eax
        sar ecx, 5
        and esi, 0x1F
        lea edi, ds : [ecx*4+public_6f02540]
        shl esi, 3
        mov ecx, dword ptr ds : [edi]
        test byte ptr ds : [ecx+esi+4], 1
        je public_6ef9bd6
        push eax
        call public_6efb518
        cmp eax, 0xFFFFFFFF
        pop ecx
        jne public_6ef9b98
        mov dword ptr ds : [public_6f010f0], 9
        jmp public_6ef9be7
        public_6ef9b98 : nop
        push dword ptr ss : [esp+0x18]
        push 0
        push dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [public_6efc090]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jne public_6ef9bb8
        call dword ptr ds : [public_6efc0d0]
        jmp public_6ef9bba
        public_6ef9bb8 : nop
        xor eax, eax
        public_6ef9bba : nop
        test eax, eax
        je public_6ef9bc7
        push eax
        call public_6efb437
        pop ecx
        jmp public_6ef9be7
        public_6ef9bc7 : nop
        mov eax, dword ptr ds : [edi]
        and byte ptr ds : [eax+esi+4], 0xFD
        lea eax, ds:[eax+esi+4]
        mov eax, ebx
        jmp public_6ef9bea
        public_6ef9bd6 : nop
        and dword ptr ds : [public_6f010f4], 0
        mov dword ptr ds : [public_6f010f0], 9
        public_6ef9be7 : nop
        or eax, 0xFFFFFFFF
        public_6ef9bea : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef9b54)
    }
}

#undef public_6ef9b98
#undef public_6ef9bb8
#undef public_6ef9bba
#undef public_6ef9bc7
#undef public_6ef9bd6
#undef public_6ef9be7
#undef public_6ef9bea
