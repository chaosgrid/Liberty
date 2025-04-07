#include "ReadFile-PCH.h"


#define public_6b756eb _public_6b756eb
#define public_6b756fb _public_6b756fb
#define public_6b75704 _public_6b75704
#define public_6b7571d _public_6b7571d
#define public_6b75736 _public_6b75736
#define public_6b7573a _public_6b7573a
#define public_6b7574b _public_6b7574b
#define public_6b7574e _public_6b7574e
#define public_6b75753 _public_6b75753
#define public_6b7576d _public_6b7576d
#define public_6b75788 _public_6b75788
#define public_6b75799 _public_6b75799
#define public_6b7579e _public_6b7579e
#define public_6b757b0 _public_6b757b0
#define public_6b757c3 _public_6b757c3
#define public_6b757c7 _public_6b757c7
#define public_6b757d8 _public_6b757d8
#define public_6b757e9 _public_6b757e9
#define public_6b7583d _public_6b7583d
#define public_6b75850 _public_6b75850
#define public_6b75855 _public_6b75855
#define public_6b7586d _public_6b7586d
#define public_6b75885 _public_6b75885

PROC_DECLARE(0x6b756b0, internal_6b756b0, public_6b756b0);
extern "C" NAKED register_t __cdecl internal_6b756b0()
{
    __asm
    {
        sub esp, 0x108
        push ebp
        mov ebp, dword ptr ss : [esp+0x110]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0x128]
        xor edi, edi
        test eax, eax
        jne public_6b75885
        mov esi, dword ptr ss : [esp+0x11C]
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6b756fb
        cmp al, 0x5C
        je public_6b756eb
        cmp al, 0x2F
        je public_6b756eb
        cmp byte ptr ds : [esi+1], 0x3A
        jne public_6b756fb
        public_6b756eb : nop
        push 0x104
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        jmp public_6b757d8
        public_6b756fb : nop
        mov dl, byte ptr ss : [ebp+0xD]
        xor ecx, ecx
        test dl, dl
        je public_6b7571d
        public_6b75704 : nop
        cmp ecx, 0x103
        jge public_6b75855
        mov byte ptr ss : [esp+ecx+0xC], dl
        mov dl, byte ptr ds : [ecx+ebp+0xE]
        inc ecx
        test dl, dl
        jne public_6b75704
        public_6b7571d : nop
        lea edx, ss:[esp+ecx+0xC]
        lea ecx, ss:[esp+0xC]
        cmp edx, ecx
        je public_6b75736
        mov cl, byte ptr ds : [edx-1]
        cmp cl, 0x5C
        je public_6b7573a
        cmp cl, 0x2F
        je public_6b7573a
        public_6b75736 : nop
        mov byte ptr ds : [edx], 0x5C
        inc edx
        public_6b7573a : nop
        cmp al, 0x2E
        jne public_6b7574e
        mov cl, byte ptr ds : [esi+1]
        cmp cl, 0x5C
        je public_6b7574b
        cmp cl, 0x2F
        jne public_6b7574e
        public_6b7574b : nop
        add esi, 2
        public_6b7574e : nop
        cmp byte ptr ds : [esi], 0x2E
        jne public_6b757b0
        public_6b75753 : nop
        cmp byte ptr ds : [esi+1], 0x2E
        jne public_6b757b0
        mov eax, edx
        lea ecx, ss:[esp+0xC]
        sub eax, ecx
        cmp eax, 2
        jle public_6b75855
        sub edx, 2
        public_6b7576d : nop
        mov cl, byte ptr ds : [edx]
        cmp cl, 0x5C
        je public_6b75788
        cmp cl, 0x2F
        je public_6b75788
        lea eax, ss:[esp+0xC]
        cmp edx, eax
        je public_6b75855
        dec edx
        jmp public_6b7576d
        public_6b75788 : nop
        mov cl, byte ptr ds : [esi+2]
        cmp cl, 0x5C
        je public_6b75799
        cmp cl, 0x2F
        je public_6b75799
        xor ecx, ecx
        jmp public_6b7579e
        public_6b75799 : nop
        mov ecx, 1
        public_6b7579e : nop
        and ecx, 0xFF
        mov al, byte ptr ds : [esi+ecx+2]
        lea esi, ds:[esi+ecx+2]
        cmp al, 0x2E
        je public_6b75753
        public_6b757b0 : nop
        lea ecx, ss:[esp+0xC]
        cmp edx, ecx
        je public_6b757c3
        mov al, byte ptr ds : [edx-1]
        cmp al, 0x5C
        je public_6b757c7
        cmp al, 0x2F
        je public_6b757c7
        public_6b757c3 : nop
        mov byte ptr ds : [edx], 0x5C
        inc edx
        public_6b757c7 : nop
        lea eax, ss:[esp+0x110]
        sub eax, edx
        cmp eax, 1
        jle public_6b75850
        push eax
        push esi
        push edx
        public_6b757d8 : nop
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ss : [esp+0x10F], 0
        public_6b757e9 : nop
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [public_6b7903c]
        cmp eax, 0xFFFFFFFF
        je public_6b7586d
        test al, 0x10
        je public_6b7586d
        lea edi, ss:[esp+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ss:[esp+0xC]
        repne scasb
        not ecx
        dec ecx
        lea edi, ss:[ebp+0xD]
        mov eax, ecx
        lea ecx, ds:[eax+1]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov cl, byte ptr ds : [eax+ebp+0xC]
        cmp cl, 0x5C
        je public_6b7583d
        cmp cl, 0x2F
        je public_6b7583d
        mov byte ptr ds : [eax+ebp+0xD], 0x5C
        mov byte ptr ds : [eax+ebp+0xE], 0
        public_6b7583d : nop
        mov edi, 1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        add esp, 0x108
        ret 8
        public_6b75850 : nop
        mov byte ptr ds : [edx], 0
        jmp public_6b757e9
        public_6b75855 : nop
        mov eax, edi
        pop edi
        mov dword ptr ss : [ebp+0x11C], 0xA1
        pop esi
        pop ebp
        add esp, 0x108
        ret 8
        public_6b7586d : nop
        pop edi
        mov dword ptr ss : [ebp+0x11C], 0xA1
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x108
        ret 8
        public_6b75885 : nop
        pop edi
        mov dword ptr ss : [ebp+0x11C], 5
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x108
        ret 8
        UNREACHABLE_TRAP(0x6b756b0)
    }
}

#undef public_6b756eb
#undef public_6b756fb
#undef public_6b75704
#undef public_6b7571d
#undef public_6b75736
#undef public_6b7573a
#undef public_6b7574b
#undef public_6b7574e
#undef public_6b75753
#undef public_6b7576d
#undef public_6b75788
#undef public_6b75799
#undef public_6b7579e
#undef public_6b757b0
#undef public_6b757c3
#undef public_6b757c7
#undef public_6b757d8
#undef public_6b757e9
#undef public_6b7583d
#undef public_6b75850
#undef public_6b75855
#undef public_6b7586d
#undef public_6b75885
