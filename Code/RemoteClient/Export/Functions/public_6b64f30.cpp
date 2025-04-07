#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b64f76 _public_6b64f76
#define public_6b64f8c _public_6b64f8c
#define public_6b64fb4 _public_6b64fb4
#define public_6b64fde _public_6b64fde
#define public_6b6500f _public_6b6500f
#define public_6b65036 _public_6b65036
#define public_6b6505d _public_6b6505d
#define public_6b6507e _public_6b6507e
#define public_6b650f5 _public_6b650f5
#define public_6b6512e _public_6b6512e
#define public_6b65160 _public_6b65160
#define public_6b6519e _public_6b6519e
#define public_6b651aa _public_6b651aa

PROC_DECLARE(0x6b64f30, internal_6b64f30, public_6b64f30);
extern "C" NAKED register_t __cdecl internal_6b64f30()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b64f76
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b64f76 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6b64f8c
        mov dword ptr ds : [esi+0xC], ebp
        public_6b64f8c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edi+0x20], dl
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b64fb4
        mov dword ptr ds : [esi+0xC], ebp
        public_6b64fb4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b64fde
        mov dword ptr ds : [esi+0xC], ebp
        public_6b64fde : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x28]
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6b6500f
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6500f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ss : [esp+0x18], dl
        mov edx, dword ptr ds : [esi]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b65036
        mov dword ptr ds : [esi+0xC], ebp
        public_6b65036 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        inc edx
        mov byte ptr ss : [esp+0x13], cl
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b6505d
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6505d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b6507e
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6507e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        movsx eax, byte ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6b6c1e8]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ds : [edi+0x38]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [edi+0x3C]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [edi+0x40]
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b650f5
        mov dword ptr ds : [esi+0xC], ebp
        public_6b650f5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        movsx ecx, cl
        mov dword ptr ss : [esp+0x18], ecx
        inc eax
        mov dword ptr ds : [ebx], eax
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [edi+0x48]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b6512e
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6512e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b651aa
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x44], edx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b65160
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6b65160 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6b6519e
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b6519e : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b651aa : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b64f30)
    }
}

#undef public_6b64f76
#undef public_6b64f8c
#undef public_6b64fb4
#undef public_6b64fde
#undef public_6b6500f
#undef public_6b65036
#undef public_6b6505d
#undef public_6b6507e
#undef public_6b650f5
#undef public_6b6512e
#undef public_6b65160
#undef public_6b6519e
#undef public_6b651aa
