#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489160);
CLANG_FORWARD_PROC_SYMBOL(public_489410);
CLANG_FORWARD_PROC_SYMBOL(public_5756d0);
CLANG_FORWARD_PROC_SYMBOL(public_575700);
CLANG_FORWARD_PROC_SYMBOL(public_5758e0);
CLANG_FORWARD_PROC_SYMBOL(public_575920);
CLANG_FORWARD_PROC_SYMBOL(public_575970);
CLANG_FORWARD_PROC_SYMBOL(public_575b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57576b _public_57576b
#define public_575770 _public_575770
#define public_575778 _public_575778
#define public_57578b _public_57578b
#define public_575798 _public_575798
#define public_5757b4 _public_5757b4
#define public_5757c8 _public_5757c8
#define public_57582b _public_57582b
#define public_57588f _public_57588f
#define public_5758bc _public_5758bc
#define public_5758c0 _public_5758c0

PROC_DECLARE(0x575700, internal_575700, public_575700);
extern "C" NAKED register_t __cdecl internal_575700()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_57582b
        test ebx, ebx
        je public_57576b
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_575770
        public_57576b : nop
        mov ebp, 1
        public_575770 : nop
        test ebx, ebx
        jne public_575778
        xor edx, edx
        jmp public_57578b
        public_575778 : nop
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_57578b : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_575798
        xor eax, eax
        public_575798 : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 2
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_5757c8
        public_5757b4 : nop
        push ebx
        push ebp
        call public_575b80
        add ebx, 0x24
        add esp, 8
        add ebp, 0x24
        cmp ebx, edi
        jne public_5757b4
        public_5757c8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_575b80
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x24
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_5758e0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_489160
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*8]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_5756d0
        inc eax
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        jmp public_5758c0
        public_57582b : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_57588f
        lea edx, ds:[edi+0x24]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_5758e0
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_575920
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_489410
        add esp, 0xC
        jmp public_5758bc
        public_57588f : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFDC
        push ecx
        mov ecx, esi
        call public_5758e0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFDC
        push eax
        push edi
        call public_575970
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x24]
        push ecx
        push edi
        call public_489410
        add esp, 0x18
        public_5758bc : nop
        add dword ptr ds : [esi+8], 0x24
        public_5758c0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        lea edx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebp
        lea eax, ds:[eax+edx*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x575700)
    }
}

#undef public_57576b
#undef public_575770
#undef public_575778
#undef public_57578b
#undef public_575798
#undef public_5757b4
#undef public_5757c8
#undef public_57582b
#undef public_57588f
#undef public_5758bc
#undef public_5758c0
