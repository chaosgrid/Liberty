#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15490);
CLANG_FORWARD_PROC_SYMBOL(public_6f15840);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);

#define public_6f15863 _public_6f15863
#define public_6f15890 _public_6f15890
#define public_6f158a3 _public_6f158a3
#define public_6f158d2 _public_6f158d2
#define public_6f158f0 _public_6f158f0
#define public_6f15904 _public_6f15904
#define public_6f15915 _public_6f15915
#define public_6f15919 _public_6f15919
#define public_6f15927 _public_6f15927

PROC_DECLARE(0x6f15840, internal_6f15840, public_6f15840);
extern "C" NAKED register_t __cdecl internal_6f15840()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xBC]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        push edi
        mov dword ptr ss : [esp+0x10], esi
        je public_6f15919
        mov ebx, dword ptr ds : [public_6fb3294]
        public_6f15863 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, 4
        push eax
        lea ecx, ss:[ebp+0xC]
        push ecx
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f15904
        mov edi, dword ptr ss : [ebp+0xF4]
        cmp edi, dword ptr ss : [ebp+0xF8]
        je public_6f15904
        lea ebx, ds:[ebx]
        public_6f15890 : nop
        mov ecx, dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f158f0
        lea esi, ds:[edi+8]
        public_6f158a3 : nop
        mov edx, dword ptr ds : [eax+0x10]
        add edx, 0xD8
        push esi
        push edx
        call ebx
        add esp, 8
        test eax, eax
        je public_6f158d2
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ecx+0xA8]
        jne public_6f158a3
        jmp public_6f158f0
        public_6f158d2 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f158f0
        mov ecx, dword ptr ds : [eax+0x14C]
        test ecx, ecx
        je public_6f15915
        cmp dword ptr ds : [eax+0x154], 0xFFFFFFFF
        je public_6f15915
        public_6f158f0 : nop
        mov eax, dword ptr ss : [ebp+0xF8]
        mov esi, dword ptr ss : [esp+0x10]
        add edi, 0x88
        cmp edi, eax
        jne public_6f15890
        public_6f15904 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [esi+0xBC]
        jne public_6f15863
        jmp public_6f15919
        public_6f15915 : nop
        test eax, eax
        jne public_6f15927
        public_6f15919 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call public_6f15490
        public_6f15927 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f15840)
    }
}

#undef public_6f15863
#undef public_6f15890
#undef public_6f158a3
#undef public_6f158d2
#undef public_6f158f0
#undef public_6f15904
#undef public_6f15915
#undef public_6f15919
#undef public_6f15927
