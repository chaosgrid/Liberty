#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_590d70);
CLANG_FORWARD_PROC_SYMBOL(public_591230);

#define public_590dbd _public_590dbd
#define public_590dd2 _public_590dd2
#define public_590dd9 _public_590dd9
#define public_590df7 _public_590df7
#define public_590e09 _public_590e09
#define public_590e44 _public_590e44
#define public_590e59 _public_590e59
#define public_590e5c _public_590e5c
#define public_590e7a _public_590e7a
#define public_590e8c _public_590e8c

PROC_DECLARE(0x590d70, internal_590d70, public_590d70);
extern "C" NAKED register_t __cdecl internal_590d70()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov ebp, dword ptr ds : [edi+8]
        test ebp, ebp
        je public_590df7
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov ecx, dword ptr ds : [esi+0xC]
        lea ebx, ds:[eax+1]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x14], eax
        jbe public_590dd9
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_590dbd
        lea edx, ds:[ebx+ebx]
        push edx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi+8], eax
        jmp public_590dd2
        public_590dbd : nop
        lea eax, ds:[ebx+ebx]
        push eax
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi+8], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_590dd2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0xC], ebx
        public_590dd9 : nop
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ebp
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov word ptr ds : [edx+eax*2], 0
        jmp public_590e09
        public_590df7 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_590e09
        cmp word ptr ds : [eax], 0
        je public_590e09
        mov word ptr ds : [eax], 0
        public_590e09 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_590e7a
        push eax
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ebx, ss:[ebp+1]
        add esp, 4
        cmp ebx, eax
        jbe public_590e5c
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_590e44
        lea ecx, ds:[ebx+ebx]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi+0x10], eax
        jmp public_590e59
        public_590e44 : nop
        lea edx, ds:[ebx+ebx]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi+0x10], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_590e59 : nop
        mov dword ptr ds : [esi+0x14], ebx
        public_590e5c : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi+0x10]
        add esp, 0xC
        mov word ptr ds : [edx+ebp*2], 0
        jmp public_590e8c
        public_590e7a : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_590e8c
        cmp word ptr ds : [eax], 0
        je public_590e8c
        mov word ptr ds : [eax], 0
        public_590e8c : nop
        mov eax, dword ptr ds : [edi+0x18]
        lea ecx, ds:[edi+0x1C]
        push ecx
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ds : [esi+0x18], eax
        call public_591230
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], eax
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], ecx
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x38], edx
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x3C], eax
        mov cl, byte ptr ds : [edi+0x40]
        mov byte ptr ds : [esi+0x40], cl
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ds : [esi+0x44], edx
        lea eax, ds:[edi+0x48]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x48]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[edi+0x54]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x54]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ds : [edi+0x60]
        pop edi
        mov byte ptr ds : [esi+0x60], dl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x590d70)
    }
}

#undef public_590dbd
#undef public_590dd2
#undef public_590dd9
#undef public_590df7
#undef public_590e09
#undef public_590e44
#undef public_590e59
#undef public_590e5c
#undef public_590e7a
#undef public_590e8c
