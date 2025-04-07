#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b64b0);
CLANG_FORWARD_PROC_SYMBOL(public_62b8ef0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9560);
CLANG_FORWARD_PROC_SYMBOL(public_62b95d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9650);
CLANG_FORWARD_PROC_SYMBOL(public_62b96c0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9780);
CLANG_FORWARD_PROC_SYMBOL(public_62b97f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9870);
CLANG_FORWARD_PROC_SYMBOL(public_62b99f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9b70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_62b6f82 _public_62b6f82
#define public_62b6fa9 _public_62b6fa9
#define public_62b6fc9 _public_62b6fc9
#define public_62b6fe7 _public_62b6fe7
#define public_62b6ff0 _public_62b6ff0
#define public_62b7014 _public_62b7014
#define public_62b7038 _public_62b7038
#define public_62b7060 _public_62b7060
#define public_62b7080 _public_62b7080
#define public_62b70a4 _public_62b70a4
#define public_62b70d8 _public_62b70d8
#define public_62b7100 _public_62b7100
#define public_62b7124 _public_62b7124
#define public_62b7130 _public_62b7130

PROC_DECLARE(0x62b6f60, internal_62b6f60, public_62b6f60);
extern "C" NAKED register_t __cdecl internal_62b6f60()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_62b6fc9
        mov ebx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov ebp, dword ptr ds : [eax+4]
        mov edi, dword ptr ss : [ebp]
        je public_62b6fa9
        public_62b6f82 : nop
        cmp edi, ebp
        je public_62b6fa9
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[edi+8]
        push edx
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_63991a8]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x10]
        jne public_62b6f82
        public_62b6fa9 : nop
        push ebx
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        call public_62b95d0
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        push edi
        push ebx
        call public_62b9560
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b6fc9 : nop
        lea edx, ds:[eax+0xC]
        lea ebp, ds:[ecx+0xC]
        cmp ebp, edx
        je public_62b7038
        mov ebx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        je public_62b7014
        jmp public_62b6ff0
        public_62b6fe7 : nop
        mov eax, dword ptr ss : [esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_62b6ff0 : nop
        cmp edi, eax
        je public_62b7014
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[edi+8]
        push eax
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_63991a8]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov edi, dword ptr ds : [edi]
        jne public_62b6fe7
        public_62b7014 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_62b95d0
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push edi
        push ebx
        mov ecx, ebp
        call public_62b9560
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b7038 : nop
        lea ebx, ds:[eax+0x18]
        lea ebp, ds:[ecx+0x18]
        cmp ebp, ebx
        je public_62b70a4
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_632c410
        cmp esi, edi
        mov ebx, dword ptr ds : [ebx+4]
        je public_62b7080
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, edi
        public_62b7060 : nop
        cmp eax, ebx
        je public_62b7080
        add eax, 8
        push eax
        lea ecx, ds:[esi+8]
        call public_62b8ef0
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], eax
        jne public_62b7060
        public_62b7080 : nop
        push edi
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_62b96c0
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        push edi
        mov ecx, ebp
        call public_62b9650
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b70a4 : nop
        lea ebx, ds:[eax+0x24]
        lea edi, ds:[ecx+0x24]
        cmp edi, ebx
        je public_62b7124
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_632c410
        mov esi, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call public_632c410
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx+4]
        je public_62b7100
        mov ecx, dword ptr ss : [esp+0x14]
        public_62b70d8 : nop
        cmp ecx, ebx
        je public_62b7100
        add ecx, 8
        push ecx
        lea ecx, ds:[eax+8]
        call public_62b64b0
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        jne public_62b70d8
        public_62b7100 : nop
        push esi
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_62b97f0
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        push esi
        mov ecx, edi
        call public_62b9780
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b7124 : nop
        mov edi, eax
        lea esi, ds:[ecx+0x30]
        sub edi, ecx
        mov ebx, 4
        public_62b7130 : nop
        lea ecx, ds:[edi+esi]
        push ecx
        mov ecx, esi
        call public_62b9870
        add esi, 0x14
        dec ebx
        jne public_62b7130
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x10]
        lea edx, ds:[edi+0x80]
        push edx
        lea ecx, ds:[esi+0x80]
        call public_62b99f0
        add edi, 0x94
        push edi
        lea ecx, ds:[esi+0x94]
        call public_62b9b70
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62b6f60)
    }
}

#undef public_62b6f82
#undef public_62b6fa9
#undef public_62b6fc9
#undef public_62b6fe7
#undef public_62b6ff0
#undef public_62b7014
#undef public_62b7038
#undef public_62b7060
#undef public_62b7080
#undef public_62b70a4
#undef public_62b70d8
#undef public_62b7100
#undef public_62b7124
#undef public_62b7130
