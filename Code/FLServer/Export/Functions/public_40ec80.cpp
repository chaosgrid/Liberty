#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403e30);
CLANG_FORWARD_PROC_SYMBOL(public_409840);
CLANG_FORWARD_PROC_SYMBOL(public_40bcf0);
CLANG_FORWARD_PROC_SYMBOL(public_40ec80);
CLANG_FORWARD_PROC_SYMBOL(public_40ee20);
CLANG_FORWARD_PROC_SYMBOL(public_418c60);

#define public_40ecc6 _public_40ecc6
#define public_40ecf5 _public_40ecf5
#define public_40ed28 _public_40ed28
#define public_40ed3e _public_40ed3e
#define public_40ed76 _public_40ed76
#define public_40ed86 _public_40ed86
#define public_40edef _public_40edef
#define public_40ee14 _public_40ee14

PROC_DECLARE(0x40ec80, internal_40ec80, public_40ec80);
extern "C" NAKED register_t __cdecl internal_40ec80()
{
    __asm
    {
        sub esp, 0x14
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x1EC]
        test al, al
        je public_40ee14
        mov ecx, dword ptr ds : [public_427828]
        test ecx, ecx
        je public_40ee14
        call public_40bcf0
        test al, al
        je public_40edef
        mov eax, dword ptr ds : [edi+0x220]
        test eax, eax
        push esi
        lea esi, ds:[edi+0x218]
        ja public_40ecc6
        call dword ptr ds : [public_41b8d0]
        public_40ecc6 : nop
        push ebx
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_41b8e0]
        mov eax, dword ptr ds : [esi+4]
        mov cx, word ptr ds : [eax]
        mov word ptr ss : [esp+0x10], cx
        mov ecx, esi
        mov ebp, 1
        call dword ptr ds : [public_41b8dc]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_40ecf5
        mov ebp, eax
        test ebp, ebp
        jbe public_40ed28
        public_40ecf5 : nop
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp*2]
        push edx
        push ecx
        call public_403e30
        mov ebx, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub ebx, ebp
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_41b878]
        test al, al
        je public_40ed28
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], ebx
        mov word ptr ds : [eax+ebx*2], 0
        public_40ed28 : nop
        mov ecx, dword ptr ds : [public_41b894]
        mov edx, dword ptr ds : [ecx]
        sub edx, dword ptr ds : [esi+8]
        cmp edx, 1
        ja public_40ed3e
        call dword ptr ds : [public_41b8a0]
        public_40ed3e : nop
        mov ebx, dword ptr ds : [esi+8]
        push 0
        inc ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_41b878]
        test al, al
        je public_40ed76
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push 1
        push eax
        lea eax, ds:[edx+ecx*2]
        push eax
        call public_40ee20
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], ebx
        add esp, 0xC
        mov word ptr ds : [ecx+ebx*2], 0
        public_40ed76 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        mov eax, dword ptr ds : [public_41b8c8]
        pop ebp
        pop ebx
        je public_40ed86
        mov eax, esi
        public_40ed86 : nop
        mov edx, dword ptr ds : [edi+0xA0]
        push eax
        push edx
        call public_409840
        mov ecx, dword ptr ds : [edi+0xA0]
        add esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_41bc14]
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, edi
        call public_418c60
        mov ecx, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [public_41bbb4]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call esi
        mov edx, dword ptr ds : [edi+0xA0]
        push 1
        push 0
        push edx
        call esi
        mov eax, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [public_41bbfc]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0xA0]
        push ecx
        call esi
        pop esi
        pop edi
        add esp, 0x14
        ret 
        public_40edef : nop
        mov edx, dword ptr ds : [edi+0x20]
        push 0x2002
        push edx
        call dword ptr ds : [public_41bbd8]
        mov eax, dword ptr ds : [edi+0x20]
        push 0
        push 0x3E8
        push 0x2001
        push eax
        call dword ptr ds : [public_41bc18]
        public_40ee14 : nop
        pop edi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x40ec80)
    }
}

#undef public_40ecc6
#undef public_40ecf5
#undef public_40ed28
#undef public_40ed3e
#undef public_40ed76
#undef public_40ed86
#undef public_40edef
#undef public_40ee14
