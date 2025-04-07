#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62fc380);
CLANG_FORWARD_PROC_SYMBOL(public_62fd3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62f75ac _public_62f75ac
#define public_62f75c1 _public_62f75c1
#define public_62f75df _public_62f75df
#define public_62f75f6 _public_62f75f6
#define public_62f7620 _public_62f7620
#define public_62f7649 _public_62f7649
#define public_62f7666 _public_62f7666
#define public_62f7670 _public_62f7670
#define public_62f7690 _public_62f7690
#define public_62f76a9 _public_62f76a9

PROC_DECLARE(0x62f7580, internal_62f7580, public_62f7580);
extern "C" NAKED register_t __cdecl internal_62f7580()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        cmp byte ptr ds : [eax], 0
        jne public_62f75c1
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_62f75ac
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        public_62f75ac : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_62f76a9
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        pop ebp
        add esp, 8
        ret 
        public_62f75c1 : nop
        mov ecx, dword ptr ss : [ebp+0x44]
        cmp ecx, 0xFFFFFFFF
        je public_62f75df
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ss : [ebp+0x44], 0xFFFFFFFF
        public_62f75df : nop
        mov eax, dword ptr ss : [ebp+0x40]
        cmp eax, 0xFFFFFFFF
        je public_62f75f6
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        public_62f75f6 : nop
        mov ecx, dword ptr ss : [ebp+0x58]
        test ecx, ecx
        push ebx
        push esi
        lea esi, ss:[ebp+0x48]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62f7666
        mov ecx, eax
        cmp eax, ecx
        jne public_62f7666
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62f7649
        lea esp, ss:[esp]
        public_62f7620 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fc380
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_62fd3e0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62f7620
        public_62f7649 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        jmp public_62f7690
        public_62f7666 : nop
        cmp eax, edi
        je public_62f7690
        lea ebx, ds:[ebx]
        public_62f7670 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6319b80
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62fbfa0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62f7670
        public_62f7690 : nop
        pop edi
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        pop esi
        pop ebx
        je public_62f76a9
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        public_62f76a9 : nop
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f7580)
    }
}

#undef public_62f75ac
#undef public_62f75c1
#undef public_62f75df
#undef public_62f75f6
#undef public_62f7620
#undef public_62f7649
#undef public_62f7666
#undef public_62f7670
#undef public_62f7690
#undef public_62f76a9
