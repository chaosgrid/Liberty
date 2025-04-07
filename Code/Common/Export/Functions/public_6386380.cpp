#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_63863ce _public_63863ce
#define public_63863fd _public_63863fd
#define public_6386415 _public_6386415
#define public_638642d _public_638642d
#define public_6386440 _public_6386440
#define public_638645c _public_638645c
#define public_6386465 _public_6386465
#define public_638646c _public_638646c
#define public_6386470 _public_6386470
#define public_6386481 _public_6386481
#define public_6386492 _public_6386492
#define public_63864a6 _public_63864a6
#define public_63864c2 _public_63864c2
#define public_63864cb _public_63864cb
#define public_63864d4 _public_63864d4
#define public_63864d8 _public_63864d8

PROC_DECLARE(0x6386380, internal_6386380, public_6386380);
extern "C" NAKED register_t __cdecl internal_6386380()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_658b8e4]
        mov eax, dword ptr ds : [public_658b810]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        inc ecx
        cmp esi, eax
        push edi
        mov dword ptr ds : [public_658b8e4], ecx
        jne public_63863fd
        test ebp, ebp
        je public_63863fd
        test ebx, ebx
        jne public_63863fd
        mov eax, dword ptr ds : [public_658b848]
        push eax
        call public_636ec70
        mov esi, dword ptr ds : [public_658b838]
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_63864d8
        public_63863ce : nop
        cmp dword ptr ds : [esi], 0
        je public_63864d4
        mov ecx, dword ptr ds : [public_658b8e4]
        lea edx, ss:[esp+0x14]
        push esi
        push edx
        mov dword ptr ds : [esi+0x10], ecx
        call public_636e1b0
        mov esi, dword ptr ds : [esi]
        add esp, 8
        test esi, esi
        jne public_63863ce
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_63863fd : nop
        mov eax, dword ptr ds : [public_658b80c]
        push eax
        call public_636ec70
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6386470
        mov edi, esi
        public_6386415 : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_638646c
        test ebp, ebp
        jne public_638642d
        push edi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_6386465
        public_638642d : nop
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        je public_6386465
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6386465
        public_6386440 : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        cmp dword ptr ds : [eax+0x10], ecx
        je public_638645c
        mov dword ptr ds : [eax+0x10], ecx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_636e1b0
        add esp, 8
        public_638645c : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_6386440
        public_6386465 : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_6386415
        public_638646c : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6386470 : nop
        test ebx, ebx
        je public_63864d8
        mov esi, dword ptr ds : [ebx+4]
        lea edi, ds:[ebx+4]
        add edi, 4
        test esi, esi
        je public_63864d8
        public_6386481 : nop
        test ebp, ebp
        jne public_6386492
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_63864cb
        public_6386492 : nop
        mov esi, dword ptr ds : [esi+0x34]
        test esi, esi
        je public_63864cb
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_63864cb
        public_63864a6 : nop
        mov ecx, dword ptr ds : [public_658b8e4]
        cmp dword ptr ds : [eax+0x10], ecx
        je public_63864c2
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ds : [eax+0x10], ecx
        call public_636e1b0
        add esp, 8
        public_63864c2 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_63864a6
        public_63864cb : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6386481
        public_63864d4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_63864d8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6386380)
    }
}

#undef public_63863ce
#undef public_63863fd
#undef public_6386415
#undef public_638642d
#undef public_6386440
#undef public_638645c
#undef public_6386465
#undef public_638646c
#undef public_6386470
#undef public_6386481
#undef public_6386492
#undef public_63864a6
#undef public_63864c2
#undef public_63864cb
#undef public_63864d4
#undef public_63864d8
