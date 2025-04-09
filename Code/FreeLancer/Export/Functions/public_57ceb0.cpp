#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_57d6a0);
CLANG_FORWARD_PROC_SYMBOL(public_57f290);
CLANG_FORWARD_PROC_SYMBOL(public_57f300);
CLANG_FORWARD_PROC_SYMBOL(public_57f340);
CLANG_FORWARD_PROC_SYMBOL(public_57f740);
CLANG_FORWARD_PROC_SYMBOL(public_57fbb0);
CLANG_FORWARD_PROC_SYMBOL(public_57fc10);
CLANG_FORWARD_PROC_SYMBOL(public_59f590);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57cec5 _public_57cec5
#define public_57cefb _public_57cefb
#define public_57cf0b _public_57cf0b
#define public_57cf12 _public_57cf12
#define public_57cf4d _public_57cf4d
#define public_57cf7c _public_57cf7c
#define public_57cf84 _public_57cf84
#define public_57cf94 _public_57cf94
#define public_57cfbe _public_57cfbe
#define public_57cfd6 _public_57cfd6
#define public_57cfde _public_57cfde
#define public_57d008 _public_57d008
#define public_57d014 _public_57d014
#define public_57d062 _public_57d062
#define public_57d067 _public_57d067
#define public_57d078 _public_57d078
#define public_57d100 _public_57d100
#define public_57d166 _public_57d166
#define public_57d193 _public_57d193
#define public_57d197 _public_57d197
#define public_57d1ae _public_57d1ae
#define public_57d1c7 _public_57d1c7

PROC_DECLARE(0x57ceb0, internal_57ceb0, public_57ceb0);
extern "C" NAKED register_t __cdecl internal_57ceb0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0x6C], 1
        jne public_57cec5
        xor al, al
        pop ebx
        add esp, 0x14
        ret 4
        public_57cec5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        movzx eax, word ptr ds : [eax+0x10]
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_5c7154]
        add esp, 4
        test eax, eax
        jne public_57d1c7
        mov eax, dword ptr ds : [ebx+0x50C]
        cmp eax, 1
        jne public_57cefb
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call dword ptr ds : [public_5c7114]
        jmp public_57cf0b
        public_57cefb : nop
        cmp eax, 2
        jne public_57cf12
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [public_5c7144]
        public_57cf0b : nop
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        public_57cf12 : nop
        mov al, byte ptr ds : [ebx+0x52A]
        push esi
        push edi
        test al, al
        lea eax, ss:[esp+0x24]
        lea ecx, ss:[esp+0xC]
        push eax
        push ecx
        je public_57cf4d
        mov esi, dword ptr ds : [ebx+0x518]
        lea ecx, ds:[ebx+0x514]
        call public_57f290
        cmp dword ptr ss : [esp+0xC], esi
        jne public_57cf94
        mov dx, word ptr ds : [ebx+0x528]
        mov word ptr ss : [esp+0x24], dx
        jmp public_57cf94
        public_57cf4d : nop
        mov edi, dword ptr ds : [ebx+0x518]
        lea esi, ds:[ebx+0x514]
        mov ecx, esi
        call public_57f740
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_57cf7c
        mov dx, word ptr ss : [esp+0x24]
        cmp dx, word ptr ds : [eax+0xC]
        jb public_57cf7c
        lea eax, ss:[esp+0xC]
        jmp public_57cf84
        public_57cf7c : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_57cf84 : nop
        cmp dword ptr ds : [eax], edi
        je public_57cf94
        mov ax, word ptr ds : [ebx+0x528]
        mov word ptr ss : [esp+0x24], ax
        public_57cf94 : nop
        mov ecx, dword ptr ds : [ebx+0x4A0]
        cmp ecx, dword ptr ds : [ebx+0x4A4]
        jne public_57d1ae
        mov esi, dword ptr ds : [ebx+0x510]
        test esi, esi
        je public_57cfde
        mov eax, dword ptr ds : [ebx+0x4C8]
        test eax, eax
        jne public_57cfbe
        xor edx, edx
        jmp public_57cfd6
        public_57cfbe : nop
        mov ecx, dword ptr ds : [ebx+0x4CC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57cfd6 : nop
        cmp edx, esi
        jae public_57d1ae
        public_57cfde : nop
        mov ecx, dword ptr ds : [ebx+0x4D4]
        mov edi, dword ptr ds : [ebx+0x4C8]
        mov dx, word ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx+0x49C]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [ebx+0x4CC]
        cmp edi, ecx
        mov word ptr ss : [esp+0x14], dx
        je public_57d014
        public_57d008 : nop
        test eax, eax
        jle public_57d014
        add edi, 0xC
        dec eax
        cmp edi, ecx
        jne public_57d008
        public_57d014 : nop
        mov ecx, dword ptr ds : [ebx+0x4CC]
        mov edx, dword ptr ds : [ebx+0x4D0]
        lea esi, ds:[ebx+0x4C4]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push ebp
        jae public_57d100
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_57d062
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 1
        mov ebp, edx
        ja public_57d067
        public_57d062 : nop
        mov ebp, 1
        public_57d067 : nop
        mov ecx, esi
        call public_59f590
        add eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jns public_57d078
        xor eax, eax
        public_57d078 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_5b7e84
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_57f300
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_57f340
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 0xC
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_57f300
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+eax*2]
        lea edx, ss:[ebp+ecx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_59f590
        inc eax
        lea eax, ds:[eax+eax*2]
        lea ecx, ss:[ebp+eax*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], ebp
        jmp public_57d197
        public_57d100 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_57d166
        lea edx, ds:[edi+0xC]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_57f300
        mov ebp, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push ebp
        mov ecx, esi
        call public_57f340
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        push edi
        call public_57fbb0
        add esp, 0xC
        jmp public_57d193
        public_57d166 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF4
        push ecx
        mov ecx, esi
        call public_57f300
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFF4
        push eax
        push edi
        call public_57fc10
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        push edi
        call public_57fbb0
        add esp, 0x18
        public_57d193 : nop
        add dword ptr ds : [esi+8], 0xC
        public_57d197 : nop
        mov edx, dword ptr ds : [ebx+0x49C]
        inc edx
        push edx
        mov ecx, ebx
        call public_57d6a0
        mov ecx, ebx
        call public_57d330
        pop ebp
        public_57d1ae : nop
        mov ebx, dword ptr ds : [ebx+0x52C]
        test ebx, ebx
        pop edi
        pop esi
        je public_57d1c7
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c6eb8]
        public_57d1c7 : nop
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x57ceb0)
    }
}

#undef public_57cec5
#undef public_57cefb
#undef public_57cf0b
#undef public_57cf12
#undef public_57cf4d
#undef public_57cf7c
#undef public_57cf84
#undef public_57cf94
#undef public_57cfbe
#undef public_57cfd6
#undef public_57cfde
#undef public_57d008
#undef public_57d014
#undef public_57d062
#undef public_57d067
#undef public_57d078
#undef public_57d100
#undef public_57d166
#undef public_57d193
#undef public_57d197
#undef public_57d1ae
#undef public_57d1c7
