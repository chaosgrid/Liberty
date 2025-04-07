#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ee8);

#define public_6bfc14a _public_6bfc14a
#define public_6bfc174 _public_6bfc174
#define public_6bfc1a0 _public_6bfc1a0
#define public_6bfc22f _public_6bfc22f
#define public_6bfc256 _public_6bfc256
#define public_6bfc27d _public_6bfc27d
#define public_6bfc2a4 _public_6bfc2a4
#define public_6bfc2db _public_6bfc2db
#define public_6bfc2f1 _public_6bfc2f1
#define public_6bfc311 _public_6bfc311
#define public_6bfc327 _public_6bfc327
#define public_6bfc358 _public_6bfc358
#define public_6bfc38b _public_6bfc38b
#define public_6bfc397 _public_6bfc397

PROC_DECLARE(0x6bfc0f0, internal_6bfc0f0, public_6bfc0f0);
extern "C" NAKED register_t __cdecl internal_6bfc0f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        call public_6bebe50
        mov dword ptr ds : [edi+0x1C], eax
        test eax, eax
        mov eax, 0x16
        jne public_6bfc397
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bfc14a
        mov dword ptr ds : [esi+0xC], eax
        public_6bfc14a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bfc397
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bfc174
        mov dword ptr ds : [esi+0xC], eax
        public_6bfc174 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bfc397
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bfc1a0
        mov dword ptr ds : [esi+0xC], eax
        public_6bfc1a0 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bfc397
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edx
        call public_6bda4c0
        fld dword ptr ds : [edi+0x38]
        fmul qword ptr ds : [public_6c0df40]
        add ebx, 0xC
        mov dword ptr ss : [ebp], ebx
        call public_6c09ee8
        fld dword ptr ds : [edi+0x3C]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x28], al
        call public_6c09ee8
        fld dword ptr ds : [edi+0x40]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x24], al
        call public_6c09ee8
        fld dword ptr ds : [edi+0x34]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x13], al
        call public_6c09ee8
        mov ecx, dword ptr ds : [esi]
        mov dl, al
        mov eax, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [esi], ecx
        mov eax, 0x16
        jbe public_6bfc22f
        mov dword ptr ds : [esi+0xC], eax
        public_6bfc22f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bfc397
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6bfc256
        mov dword ptr ds : [esi+0xC], eax
        public_6bfc256 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bfc397
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6bfc27d
        mov dword ptr ds : [esi+0xC], eax
        public_6bfc27d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bfc397
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6bfc2a4
        mov dword ptr ds : [esi+0xC], eax
        public_6bfc2a4 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bfc397
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], dl
        fld dword ptr ds : [edi+0x48]
        fmul qword ptr ds : [public_6c0df40]
        inc ecx
        mov dword ptr ss : [ebp], ecx
        call public_6c09ee8
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bfc2db
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bfc2db : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6bfc2f1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bfc2f1 : nop
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfc311
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bfc311 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfc327
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bfc327 : nop
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ds : [edi+0x44]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add eax, 4
        push ebp
        mov ecx, edi
        mov dword ptr ss : [ebp], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfc358
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bfc358 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6bfc38b
        mov dword ptr ds : [ecx+0x10], esi
        public_6bfc38b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bfc397 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6bfc0f0)
    }
}

#undef public_6bfc14a
#undef public_6bfc174
#undef public_6bfc1a0
#undef public_6bfc22f
#undef public_6bfc256
#undef public_6bfc27d
#undef public_6bfc2a4
#undef public_6bfc2db
#undef public_6bfc2f1
#undef public_6bfc311
#undef public_6bfc327
#undef public_6bfc358
#undef public_6bfc38b
#undef public_6bfc397
