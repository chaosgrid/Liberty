#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6cfb6f0 _public_6cfb6f0
#define public_6cfb707 _public_6cfb707
#define public_6cfb709 _public_6cfb709
#define public_6cfb731 _public_6cfb731
#define public_6cfb745 _public_6cfb745
#define public_6cfb751 _public_6cfb751
#define public_6cfb753 _public_6cfb753

PROC_DECLARE(0x6cfb640, internal_6cfb640, public_6cfb640);
extern "C" NAKED register_t __cdecl internal_6cfb640()
{
    __asm
    {
        mov eax, 0x201C
        call public_6d60160
        fld dword ptr ss : [esp+0x2028]
        fcomp dword ptr ds : [public_6d65188]
        push ebx
        mov ebx, dword ptr ss : [esp+0x2038]
        push edi
        xor edi, edi
        fnstsw ax
        mov ecx, 0xFFFFFFFC
        mov dword ptr ds : [ebx], edi
        test ah, 1
        jne public_6cfb751
        mov eax, dword ptr ss : [esp+0x2028]
        push eax
        call dword ptr ds : [public_6d644f4]
        mov ecx, eax
        add esp, 4
        cmp ecx, edi
        mov eax, 0xFFFFFFFE
        je public_6cfb753
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ss : [esp+0x2030]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x2038]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x24], 0x800
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, edi
        jbe public_6cfb745
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0xC], edx
        lea ecx, ds:[ecx]
        public_6cfb6f0 : nop
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ss : [esp+0x203C]
        jae public_6cfb745
        cmp edi, eax
        jae public_6cfb707
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edx]
        jmp public_6cfb709
        public_6cfb707 : nop
        xor esi, esi
        public_6cfb709 : nop
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        call dword ptr ds : [public_6d644f8]
        add esp, 8
        test al, al
        jne public_6cfb731
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x2038]
        mov dword ptr ds : [edx+ecx*4], eax
        inc dword ptr ds : [ebx]
        public_6cfb731 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x24]
        inc edi
        add edx, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], edx
        jb public_6cfb6f0
        public_6cfb745 : nop
        pop esi
        pop edi
        xor eax, eax
        pop ebx
        add esp, 0x201C
        ret 
        public_6cfb751 : nop
        mov eax, ecx
        public_6cfb753 : nop
        pop edi
        pop ebx
        add esp, 0x201C
        ret 
        UNREACHABLE_TRAP(0x6cfb640)
    }
}

#undef public_6cfb6f0
#undef public_6cfb707
#undef public_6cfb709
#undef public_6cfb731
#undef public_6cfb745
#undef public_6cfb751
#undef public_6cfb753
