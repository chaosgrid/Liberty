#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3790);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3960);

#define public_6ef37b2 _public_6ef37b2
#define public_6ef37e0 _public_6ef37e0
#define public_6ef37ec _public_6ef37ec
#define public_6ef3805 _public_6ef3805
#define public_6ef380b _public_6ef380b
#define public_6ef3810 _public_6ef3810
#define public_6ef3820 _public_6ef3820
#define public_6ef383b _public_6ef383b
#define public_6ef3848 _public_6ef3848
#define public_6ef3854 _public_6ef3854
#define public_6ef386d _public_6ef386d
#define public_6ef3873 _public_6ef3873
#define public_6ef3878 _public_6ef3878

PROC_DECLARE(0x6ef3790, internal_6ef3790, public_6ef3790);
extern "C" NAKED register_t __cdecl internal_6ef3790()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x20]
        push edi
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6efc050]
        mov edi, dword ptr ds : [esi+0x3C]
        cmp edi, dword ptr ds : [esi+0x40]
        je public_6ef3810
        lea ebx, ds:[edi+4]
        public_6ef37b2 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [eax+0x80]
        cmp eax, 2
        je public_6ef3805
        cmp eax, 3
        je public_6ef3805
        cmp eax, 6
        je public_6ef3805
        mov ecx, dword ptr ds : [esi+0x40]
        cmp ebx, ecx
        mov eax, ebx
        je public_6ef37ec
        mov edx, edi
        sub edx, ebx
        lea ebx, ds:[ebx]
        public_6ef37e0 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6ef37e0
        public_6ef37ec : nop
        add dword ptr ds : [esi+0x40], 0xFFFFFFFC
        mov edx, dword ptr ds : [esi+0x50]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[esi+0x48]
        push 1
        push edx
        call public_6ef3960
        jmp public_6ef380b
        public_6ef3805 : nop
        add edi, 4
        add ebx, 4
        public_6ef380b : nop
        cmp edi, dword ptr ds : [esi+0x40]
        jne public_6ef37b2
        public_6ef3810 : nop
        mov edi, dword ptr ds : [esi+0x4C]
        cmp edi, dword ptr ds : [esi+0x50]
        je public_6ef3878
        lea ebx, ds:[edi+4]
        nop 
        lea esp, ss:[esp]
        public_6ef3820 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [eax+0x80]
        cmp eax, 2
        je public_6ef383b
        cmp eax, 3
        je public_6ef383b
        cmp eax, 6
        jne public_6ef386d
        public_6ef383b : nop
        mov ecx, dword ptr ds : [esi+0x50]
        cmp ebx, ecx
        mov eax, ebx
        je public_6ef3854
        mov edx, edi
        sub edx, ebx
        public_6ef3848 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6ef3848
        public_6ef3854 : nop
        add dword ptr ds : [esi+0x50], 0xFFFFFFFC
        mov edx, dword ptr ds : [esi+0x40]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[esi+0x38]
        push 1
        push edx
        call public_6ef3960
        jmp public_6ef3873
        public_6ef386d : nop
        add edi, 4
        add ebx, 4
        public_6ef3873 : nop
        cmp edi, dword ptr ds : [esi+0x50]
        jne public_6ef3820
        public_6ef3878 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [public_6efc04c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ef3790)
    }
}

#undef public_6ef37b2
#undef public_6ef37e0
#undef public_6ef37ec
#undef public_6ef3805
#undef public_6ef380b
#undef public_6ef3810
#undef public_6ef3820
#undef public_6ef383b
#undef public_6ef3848
#undef public_6ef3854
#undef public_6ef386d
#undef public_6ef3873
#undef public_6ef3878
