#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bfedc2 _public_6bfedc2
#define public_6bfedd9 _public_6bfedd9
#define public_6bfee17 _public_6bfee17
#define public_6bfee63 _public_6bfee63
#define public_6bfee91 _public_6bfee91
#define public_6bfeec4 _public_6bfeec4
#define public_6bfef02 _public_6bfef02
#define public_6bfef0e _public_6bfef0e

PROC_DECLARE(0x6bfed80, internal_6bfed80, public_6bfed80);
extern "C" NAKED register_t __cdecl internal_6bfed80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea ebx, ss:[ebp+0x10]
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfedc2
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfedc2 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfedd9
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bfedd9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfef0e
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, edx
        push eax
        mov dword ptr ss : [ebp+0x28], edx
        call public_6c09d26
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [ebp+0x2C], eax
        mov edx, dword ptr ds : [ebx]
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfee17
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bfee17 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfef0e
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [esi]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        push edi
        mov edi, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ecx+eax]
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ds : [ecx], edx
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        pop edi
        jbe public_6bfee63
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bfee63 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfef0e
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6bfee91
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bfee91 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bfef0e
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x24], edx
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfeec4
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfeec4 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6bfef02
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6bfef02 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfef0e : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfed80)
    }
}

#undef public_6bfedc2
#undef public_6bfedd9
#undef public_6bfee17
#undef public_6bfee63
#undef public_6bfee91
#undef public_6bfeec4
#undef public_6bfef02
#undef public_6bfef0e
