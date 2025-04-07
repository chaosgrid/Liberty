#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6282f00);
CLANG_FORWARD_PROC_SYMBOL(public_6282f90);
CLANG_FORWARD_PROC_SYMBOL(public_6282fd0);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6280d75 _public_6280d75
#define public_6280d9c _public_6280d9c
#define public_6280db9 _public_6280db9
#define public_6280dc0 _public_6280dc0
#define public_6280de8 _public_6280de8
#define public_6280e34 _public_6280e34
#define public_6280e58 _public_6280e58
#define public_6280e80 _public_6280e80
#define public_6280e8b _public_6280e8b
#define public_6280eab _public_6280eab
#define public_6280eb3 _public_6280eb3

PROC_DECLARE(0x6280d30, internal_6280d30, public_6280d30);
extern "C" NAKED register_t __cdecl internal_6280d30()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ebx
        push esi
        mov dword ptr ds : [ecx], edx
        lea edx, ds:[eax+4]
        lea esi, ds:[ecx+4]
        cmp esi, edx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0x18], edx
        je public_6280eb3
        mov ebx, dword ptr ds : [esi+0x10]
        test ebx, ebx
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], eax
        je public_6280db9
        mov ebx, eax
        cmp eax, ebx
        jne public_6280db9
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6280d9c
        public_6280d75 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6282f90
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6280d75
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        public_6280d9c : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6280de8
        public_6280db9 : nop
        cmp eax, edi
        je public_6280de8
        lea ecx, ds:[ecx]
        public_6280dc0 : nop
        lea ecx, ss:[esp+0x14]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jne public_6280dc0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        public_6280de8 : nop
        mov al, byte ptr ds : [edx+1]
        mov ebp, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], al
        mov edi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [edi+4]
        cmp byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+4]
        jne public_6280e58
        xor ecx, ecx
        mov cl, byte ptr ds : [ebx+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_626b3a0
        mov edi, eax
        lea edx, ds:[ebx+0xC]
        push edx
        lea eax, ds:[edi+0xC]
        push eax
        call public_62bee40
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebp, eax
        jne public_6280e34
        mov ebp, edi
        public_6280e34 : nop
        mov eax, dword ptr ds : [ebx]
        push edi
        push eax
        mov ecx, esi
        call public_6282f00
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [ebx+8]
        push edi
        push ecx
        mov ecx, esi
        call public_6282f00
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+8], eax
        public_6280e58 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ebp
        mov edx, dword ptr ds : [edx+0x10]
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, edi
        pop edi
        pop ebp
        je public_6280eab
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6280e8b
        mov edi, edi
        public_6280e80 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6280e80
        public_6280e8b : nop
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6282fd0
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_6280eab : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6280eb3 : nop
        pop esi
        mov eax, ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6280d30)
    }
}

#undef public_6280d75
#undef public_6280d9c
#undef public_6280db9
#undef public_6280dc0
#undef public_6280de8
#undef public_6280e34
#undef public_6280e58
#undef public_6280e80
#undef public_6280e8b
#undef public_6280eab
#undef public_6280eb3
