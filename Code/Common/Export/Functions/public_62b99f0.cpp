#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b99f0);
CLANG_FORWARD_PROC_SYMBOL(public_62ba290);
CLANG_FORWARD_PROC_SYMBOL(public_62ba670);
CLANG_FORWARD_PROC_SYMBOL(public_62ba6f0);
CLANG_FORWARD_PROC_SYMBOL(public_62ba730);
CLANG_FORWARD_PROC_SYMBOL(public_62bae60);
CLANG_FORWARD_PROC_SYMBOL(public_62bb390);
CLANG_FORWARD_PROC_SYMBOL(public_62bb540);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b9a25 _public_62b9a25
#define public_62b9a4e _public_62b9a4e
#define public_62b9a6b _public_62b9a6b
#define public_62b9a70 _public_62b9a70
#define public_62b9a90 _public_62b9a90
#define public_62b9ae1 _public_62b9ae1
#define public_62b9afd _public_62b9afd
#define public_62b9b25 _public_62b9b25
#define public_62b9b30 _public_62b9b30
#define public_62b9b42 _public_62b9b42
#define public_62b9b4e _public_62b9b4e
#define public_62b9b5b _public_62b9b5b
#define public_62b9b63 _public_62b9b63

PROC_DECLARE(0x62b99f0, internal_62b99f0, public_62b99f0);
extern "C" NAKED register_t __cdecl internal_62b99f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        cmp esi, eax
        je public_62b9b63
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62b9a6b
        mov ecx, eax
        cmp eax, ecx
        jne public_62b9a6b
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62b9a4e
        public_62b9a25 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62ba6f0
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_62bb540
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62b9a25
        public_62b9a4e : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_62b9a90
        public_62b9a6b : nop
        cmp eax, edi
        je public_62b9a90
        nop 
        public_62b9a70 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62bae60
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62ba290
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62b9a70
        public_62b9a90 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ds : [ecx+1]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], dl
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [ebx+0x51]
        test cl, cl
        jne public_62b9afd
        xor edx, edx
        mov dl, byte ptr ds : [ebx+0x50]
        mov ecx, esi
        push edx
        push eax
        call public_62ba730
        mov edi, eax
        lea eax, ds:[ebx+0xC]
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        call public_62bb390
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebp, eax
        jne public_62b9ae1
        mov ebp, edi
        public_62b9ae1 : nop
        mov ecx, dword ptr ds : [ebx]
        push edi
        push ecx
        mov ecx, esi
        call public_62ba670
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+8]
        push edi
        push edx
        mov ecx, esi
        call public_62ba670
        mov dword ptr ds : [edi+8], eax
        public_62b9afd : nop
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
        je public_62b9b5b
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        jne public_62b9b30
        public_62b9b25 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_62b9b25
        public_62b9b30 : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_62b9b4e
        public_62b9b42 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_62b9b42
        public_62b9b4e : nop
        mov eax, esi
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 8
        ret 4
        public_62b9b5b : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        public_62b9b63 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62b99f0)
    }
}

#undef public_62b9a25
#undef public_62b9a4e
#undef public_62b9a6b
#undef public_62b9a70
#undef public_62b9a90
#undef public_62b9ae1
#undef public_62b9afd
#undef public_62b9b25
#undef public_62b9b30
#undef public_62b9b42
#undef public_62b9b4e
#undef public_62b9b5b
#undef public_62b9b63
