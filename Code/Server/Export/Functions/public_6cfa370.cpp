#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d00380);
CLANG_FORWARD_PROC_SYMBOL(public_6d00560);
CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d000);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d100);

#define public_6cfa3c3 _public_6cfa3c3
#define public_6cfa443 _public_6cfa443
#define public_6cfa455 _public_6cfa455
#define public_6cfa459 _public_6cfa459
#define public_6cfa4b6 _public_6cfa4b6
#define public_6cfa4d6 _public_6cfa4d6
#define public_6cfa4d8 _public_6cfa4d8
#define public_6cfa4f0 _public_6cfa4f0
#define public_6cfa502 _public_6cfa502
#define public_6cfa50a _public_6cfa50a
#define public_6cfa50f _public_6cfa50f

PROC_DECLARE(0x6cfa370, internal_6cfa370, public_6cfa370);
extern "C" NAKED register_t __cdecl internal_6cfa370()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0x38
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cfa50f
        lea edx, ss:[esp]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cfa50a
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push esi
        xor ebx, ebx
        xor esi, esi
        test eax, 0x3FFFFFFF
        je public_6cfa3c3
        push eax
        call public_6d00280
        add esp, 4
        mov esi, eax
        public_6cfa3c3 : nop
        mov edx, dword ptr ds : [public_6d64388]
        mov ecx, dword ptr ds : [public_6d64384]
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], 2
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], 1
        mov byte ptr ss : [esp+0x32], bl
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x2A], bl
        je public_6cfa443
        cmp esi, ecx
        je public_6cfa459
        mov eax, dword ptr ss : [esp+0x44]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call public_6d0d000
        jmp public_6cfa455
        public_6cfa443 : nop
        mov edx, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        call public_6d00380
        add esp, 8
        public_6cfa455 : nop
        mov ecx, dword ptr ss : [esp+8]
        public_6cfa459 : nop
        cmp esi, ebx
        je public_6cfa4f0
        cmp esi, ecx
        je public_6cfa4b6
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        mov ecx, esi
        call public_6d0d100
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, ebx
        je public_6cfa502
        add eax, 0xC
        cmp eax, ebx
        je public_6cfa502
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6cfa502
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_6cfa502
        push ebx
        call dword ptr ds : [public_6d644d8]
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 
        public_6cfa4b6 : nop
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, ebx
        je public_6cfa4d6
        add eax, 0xC
        cmp eax, ebx
        je public_6cfa4d6
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6cfa4d6
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 1
        cmp al, 1
        je public_6cfa4d8
        public_6cfa4d6 : nop
        xor ecx, ecx
        public_6cfa4d8 : nop
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        call dword ptr ds : [edx+0x7C]
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 
        public_6cfa4f0 : nop
        mov edx, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        call public_6d00560
        add esp, 8
        public_6cfa502 : nop
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 
        public_6cfa50a : nop
        mov eax, 0xFFFFFFFE
        public_6cfa50f : nop
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6cfa370)
    }
}

#undef public_6cfa3c3
#undef public_6cfa443
#undef public_6cfa455
#undef public_6cfa459
#undef public_6cfa4b6
#undef public_6cfa4d6
#undef public_6cfa4d8
#undef public_6cfa4f0
#undef public_6cfa502
#undef public_6cfa50a
#undef public_6cfa50f
