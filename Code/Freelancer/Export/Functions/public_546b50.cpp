#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_546b74 _public_546b74
#define public_546b79 _public_546b79
#define public_546b94 _public_546b94
#define public_546bbe _public_546bbe
#define public_546bc0 _public_546bc0
#define public_546bf5 _public_546bf5
#define public_546c03 _public_546c03
#define public_546c30 _public_546c30
#define public_546c50 _public_546c50
#define public_546c73 _public_546c73
#define public_546c75 _public_546c75
#define public_546ca8 _public_546ca8
#define public_546ce1 _public_546ce1
#define public_546cec _public_546cec

PROC_DECLARE(0x546b50, internal_546b50, public_546b50);
extern "C" NAKED register_t __cdecl internal_546b50()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        cmp ebx, 0xFFFFFFFF
        push esi
        push edi
        mov edi, ecx
        mov esi, 0xFFFFFFFB
        je public_546b74
        call public_54bb00
        cmp ebx, eax
        mov byte ptr ss : [esp+0xE], 0
        jne public_546b79
        public_546b74 : nop
        mov byte ptr ss : [esp+0xE], 1
        public_546b79 : nop
        mov byte ptr ss : [esp+0xF], 0
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_546b94
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        je public_546cec
        public_546b94 : nop
        lea eax, ds:[edi-4]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_546bbe
        add eax, 0xC
        test eax, eax
        je public_546bbe
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_546bbe
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_546bc0
        public_546bbe : nop
        xor eax, eax
        public_546bc0 : nop
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        mov esi, eax
        test esi, esi
        je public_546bf5
        mov edx, dword ptr ds : [esi]
        mov bl, byte ptr ds : [esi+0x54]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov cl, byte ptr ss : [esp+0xE]
        test cl, cl
        je public_546c30
        mov dl, byte ptr ss : [esp+0x30]
        test dl, dl
        je public_546c03
        test bl, bl
        je public_546c03
        public_546bf5 : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x20
        ret 8
        public_546c03 : nop
        test cl, cl
        je public_546c30
        mov cl, byte ptr ss : [esp+0x30]
        test cl, cl
        je public_546c30
        test al, al
        jne public_546c30
        mov edx, dword ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x4C]
        public_546c30 : nop
        push 0x400
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c64f4]
        mov ebx, dword ptr ds : [public_5c64f0]
        mov edi, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_546c50 : nop
        test edi, edi
        je public_546c73
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_546c73
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_546c73
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_546c75
        public_546c73 : nop
        xor eax, eax
        public_546c75 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call ebx
        mov esi, eax
        test esi, esi
        je public_546ca8
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        cmp al, byte ptr ss : [esp+0x30]
        je public_546c50
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x13], 1
        call dword ptr ds : [eax+0x30]
        jmp public_546c50
        public_546ca8 : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_546ce1
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        je public_546ce1
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov dword ptr ss : [esp+0x14], eax
        mov al, byte ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x18], al
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0xC]
        public_546ce1 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 8
        public_546cec : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x546b50)
    }
}

#undef public_546b74
#undef public_546b79
#undef public_546b94
#undef public_546bbe
#undef public_546bc0
#undef public_546bf5
#undef public_546c03
#undef public_546c30
#undef public_546c50
#undef public_546c73
#undef public_546c75
#undef public_546ca8
#undef public_546ce1
#undef public_546cec
