#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dde70);
CLANG_FORWARD_PROC_SYMBOL(public_4ded10);
CLANG_FORWARD_PROC_SYMBOL(public_4df750);
CLANG_FORWARD_PROC_SYMBOL(public_4dfa30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4ded62 _public_4ded62
#define public_4ded64 _public_4ded64
#define public_4ded6c _public_4ded6c
#define public_4ded7f _public_4ded7f
#define public_4ded8c _public_4ded8c
#define public_4dedb0 _public_4dedb0
#define public_4dedc8 _public_4dedc8
#define public_4dedd2 _public_4dedd2
#define public_4dedf2 _public_4dedf2
#define public_4dee0a _public_4dee0a
#define public_4dee10 _public_4dee10
#define public_4dee23 _public_4dee23
#define public_4dee30 _public_4dee30
#define public_4dee3e _public_4dee3e
#define public_4dee7c _public_4dee7c
#define public_4deeaa _public_4deeaa
#define public_4deee5 _public_4deee5
#define public_4deef0 _public_4deef0
#define public_4def07 _public_4def07
#define public_4def30 _public_4def30
#define public_4def40 _public_4def40
#define public_4def55 _public_4def55
#define public_4def99 _public_4def99
#define public_4defaf _public_4defaf
#define public_4defd0 _public_4defd0
#define public_4defec _public_4defec
#define public_4deff7 _public_4deff7
#define public_4df011 _public_4df011
#define public_4df026 _public_4df026
#define public_4df06f _public_4df06f
#define public_4df072 _public_4df072

PROC_DECLARE(0x4ded10, internal_4ded10, public_4ded10);
extern "C" NAKED register_t __cdecl internal_4ded10()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_4deeaa
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_4ded62
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_4ded64
        public_4ded62 : nop
        mov ecx, edi
        public_4ded64 : nop
        test ebx, ebx
        jne public_4ded6c
        xor edx, edx
        jmp public_4ded7f
        public_4ded6c : nop
        sub esi, ebx
        mov eax, 0x38E38E39
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4ded7f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_4ded8c
        xor eax, eax
        public_4ded8c : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_4dedc8
        public_4dedb0 : nop
        push esi
        push ebp
        call public_4df750
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp esi, eax
        jne public_4dedb0
        public_4dedc8 : nop
        test edi, edi
        mov esi, ebp
        jbe public_4dedf2
        mov dword ptr ss : [esp+0x24], edi
        public_4dedd2 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_4df750
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x24
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_4dedd2
        mov eax, dword ptr ss : [esp+0x20]
        public_4dedf2 : nop
        lea ecx, ds:[edi+edi*8]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_4dee23
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_4dee10
        public_4dee0a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_4dee10 : nop
        add ecx, esi
        push esi
        push ecx
        call public_4df750
        add esi, 0x24
        add esp, 8
        cmp esi, ebp
        jne public_4dee0a
        public_4dee23 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_4dee3e
        lea ecx, ds:[ecx]
        public_4dee30 : nop
        mov ecx, esi
        call public_4dde70
        add esi, 0x24
        cmp esi, ebp
        jne public_4dee30
        public_4dee3e : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_4dee7c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4dee7c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4deeaa : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_4defaf
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_4def07
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_4deef0
        public_4deee5 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_4deef0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_4df750
        add ebp, 0x24
        add esp, 8
        cmp ebp, esi
        jne public_4deee5
        mov ecx, dword ptr ss : [esp+0x10]
        public_4def07 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        mov eax, edi
        mov edi, dword ptr ss : [esp+0x28]
        je public_4def40
        mov ebp, eax
        nop 
        lea esp, ss:[esp]
        public_4def30 : nop
        push edi
        push esi
        call public_4df750
        add esp, 8
        add esi, 0x24
        dec ebp
        jne public_4def30
        public_4def40 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_4def99
        lea ebp, ds:[edi+0x10]
        lea esi, ds:[ebx+8]
        public_4def55 : nop
        mov dx, word ptr ds : [edi]
        mov word ptr ds : [esi-8], dx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], ecx
        mov dl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [esi+4], dl
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push ebp
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_5c6f9c]
        mov edx, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x18], edx
        add esi, 0x24
        lea eax, ds:[esi-8]
        cmp eax, ecx
        jne public_4def55
        mov ecx, dword ptr ss : [esp+0x10]
        public_4def99 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4defaf : nop
        test edi, edi
        jbe public_4df072
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_4defec
        nop 
        lea esp, ss:[esp]
        public_4defd0 : nop
        push edi
        push ebp
        call public_4df750
        add edi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp edi, esi
        jne public_4defd0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_4defec : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_4df011
        public_4deff7 : nop
        sub esi, 0x24
        sub edi, 0x24
        push esi
        mov ecx, edi
        call public_4dfa30
        cmp esi, ebx
        jne public_4deff7
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_4df011 : nop
        lea edx, ds:[eax+ebx]
        cmp ebx, edx
        mov dword ptr ss : [esp+0x24], edx
        je public_4df06f
        mov edi, dword ptr ss : [esp+0x28]
        lea ebp, ds:[edi+0x10]
        lea esi, ds:[ebx+8]
        public_4df026 : nop
        mov ax, word ptr ds : [edi]
        mov word ptr ds : [esi-8], ax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov al, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [esi+4], al
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push ebp
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 0x24
        lea ecx, ds:[esi-8]
        cmp ecx, eax
        jne public_4df026
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_4df06f : nop
        add dword ptr ds : [ecx+8], eax
        public_4df072 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4ded10)
    }
}

#undef public_4ded62
#undef public_4ded64
#undef public_4ded6c
#undef public_4ded7f
#undef public_4ded8c
#undef public_4dedb0
#undef public_4dedc8
#undef public_4dedd2
#undef public_4dedf2
#undef public_4dee0a
#undef public_4dee10
#undef public_4dee23
#undef public_4dee30
#undef public_4dee3e
#undef public_4dee7c
#undef public_4deeaa
#undef public_4deee5
#undef public_4deef0
#undef public_4def07
#undef public_4def30
#undef public_4def40
#undef public_4def55
#undef public_4def99
#undef public_4defaf
#undef public_4defd0
#undef public_4defec
#undef public_4deff7
#undef public_4df011
#undef public_4df026
#undef public_4df06f
#undef public_4df072
