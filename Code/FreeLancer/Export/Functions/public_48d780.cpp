#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_476fe0);
CLANG_FORWARD_PROC_SYMBOL(public_48d780);

#define public_48d7e3 _public_48d7e3
#define public_48d804 _public_48d804
#define public_48d80d _public_48d80d
#define public_48d852 _public_48d852
#define public_48d879 _public_48d879

PROC_DECLARE(0x48d780, internal_48d780, public_48d780);
extern "C" NAKED register_t __cdecl internal_48d780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x12C
        push ebx
        push esi
        push edi
        push eax
        call dword ptr ds : [public_5c6094]
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        je public_48d879
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        mov dword ptr ss : [esp+0x7C], ebx
        mov byte ptr ss : [esp+0x80], bl
        mov dword ptr ss : [esp+0xAC], ebx
        mov byte ptr ss : [esp+0xB0], bl
        mov dword ptr ss : [esp+0xF0], ebx
        mov byte ptr ss : [esp+0xF4], bl
        call dword ptr ds : [edx+0x3C]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        jbe public_48d80d
        public_48d7e3 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_48d804
        mov edx, dword ptr ss : [esp+0xA0]
        cmp edx, dword ptr ss : [esp+0x140]
        je public_48d852
        public_48d804 : nop
        mov eax, dword ptr ss : [esp+0xC]
        inc edi
        cmp edi, eax
        jb public_48d7e3
        public_48d80d : nop
        mov edx, dword ptr ss : [esp+0x140]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call public_476fe0
        add esp, 0xC
        test al, al
        je public_48d879
        mov eax, dword ptr ss : [esp+0x13C]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0x12C
        ret 
        public_48d852 : nop
        mov eax, dword ptr ss : [esp+0x13C]
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x68]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x68]
        pop esi
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0x12C
        ret 
        public_48d879 : nop
        mov eax, dword ptr ss : [esp+0x13C]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        pop ebx
        add esp, 0x12C
        ret 
        UNREACHABLE_TRAP(0x48d780)
    }
}

#undef public_48d7e3
#undef public_48d804
#undef public_48d80d
#undef public_48d852
#undef public_48d879
