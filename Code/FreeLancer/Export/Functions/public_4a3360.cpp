#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_4a3360);
CLANG_FORWARD_PROC_SYMBOL(public_4a3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4a3394 _public_4a3394
#define public_4a3396 _public_4a3396
#define public_4a339e _public_4a339e
#define public_4a33a3 _public_4a33a3
#define public_4a33af _public_4a33af
#define public_4a33d4 _public_4a33d4
#define public_4a33e8 _public_4a33e8
#define public_4a33f6 _public_4a33f6
#define public_4a3416 _public_4a3416
#define public_4a342a _public_4a342a
#define public_4a3430 _public_4a3430
#define public_4a3443 _public_4a3443
#define public_4a3450 _public_4a3450
#define public_4a345e _public_4a345e
#define public_4a349a _public_4a349a
#define public_4a34bb _public_4a34bb
#define public_4a34e9 _public_4a34e9
#define public_4a34f0 _public_4a34f0
#define public_4a3507 _public_4a3507
#define public_4a3520 _public_4a3520
#define public_4a3534 _public_4a3534
#define public_4a3540 _public_4a3540
#define public_4a3557 _public_4a3557
#define public_4a356d _public_4a356d
#define public_4a3590 _public_4a3590
#define public_4a35b8 _public_4a35b8
#define public_4a35c3 _public_4a35c3
#define public_4a35ff _public_4a35ff
#define public_4a3606 _public_4a3606
#define public_4a3618 _public_4a3618
#define public_4a3621 _public_4a3621
#define public_4a365a _public_4a365a
#define public_4a3661 _public_4a3661
#define public_4a3670 _public_4a3670
#define public_4a3673 _public_4a3673

PROC_DECLARE(0x4a3360, internal_4a3360, public_4a3360);
extern "C" NAKED register_t __cdecl internal_4a3360()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 3
        cmp eax, ebx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_4a34bb
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_4a3394
        mov eax, esi
        sub eax, ecx
        sar eax, 3
        cmp ebx, eax
        jb public_4a3396
        public_4a3394 : nop
        mov eax, ebx
        public_4a3396 : nop
        test ecx, ecx
        jne public_4a339e
        xor esi, esi
        jmp public_4a33a3
        public_4a339e : nop
        sub esi, ecx
        sar esi, 3
        public_4a33a3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_4a33af
        xor eax, eax
        public_4a33af : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_5b7e84
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        je public_4a33e8
        public_4a33d4 : nop
        push esi
        push edi
        call public_4a3ec0
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_4a33d4
        public_4a33e8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        mov esi, edi
        jbe public_4a3416
        mov dword ptr ss : [esp+0x20], eax
        public_4a33f6 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_4a3ec0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_4a33f6
        mov eax, dword ptr ss : [esp+0x24]
        public_4a3416 : nop
        lea eax, ds:[edi+eax*8]
        mov edi, dword ptr ss : [ebp+8]
        cmp ebx, edi
        mov esi, ebx
        je public_4a3443
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_4a3430
        public_4a342a : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_4a3430 : nop
        add eax, esi
        push esi
        push eax
        call public_4a3ec0
        add esi, 8
        add esp, 8
        cmp esi, edi
        jne public_4a342a
        public_4a3443 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, edi
        je public_4a345e
        lea ecx, ds:[ecx]
        public_4a3450 : nop
        mov ecx, esi
        call public_444e20
        add esi, 8
        cmp esi, edi
        jne public_4a3450
        public_4a345e : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+ecx*8]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], eax
        jne public_4a349a
        mov ecx, dword ptr ss : [esp+0x24]
        xor eax, eax
        pop edi
        mov eax, ecx
        lea eax, ds:[edx+eax*8]
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4a349a : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        sar eax, 3
        pop edi
        add eax, ecx
        lea eax, ds:[edx+eax*8]
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4a34bb : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebp
        sar edx, 3
        cmp edx, ebx
        jae public_4a356d
        lea eax, ds:[ebx*8]
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebp
        cmp ebp, esi
        mov edi, ebp
        je public_4a3507
        sub eax, ebp
        mov dword ptr ss : [esp+0x20], eax
        jmp public_4a34f0
        public_4a34e9 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_4a34f0 : nop
        add eax, edi
        push edi
        push eax
        call public_4a3ec0
        add edi, 8
        add esp, 8
        cmp edi, esi
        jne public_4a34e9
        mov ecx, dword ptr ss : [esp+0x10]
        public_4a3507 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, esi
        sub eax, ebp
        sar eax, 3
        sub ebx, eax
        je public_4a3534
        lea esp, ss:[esp]
        public_4a3520 : nop
        push edi
        push esi
        call public_4a3ec0
        add esp, 8
        add esi, 8
        dec ebx
        jne public_4a3520
        mov ecx, dword ptr ss : [esp+0x10]
        public_4a3534 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp ebp, esi
        je public_4a3557
        nop 
        lea esp, ss:[esp]
        public_4a3540 : nop
        mov ecx, dword ptr ds : [edi]
        push 0xFFFFFFFF
        push ecx
        mov ecx, ebp
        call public_413df0
        add ebp, 8
        cmp ebp, esi
        jne public_4a3540
        mov ecx, dword ptr ss : [esp+0x10]
        public_4a3557 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4a356d : nop
        test ebx, ebx
        jbe public_4a3673
        lea eax, ds:[ebx*8]
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x24], eax
        je public_4a35b8
        lea esp, ss:[esp]
        public_4a3590 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        push eax
        call public_4a3ec0
        mov edx, dword ptr ss : [esp+0x1C]
        add edx, 8
        add edi, 8
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x14], edx
        jne public_4a3590
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        public_4a35b8 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, esi
        sub ebx, eax
        cmp ebp, ebx
        je public_4a3618
        public_4a35c3 : nop
        mov ebp, dword ptr ds : [ebx-8]
        sub ebx, 8
        sub esi, 8
        test ebp, ebp
        je public_4a35ff
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        lea ecx, ds:[edi+1]
        push ecx
        mov ecx, esi
        call public_4142a0
        mov edx, dword ptr ds : [esi]
        push edi
        push ebp
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], 0
        jmp public_4a3606
        public_4a35ff : nop
        mov ecx, esi
        call public_414280
        public_4a3606 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp ebx, eax
        jne public_4a35c3
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        public_4a3618 : nop
        lea ebx, ds:[eax+ebp]
        cmp ebp, ebx
        mov esi, ebp
        je public_4a3670
        public_4a3621 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [ecx]
        test ebp, ebp
        je public_4a365a
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        lea edx, ds:[edi+1]
        push edx
        mov ecx, esi
        call public_4142a0
        mov eax, dword ptr ds : [esi]
        push edi
        push ebp
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [ecx+edi*2], 0
        jmp public_4a3661
        public_4a365a : nop
        mov ecx, esi
        call public_414280
        public_4a3661 : nop
        add esi, 8
        cmp esi, ebx
        jne public_4a3621
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        public_4a3670 : nop
        add dword ptr ds : [ecx+8], eax
        public_4a3673 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4a3360)
    }
}

#undef public_4a3394
#undef public_4a3396
#undef public_4a339e
#undef public_4a33a3
#undef public_4a33af
#undef public_4a33d4
#undef public_4a33e8
#undef public_4a33f6
#undef public_4a3416
#undef public_4a342a
#undef public_4a3430
#undef public_4a3443
#undef public_4a3450
#undef public_4a345e
#undef public_4a349a
#undef public_4a34bb
#undef public_4a34e9
#undef public_4a34f0
#undef public_4a3507
#undef public_4a3520
#undef public_4a3534
#undef public_4a3540
#undef public_4a3557
#undef public_4a356d
#undef public_4a3590
#undef public_4a35b8
#undef public_4a35c3
#undef public_4a35ff
#undef public_4a3606
#undef public_4a3618
#undef public_4a3621
#undef public_4a365a
#undef public_4a3661
#undef public_4a3670
#undef public_4a3673
