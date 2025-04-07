#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_6618880);
CLANG_FORWARD_PROC_SYMBOL(public_6619a50);
CLANG_FORWARD_PROC_SYMBOL(public_6619e60);
CLANG_FORWARD_PROC_SYMBOL(public_661a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_661a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_661a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_661aa60);

#define public_661889a _public_661889a
#define public_66188b0 _public_66188b0
#define public_66188b3 _public_66188b3
#define public_66188be _public_66188be
#define public_6618925 _public_6618925
#define public_661893d _public_661893d
#define public_6618947 _public_6618947
#define public_661894b _public_661894b
#define public_6618959 _public_6618959
#define public_6618994 _public_6618994
#define public_66189a3 _public_66189a3
#define public_66189c4 _public_66189c4
#define public_66189e5 _public_66189e5
#define public_66189f3 _public_66189f3
#define public_6618a12 _public_6618a12
#define public_6618a1e _public_6618a1e
#define public_6618a3a _public_6618a3a
#define public_6618a6c _public_6618a6c
#define public_6618a75 _public_6618a75
#define public_6618aad _public_6618aad

PROC_DECLARE(0x6618880, internal_6618880, public_6618880);
extern "C" NAKED register_t __cdecl internal_6618880()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, ecx
        je public_66188be
        public_661889a : nop
        lea eax, ss:[ebp+0xC]
        mov ecx, ebx
        push eax
        mov esi, ebp
        call public_6612b20
        test al, al
        je public_66188b0
        mov ebp, dword ptr ss : [ebp]
        jmp public_66188b3
        public_66188b0 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_66188b3 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        cmp ebp, ecx
        jne public_661889a
        public_66188be : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6618a3a
        push 0
        push esi
        mov ecx, edi
        call public_661a5a0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_661aa60
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6618925
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6618925
        lea eax, ds:[esi+0xC]
        mov ecx, ebx
        push eax
        call public_6612b20
        test al, al
        jne public_6618925
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_661894b
        mov dword ptr ds : [eax+8], ebx
        jmp public_661894b
        public_6618925 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_661893d
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6618947
        public_661893d : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6618947
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6618947 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_661894b : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_6618a1e
        public_6618959 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x2C]
        test cl, cl
        jne public_6618a1e
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_66189c4
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6618994
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6618a12
        public_6618994 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_66189a3
        mov esi, eax
        mov ecx, edi
        push esi
        call public_661a0c0
        public_66189a3 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6619a50
        jmp public_6618a12
        public_66189c4 : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_66189e5
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6618a12
        public_66189e5 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_66189f3
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6619a50
        public_66189f3 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x2C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_661a0c0
        public_6618a12 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6618959
        public_6618a1e : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6618a3a : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6618a75
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax]
        jne public_6618a6c
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_6619e60
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6618a6c : nop
        lea ecx, ss:[esp+0x10]
        call public_661a5c0
        public_6618a75 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        lea ecx, ds:[eax+0xC]
        call public_6612b20
        test al, al
        je public_6618aad
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x1C]
        push ecx
        push esi
        push ebp
        push edx
        mov ecx, edi
        call public_6619e60
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6618aad : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6618880)
    }
}

#undef public_661889a
#undef public_66188b0
#undef public_66188b3
#undef public_66188be
#undef public_6618925
#undef public_661893d
#undef public_6618947
#undef public_661894b
#undef public_6618959
#undef public_6618994
#undef public_66189a3
#undef public_66189c4
#undef public_66189e5
#undef public_66189f3
#undef public_6618a12
#undef public_6618a1e
#undef public_6618a3a
#undef public_6618a6c
#undef public_6618a75
#undef public_6618aad
