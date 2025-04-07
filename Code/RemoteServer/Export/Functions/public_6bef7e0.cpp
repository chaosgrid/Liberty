#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ee8);

#define public_6bef82f _public_6bef82f
#define public_6bef856 _public_6bef856
#define public_6bef880 _public_6bef880
#define public_6bef8ac _public_6bef8ac
#define public_6bef8da _public_6bef8da
#define public_6bef906 _public_6bef906
#define public_6bef934 _public_6bef934
#define public_6bef960 _public_6bef960
#define public_6bef9ef _public_6bef9ef
#define public_6befa02 _public_6befa02
#define public_6befa1e _public_6befa1e
#define public_6befa31 _public_6befa31
#define public_6befa4d _public_6befa4d
#define public_6befa60 _public_6befa60
#define public_6befa7c _public_6befa7c
#define public_6befa8f _public_6befa8f
#define public_6befab8 _public_6befab8
#define public_6befaeb _public_6befaeb
#define public_6befaf7 _public_6befaf7

PROC_DECLARE(0x6bef7e0, internal_6bef7e0, public_6bef7e0);
extern "C" NAKED register_t __cdecl internal_6bef7e0()
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
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bef82f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bef82f : nop
        mov ecx, dword ptr ds : [edi+0x24]
        push ecx
        call dword ptr ds : [public_6c0b00c]
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        mov edx, eax
        mov eax, dword ptr ds : [esi]
        add eax, 2
        mov ecx, eax
        cmp ecx, ebx
        mov dword ptr ds : [esi], eax
        mov eax, 0x16
        jbe public_6bef856
        mov dword ptr ds : [esi+0xC], eax
        public_6bef856 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6befaf7
        mov ecx, dword ptr ss : [ebp]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bef880
        mov dword ptr ds : [esi+0xC], eax
        public_6bef880 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6befaf7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bef8ac
        mov dword ptr ds : [esi+0xC], eax
        public_6bef8ac : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6befaf7
        mov ecx, dword ptr ss : [ebp]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bef8da
        mov dword ptr ds : [esi+0xC], eax
        public_6bef8da : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6befaf7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bef906
        mov dword ptr ds : [esi+0xC], eax
        public_6bef906 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6befaf7
        mov ecx, dword ptr ss : [ebp]
        mov dx, word ptr ds : [edi+0x34]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bef934
        mov dword ptr ds : [esi+0xC], eax
        public_6bef934 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6befaf7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bef960
        mov dword ptr ds : [esi+0xC], eax
        public_6bef960 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6befaf7
        mov eax, dword ptr ds : [edi+0x3C]
        mov ecx, dword ptr ds : [edi+0x40]
        mov ebx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edx
        call public_6bda4c0
        fld dword ptr ds : [edi+0x4C]
        fmul qword ptr ds : [public_6c0df40]
        add ebx, 0xC
        mov dword ptr ss : [ebp], ebx
        call public_6c09ee8
        fld dword ptr ds : [edi+0x50]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x28], al
        call public_6c09ee8
        fld dword ptr ds : [edi+0x54]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x24], al
        call public_6c09ee8
        fld dword ptr ds : [edi+0x48]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x13], al
        call public_6c09ee8
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        mov ebx, 0x16
        jbe public_6bef9ef
        mov dword ptr ds : [esi+0xC], ebx
        public_6bef9ef : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6befa02
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6befa02 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6befa1e
        mov dword ptr ds : [esi+0xC], ebx
        public_6befa1e : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6befa31
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6befa31 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6befa4d
        mov dword ptr ds : [esi+0xC], ebx
        public_6befa4d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6befa60
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6befa60 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6befa7c
        mov dword ptr ds : [esi+0xC], ebx
        public_6befa7c : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6befa8f
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6befa8f : nop
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], al
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        inc ecx
        push eax
        mov dword ptr ss : [ebp], ecx
        push ebp
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6befab8
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6befab8 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
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
        jbe public_6befaeb
        mov dword ptr ds : [ecx+0x10], esi
        public_6befaeb : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6befaf7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6bef7e0)
    }
}

#undef public_6bef82f
#undef public_6bef856
#undef public_6bef880
#undef public_6bef8ac
#undef public_6bef8da
#undef public_6bef906
#undef public_6bef934
#undef public_6bef960
#undef public_6bef9ef
#undef public_6befa02
#undef public_6befa1e
#undef public_6befa31
#undef public_6befa4d
#undef public_6befa60
#undef public_6befa7c
#undef public_6befa8f
#undef public_6befab8
#undef public_6befaeb
#undef public_6befaf7
