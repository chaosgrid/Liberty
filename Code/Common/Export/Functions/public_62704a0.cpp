#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b520);
CLANG_FORWARD_PROC_SYMBOL(public_6270090);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62704b1 _public_62704b1
#define public_62704c8 _public_62704c8
#define public_62704cf _public_62704cf
#define public_62704d8 _public_62704d8
#define public_62704ed _public_62704ed
#define public_6270553 _public_6270553
#define public_6270557 _public_6270557
#define public_627057c _public_627057c
#define public_62705e7 _public_62705e7
#define public_62705f0 _public_62705f0
#define public_6270615 _public_6270615

PROC_DECLARE(0x62704a0, internal_62704a0, public_62704a0);
extern "C" NAKED register_t __cdecl internal_62704a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_62704cf
        public_62704b1 : nop
        mov ebx, dword ptr ds : [esi+8]
        test ebx, ebx
        je public_62704c8
        mov ecx, ebx
        call public_6270090
        push ebx
        call public_6391d5a
        add esp, 4
        public_62704c8 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_62704b1
        public_62704cf : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_62704ed
        public_62704d8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_62704d8
        public_62704ed : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        lea esi, ds:[edi+0xC]
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], eax
        je public_6270553
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_632c410
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_6270553
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, ecx
        jne public_6270553
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, esi
        call public_626b520
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_627057c
        public_6270553 : nop
        cmp eax, ebx
        je public_627057c
        public_6270557 : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_62a1c30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62be400
        cmp dword ptr ss : [esp+0xC], ebx
        jne public_6270557
        public_627057c : nop
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        lea esi, ds:[edi+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], eax
        je public_62705e7
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_632c410
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_62705e7
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_62705e7
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_626b520
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        public_62705e7 : nop
        cmp eax, edi
        je public_6270615
        nop 
        lea esp, ss:[esp]
        public_62705f0 : nop
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_62a1c30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_62be400
        cmp dword ptr ss : [esp+0xC], edi
        jne public_62705f0
        public_6270615 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62704a0)
    }
}

#undef public_62704b1
#undef public_62704c8
#undef public_62704cf
#undef public_62704d8
#undef public_62704ed
#undef public_6270553
#undef public_6270557
#undef public_627057c
#undef public_62705e7
#undef public_62705f0
#undef public_6270615
