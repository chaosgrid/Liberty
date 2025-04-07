#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9870);
CLANG_FORWARD_PROC_SYMBOL(public_62b9dd0);
CLANG_FORWARD_PROC_SYMBOL(public_62ba1b0);
CLANG_FORWARD_PROC_SYMBOL(public_62ba230);
CLANG_FORWARD_PROC_SYMBOL(public_62ba270);
CLANG_FORWARD_PROC_SYMBOL(public_62bae10);
CLANG_FORWARD_PROC_SYMBOL(public_62bb210);
CLANG_FORWARD_PROC_SYMBOL(public_62bb520);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b98a5 _public_62b98a5
#define public_62b98ce _public_62b98ce
#define public_62b98eb _public_62b98eb
#define public_62b98f0 _public_62b98f0
#define public_62b9910 _public_62b9910
#define public_62b9961 _public_62b9961
#define public_62b997d _public_62b997d
#define public_62b99a5 _public_62b99a5
#define public_62b99b0 _public_62b99b0
#define public_62b99c2 _public_62b99c2
#define public_62b99ce _public_62b99ce
#define public_62b99db _public_62b99db
#define public_62b99e3 _public_62b99e3

PROC_DECLARE(0x62b9870, internal_62b9870, public_62b9870);
extern "C" NAKED register_t __cdecl internal_62b9870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        cmp esi, eax
        je public_62b99e3
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62b98eb
        mov ecx, eax
        cmp eax, ecx
        jne public_62b98eb
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62b98ce
        public_62b98a5 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62ba230
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_62bb520
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62b98a5
        public_62b98ce : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_62b9910
        public_62b98eb : nop
        cmp eax, edi
        je public_62b9910
        nop 
        public_62b98f0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62bae10
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62b9dd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62b98f0
        public_62b9910 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ds : [ecx+1]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], dl
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [ebx+0x31]
        test cl, cl
        jne public_62b997d
        xor edx, edx
        mov dl, byte ptr ds : [ebx+0x30]
        mov ecx, esi
        push edx
        push eax
        call public_62ba270
        mov edi, eax
        lea eax, ds:[ebx+0xC]
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        call public_62bb210
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebp, eax
        jne public_62b9961
        mov ebp, edi
        public_62b9961 : nop
        mov ecx, dword ptr ds : [ebx]
        push edi
        push ecx
        mov ecx, esi
        call public_62ba1b0
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+8]
        push edi
        push edx
        mov ecx, esi
        call public_62ba1b0
        mov dword ptr ds : [edi+8], eax
        public_62b997d : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], ebp
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        pop ebp
        je public_62b99db
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        jne public_62b99b0
        public_62b99a5 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x31]
        test bl, bl
        je public_62b99a5
        public_62b99b0 : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_62b99ce
        public_62b99c2 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_62b99c2
        public_62b99ce : nop
        mov eax, esi
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 8
        ret 4
        public_62b99db : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        public_62b99e3 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62b9870)
    }
}

#undef public_62b98a5
#undef public_62b98ce
#undef public_62b98eb
#undef public_62b98f0
#undef public_62b9910
#undef public_62b9961
#undef public_62b997d
#undef public_62b99a5
#undef public_62b99b0
#undef public_62b99c2
#undef public_62b99ce
#undef public_62b99db
#undef public_62b99e3
