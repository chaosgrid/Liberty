#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfa929 _public_6bfa929
#define public_6bfa941 _public_6bfa941
#define public_6bfa951 _public_6bfa951
#define public_6bfa978 _public_6bfa978
#define public_6bfa988 _public_6bfa988
#define public_6bfa994 _public_6bfa994
#define public_6bfa9ad _public_6bfa9ad
#define public_6bfa9bd _public_6bfa9bd
#define public_6bfa9c9 _public_6bfa9c9
#define public_6bfa9e2 _public_6bfa9e2
#define public_6bfa9f2 _public_6bfa9f2
#define public_6bfa9fe _public_6bfa9fe
#define public_6bfaa17 _public_6bfaa17
#define public_6bfaa27 _public_6bfaa27
#define public_6bfaa46 _public_6bfaa46
#define public_6bfaa56 _public_6bfaa56
#define public_6bfaa62 _public_6bfaa62
#define public_6bfaa81 _public_6bfaa81
#define public_6bfaa91 _public_6bfaa91
#define public_6bfaab2 _public_6bfaab2
#define public_6bfaac2 _public_6bfaac2
#define public_6bfaad1 _public_6bfaad1
#define public_6bfaaf5 _public_6bfaaf5
#define public_6bfab0e _public_6bfab0e
#define public_6bfab1e _public_6bfab1e
#define public_6bfab2c _public_6bfab2c
#define public_6bfab45 _public_6bfab45
#define public_6bfab55 _public_6bfab55
#define public_6bfab65 _public_6bfab65
#define public_6bfab7f _public_6bfab7f
#define public_6bfab8f _public_6bfab8f
#define public_6bfab9d _public_6bfab9d
#define public_6bfabb4 _public_6bfabb4
#define public_6bfabc4 _public_6bfabc4
#define public_6bfabe0 _public_6bfabe0
#define public_6bfabf6 _public_6bfabf6
#define public_6bfac0d _public_6bfac0d
#define public_6bfac24 _public_6bfac24
#define public_6bfac2d _public_6bfac2d
#define public_6bfac5e _public_6bfac5e

PROC_DECLARE(0x6bfa8e0, internal_6bfa8e0, public_6bfa8e0);
extern "C" NAKED register_t __cdecl internal_6bfa8e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        push edi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfa929
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfa929 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov esi, 0x16
        jbe public_6bfa941
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfa941 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfa951
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa951 : nop
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ss : [ebp+0x20]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [edi], eax
        test byte ptr ss : [ebp+0x20], 8
        je public_6bfa994
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfa978
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfa978 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfa988
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa988 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6bfa994 : nop
        test byte ptr ss : [ebp+0x20], 4
        je public_6bfa9c9
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfa9ad
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfa9ad : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfa9bd
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa9bd : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6bfa9c9 : nop
        test byte ptr ss : [ebp+0x20], 1
        je public_6bfa9fe
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfa9e2
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfa9e2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfa9f2
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfa9f2 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6bfa9fe : nop
        test byte ptr ss : [ebp+0x20], 2
        je public_6bfaa62
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfaa17
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfaa17 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfaa27
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfaa27 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfaa46
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfaa46 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfaa56
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfaa56 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6bfaa62 : nop
        test byte ptr ss : [ebp+0x20], 0x10
        je public_6bfaaf5
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov cx, word ptr ss : [ebp+0x48]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6bfaa81
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfaa81 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfaa91
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfaa91 : nop
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, cx
        mov ecx, dword ptr ds : [ebx]
        shl eax, 1
        add ecx, eax
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6bfaab2
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfaab2 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6bfaac2
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfaac2 : nop
        mov ecx, dword ptr ss : [ebp+0x44]
        test ecx, ecx
        mov esi, dword ptr ds : [public_6c0b17c]
        je public_6bfaad1
        mov esi, ecx
        public_6bfaad1 : nop
        mov edi, dword ptr ds : [edi]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, 0x16
        public_6bfaaf5 : nop
        test byte ptr ss : [ebp+0x20], 0x20
        je public_6bfab2c
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfab0e
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfab0e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfab1e
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfab1e : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6bfab2c : nop
        test byte ptr ss : [ebp+0x20], 0x40
        je public_6bfab65
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfab45
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfab45 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfab55
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfab55 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ss : [ebp+0x2C]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        public_6bfab65 : nop
        mov al, byte ptr ss : [ebp+0x20]
        test al, al
        jns public_6bfab9d
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfab7f
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfab7f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfab8f
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfab8f : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6bfab9d : nop
        test byte ptr ss : [ebp+0x21], 1
        je public_6bfac0d
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bfabb4
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfabb4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bfabc4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfabc4 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ss : [ebp+0x68]
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [ebp+0x60]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x5C]
        cmp eax, ecx
        je public_6bfac0d
        lea ebx, ds:[ebx]
        public_6bfabe0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        add eax, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6bfabf6
        mov dword ptr ds : [ebx+0xC], esi
        public_6bfabf6 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bfac24
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        cmp eax, dword ptr ss : [ebp+0x60]
        jne public_6bfabe0
        public_6bfac0d : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bfac2d
        public_6bfac24 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6bfac2d : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6bfac5e
        mov dword ptr ds : [ecx+0x10], ebx
        public_6bfac5e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bfa8e0)
    }
}

#undef public_6bfa929
#undef public_6bfa941
#undef public_6bfa951
#undef public_6bfa978
#undef public_6bfa988
#undef public_6bfa994
#undef public_6bfa9ad
#undef public_6bfa9bd
#undef public_6bfa9c9
#undef public_6bfa9e2
#undef public_6bfa9f2
#undef public_6bfa9fe
#undef public_6bfaa17
#undef public_6bfaa27
#undef public_6bfaa46
#undef public_6bfaa56
#undef public_6bfaa62
#undef public_6bfaa81
#undef public_6bfaa91
#undef public_6bfaab2
#undef public_6bfaac2
#undef public_6bfaad1
#undef public_6bfaaf5
#undef public_6bfab0e
#undef public_6bfab1e
#undef public_6bfab2c
#undef public_6bfab45
#undef public_6bfab55
#undef public_6bfab65
#undef public_6bfab7f
#undef public_6bfab8f
#undef public_6bfab9d
#undef public_6bfabb4
#undef public_6bfabc4
#undef public_6bfabe0
#undef public_6bfabf6
#undef public_6bfac0d
#undef public_6bfac24
#undef public_6bfac2d
#undef public_6bfac5e
