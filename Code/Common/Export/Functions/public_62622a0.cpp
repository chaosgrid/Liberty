#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_626a960);
CLANG_FORWARD_PROC_SYMBOL(public_626ab10);
CLANG_FORWARD_PROC_SYMBOL(public_626b450);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_62622c4 _public_62622c4
#define public_62622d6 _public_62622d6
#define public_62622e0 _public_62622e0
#define public_62622f7 _public_62622f7
#define public_6262300 _public_6262300
#define public_6262319 _public_6262319
#define public_6262321 _public_6262321
#define public_626234c _public_626234c
#define public_62623b9 _public_62623b9
#define public_62623c0 _public_62623c0
#define public_62623e5 _public_62623e5
#define public_62623f3 _public_62623f3

PROC_DECLARE(0x62622a0, internal_62622a0, public_62622a0);
extern "C" NAKED register_t __cdecl internal_62622a0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        cmp ebp, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_6262321
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        je public_62622d6
        public_62622c4 : nop
        cmp edi, ebp
        je public_62622d6
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edi, dword ptr ds : [edi]
        jne public_62622c4
        public_62622d6 : nop
        cmp eax, esi
        mov ebx, eax
        je public_62622f7
        lea esp, ss:[esp]
        public_62622e0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        call public_6271cc0
        cmp ebx, esi
        jne public_62622e0
        public_62622f7 : nop
        cmp edi, ebp
        je public_6262319
        nop 
        lea esp, ss:[esp]
        public_6262300 : nop
        lea eax, ds:[edi+8]
        push eax
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_627f280
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6262300
        public_6262319 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x10]
        public_6262321 : nop
        lea edi, ds:[ebx+0xC]
        lea esi, ss:[ebp+0xC]
        cmp esi, edi
        je public_626234c
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_626a8b0
        mov al, byte ptr ds : [edi+1]
        push edi
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_626a960
        public_626234c : nop
        add ebx, 0x20
        lea esi, ss:[ebp+0x20]
        cmp esi, ebx
        je public_62623f3
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], ecx
        je public_62623b9
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax]
        jne public_62623b9
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62623b9
        mov edx, dword ptr ds : [eax+4]
        push edx
        mov ecx, esi
        call public_626b450
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_62623e5
        public_62623b9 : nop
        cmp ecx, edi
        je public_62623e5
        lea ecx, ds:[ecx]
        public_62623c0 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_62a1c30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62be400
        cmp dword ptr ss : [esp+0x20], edi
        jne public_62623c0
        public_62623e5 : nop
        mov al, byte ptr ds : [ebx+1]
        push ebx
        mov ecx, esi
        mov byte ptr ds : [esi+1], al
        call public_626ab10
        public_62623f3 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62622a0)
    }
}

#undef public_62622c4
#undef public_62622d6
#undef public_62622e0
#undef public_62622f7
#undef public_6262300
#undef public_6262319
#undef public_6262321
#undef public_626234c
#undef public_62623b9
#undef public_62623c0
#undef public_62623e5
#undef public_62623f3
